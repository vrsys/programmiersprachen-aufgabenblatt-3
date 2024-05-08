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


    /* DESCRIPTION  operator*() */
    T& operator*()  const {
        if (nullptr == node) {
            throw "Iterator does not point to valid node";
        }

        //TODO: remaining implementation of derefenciation of 
        //      iterator using operator* (Aufgabe 3.10 - Teil 1)

    } //call *it

    /* DESCRIPTION  operator->() */
    T* operator->() const {
        if (nullptr == node) {
            throw "Iterator does not point to valid node";
        }

        //TODO: remaining implementation of derefenciation of 
        //      iterator using operator-> (Aufgabe 3.10 - Teil 2)
    }  //call it->method() or it->member


    /* PREINCREMENT, call: ++it, advances one element forward */
    ListIterator<T>& operator++() {
        if (nullptr == node) {
            throw "Iterator does not point to valid node";
        }

        //TODO: Implement Postincrement-Operation for Iterator
        //      (Aufgabe 3.10 - Teil 3)

    }

    /* POSTINCREMENT (signature distinguishes the iterators),
                      call:  it++, advances one element forward*/
    ListIterator<T> operator++(int) {
        if (nullptr == node) {
            throw "Iterator does not point to valid node";
        }

        //TODO: Implement Postincrement-Operation for Iterator
        //      (Aufgabe 3.10 - Teil 4)

    }


    /* ... */
    bool operator==(ListIterator<T> const& x) const {
        //TODO: Implement Equality-Operation for Iterator
        //      (Aufgabe 3.10 - Teil 5)
        // Iterators should be the same if they refer to the same node
        return false;
    } // call it: == it

    /* ... */
    bool operator!=(ListIterator<T> const& x) const {
        //TODO: Implement Inequality-Operation for Iterator  
        //      (Aufgabe 3.10 - Teil 6)
        // Reuse operator==
        return false;
    } // call it: != it

    /* Advances Iterator */
    ListIterator<T> next() const {
        if (nullptr != node) {
            return ListIterator{ node->next };
        }
        else {
            return ListIterator{ nullptr };
        }
    }


    ListNode <T>* node = nullptr;
};


#endif // #ifndef BUW_LIST_ITERATOR_HPP