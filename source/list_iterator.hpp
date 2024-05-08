#ifndef BUW_LIST_ITERATOR_HPP
#define BUW_LIST_ITERATOR_HPP

#include "list_node.hpp"

//TODO: Implementierung der Methoden des Iterators 
//      (nach Vorlesung STL-1 am 21. Mai) (Aufgabe 3.10)
template <typename T>
struct ListIterator {
    using Self = ListIterator<T>;
    using value_type = T;
    using pointer = T*;
    using reference = T&;
    using difference_type = ptrdiff_t;
    using iterator_category = std::bidirectional_iterator_tag;

    /* DESCRIPTION  operator*() */ //Aufgabe 3.10 - Teil 1
    T& operator*()  const;

    /* DESCRIPTION  operator->() */ //Aufgabe 3.10 - Teil 2
    T* operator->() const;

    /* PREINCREMENT, call: ++it, advances one element forward */ //Aufgabe 3.10 - Teil 3
    ListIterator<T>& operator++();

    /* POSTINCREMENT (signature distinguishes the iterators),
                      call:  it++, advances one element forward*/ // Aufgabe 3.10 - Teil 4
    ListIterator<T> operator++(int);

    /* ... */ // Aufgabe 3.10 - Teil 5
    bool operator==(ListIterator<T> const& x) const;

    /* ... */ // Aufgabe 3.10 - Teil 6
    bool operator!=(ListIterator<T> const& x) const;

    /* Advances Iterator */
    ListIterator<T> next() const;

    //only member variable, pointer to the underlying node (see list_node.hpp)
    ListNode <T>* node = nullptr;
};


// START OF IMPLEMENTATION SECTION FOR MEMBER FUNCTIONS
//=========================
//(Aufgabe 3.10 - Teil 1)
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
template <typename T>
ListIterator<T>& ListIterator<T>::operator++() {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: Implement Postincrement-Operation for Iterator
}

//=========================
//  (Aufgabe 3.10 - Teil 4)
template <typename T>
ListIterator<T> ListIterator<T>::operator++(int) {
    if (nullptr == node) {
        throw "Iterator does not point to valid node";
    }

    //TODO: Implement Postincrement-Operation for Iterator
}

//=========================
//  (Aufgabe 3.10 - Teil 5)
template <typename T>
bool ListIterator<T>::operator==(ListIterator<T> const& x) const {
    //TODO: Implement Equality-Operation for Iterator
    // Iterators should be the same if they refer to the same node
    return false;
} // call it: == it

//=========================
//  (Aufgabe 3.10 - Teil 6)
template <typename T>
bool ListIterator<T>::operator!=(ListIterator<T> const& x) const {
    //TODO: Implement Inequality-Operation for Iterator  
    // Reuse operator==
    return false;
} // call it: != it

//=========================
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