#ifndef BUW_LIST_ITERATOR_HPP
#define BUW_LIST_ITERATOR_HPP

#include "list_node.hpp"

//TODO: Implementierung der Methoden des Iterators 
//      (nach Vorlesung STL-1 am 22. Mai) (Aufgabe 3.10)
template <typename T>
struct ListIterator {
    using Self = ListIterator<T>;
    using value_type = T;
    using pointer = T*;
    using reference = T&;
    using difference_type = ptrdiff_t;
    using iterator_category = std::bidirectional_iterator_tag;

    /* Declaration of operator*() */
    T& operator*()  const;

    /* Declaration of operator->() */
    T* operator->() const;

    /* Declaration of PREINCREMENT-operator, call: ++it, advances one element forward */
    ListIterator<T>& operator++();

    /* Declaration of POSTINCREMENT (signature distinguishes the iterators),
                      call:  it++, advances one element forward */
    ListIterator<T> operator++(int);

    /* Declaration of comparison-operator in terms of equality */
    bool operator==(ListIterator<T> const& x) const;

    /* Declaration of comparison-operator in terms of inequality */
    bool operator!=(ListIterator<T> const& x) const;

    /* Advances Iterator */
    ListIterator<T> next() const;

    //only member variable, pointer to the underlying node (see list_node.hpp)
    ListNode <T>* node = nullptr;
};

/* ======================================== *
 * BEGIN COMMENTING AND IMPLEMENTATION HERE *
 * ======================================== */

//(Aufgabe 3.10 - Teil 1)
/* Definition of Dereferenceing operator*() /
/* ... */
// not implemented yet
template <typename T>
T& ListIterator<T>::operator*() const {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: remaining implementation of derefenciation of 
    //      iterator using operator*

} //call: *it

//=========================
//(Aufgabe 3.10 - Teil 2)
/* Definition of Dereferenceing operator->() /
/* ... */
// not implemented yet
template <typename T>
T* ListIterator<T>::operator->() const {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: remaining implementation of derefenciation of 
    //      iterator using operator->
}  //call it->method() or it->member

//=========================
// (Aufgabe 3.10 - Teil 3)
/* Definition of preincrement operator ++it /
/* ... */
// not implemented yet
template <typename T>
ListIterator<T>& ListIterator<T>::operator++() {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: Implement Postincrement-Operation for Iterator
}

//=========================
//  (Aufgabe 3.10 - Teil 4)
/* Definition of postincrement operator it++ /
/* ... */
// not implemented yet
template <typename T>
ListIterator<T> ListIterator<T>::operator++(int) {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: Implement Postincrement-Operation for Iterator
}

//=========================
//  (Aufgabe 3.10 - Teil 5)
/* Definition of comparison-operator for iterators in terms of equality */
/* ... */
// not implemented yet
template <typename T>
bool ListIterator<T>::operator==(ListIterator<T> const& x) const {
    //TODO: Implement Equality-Operation for Iterator
    // Iterators should be the same if they refer to the same node
    return false;
} // call it: == it

//=========================
//  (Aufgabe 3.10 - Teil 6)
/* Definition of comparison-operator for iterators in terms of inequality */
/* ... */
// not implemented yet
template <typename T>
bool ListIterator<T>::operator!=(ListIterator<T> const& x) const {
    //TODO: Implement Inequality-Operation for Iterator  
    // Reuse operator==
    return false;
} // call it: != it

//=========================
// is already implemented
template <typename T>
ListIterator<T> ListIterator<T>::next() const {
    if (nullptr != node) {
        return ListIterator{ node->next };
    }
    else {
        return ListIterator{ nullptr };
    }
}

#endif // #ifndef BUW_LIST_ITERATOR_HPP