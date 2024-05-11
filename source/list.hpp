#ifndef BUW_LIST_HPP
#define BUW_LIST_HPP

#include "list_node.hpp"
#include "list_iterator.hpp"

#include <cassert>
#include <cstddef>  //ptrdiff_t
#include <iterator> //std::bidirectional_iterator_tag
#include <iostream>

#include <initializer_list>

template <typename T>
class List;


template <typename T>
class List {
  public:

    //friend declarations for testing the members   
    template <typename TEST_TYPE>
    friend size_t get_size(List<TEST_TYPE> const& list_to_test);
    template <typename TEST_TYPE>
    friend ListNode<TEST_TYPE>* 
      get_first_pointer(List<TEST_TYPE> const& list_to_test);
    template <typename TEST_TYPE>
    friend ListNode<TEST_TYPE>* 
      get_last_pointer(List<TEST_TYPE> const& list_to_test);

    using value_type      = T;
    using pointer         = T*;
    using const_pointer   = T const*;
    using reference       = T&;
    using const_reference = T const&;
    using iterator        = ListIterator<T>;

    /* Declaration of Default Constructor */
    List();
    
    /* Declaration of Copy Constructor using Deep-Copy Semantics */
    List(List const& rhs);

    /* Declaration of Move Constructor */
    List(List&& rhs);

    /* Declaration of Initializer-List-based Constructor */
    List(std::initializer_list<T> ini_list);

    /* Declaration of Destructor */
    ~List();

    /* Declaration of Unifying Assignment Operator - see: Vorlesung 6, pp. 11-13, watch video explanation!*/
    List& operator=(List rhs);

    /* Declaration of built-in Member-Swap method used by Unifying Assignment Operator */
    void swap(List& rhs);

    /* Declaration of list-comparison-operator in terms of equality */
    bool operator==(List const& rhs) const;

    /* Declaration of list-comparison-operator in terms of inequality */
    bool operator!=(List const& rhs) const;
    
    /* Declaration of size-Method */
    std::size_t size() const;

    /* Declaration of empty-Method */
    bool empty() const;

    /* Declaration of push_front-Method (Aufgabe 3.3 - Teil 1) */
    void push_front(T const& element);

    /* Declaration of pop_front-Method (Aufgabe 3.3 - Teil 2) */
    void pop_front();

    /* Declaration of push_front-Method (Aufgabe 3.3 - Teil 3) */
    void push_back(T const& element);

    /* Declaration of push_front-Method (Aufgabe 3.3 - Teil 4) */
    void pop_back();

    /* Declaration of front-Method (Aufgabe 3.3 - Teil 5) */
    T& front();

    /* Declaration of back-Method (Aufgabe 3.3 - Teil 6)*/
    T& back();

    /* Declaration of clear - Method */
    void clear();

    /* ... */
    // test and implement:
    //TODO: clear()-Method (Aufgabe 3.4)


    /* Declaration of begin-Method returning a ListIterator refering to the first list_node */
    ListIterator<T> begin();
    /* Declaration of end-Method returning a ListIterator refering to the past-the-end-element which marks the end of the list*/
    ListIterator<T> end();

    /* ... */
    //TODO: member function insert (Aufgabe 3.11)

    /* ... */
    //TODO: member function erase (Aufgabe 3.12)

    /* ... */

    //TODO: member function reverse (Aufgabe 3.7 - Teil 1)

  // list members
  private: 
    std::size_t size_;
    ListNode<T>* first_;
    ListNode<T>* last_;
};

// not fully implemented yet
// TODO: Implement Default-Constructor by adding a sensible initializer list. (Aufgabe 3.2 - Teil 1)
/* ... */
template <typename T>
List<T>::List() {}

// test and implement
// TODO: size-Method. (Aufgabe 3.2 - Teil 2)
/* ... */
template <typename T>
std::size_t List<T>::size() const {
    //TODO: return value of member variable insteaf of 27
    return 27;
};

// test and implement
// TODO: empty-Method. (Aufgabe 3.2 - Teil 3)
/* ... */
template <typename T>
bool List<T>::empty() const {
    // check whether size member variable is zero -- this should be a one line implementation
    return false;
};



/* Declaration of push_front-Method (Aufgabe 3.3 - Teil 1) */
template <typename T>
void List<T>::push_front(T const& element) {
    // TODO: push_front-method (Aufgabe 3.3)
}

/* Declaration of pop_front-Method (Aufgabe 3.3 - Teil 2) */
template <typename T>
void List<T>::pop_front() {
    if (empty()) {
        throw "List is empty";
    }

    // TODO: remainder of pop_front-method (Aufgabe 3.3)
}

/* Declaration of push_front-Method (Aufgabe 3.3 - Teil 3) */
template <typename T>
void List<T>::push_back(T const& element) {
    // TODO: push_back-method (Aufgabe 3.3)
}

/* Declaration of push_front-Method (Aufgabe 3.3 - Teil 4) */
template <typename T>
void List<T>::pop_back() {
    if (empty()) {
        throw "List is empty";
    }

    // TODO: remainder of pop_back-method (Aufgabe 3.3)
}

/* Declaration of front-Method (Aufgabe 3.3 - Teil 5) */
template <typename T>
T& List<T>::front() {
    if (empty()) {
        throw "List is empty";
    }

    // TODO: remainder of front-method (Aufgabe 3.3)
}

/* Declaration of back-Method (Aufgabe 3.3 - Teil 6)*/
template <typename T>
T& List<T>::back() {
    if (empty()) {
        throw "List is empty";
    }

    // TODO: remainder of back-method (Aufgabe 3.3)
}



// test and implement:
//TODO: Copy-Konstruktor using Deep-Copy semantics (Aufgabe 3.5)
/* ... */
template <typename T>
List<T>::List(List<T> const& rhs) {}

// test and implement:
// TODO: Move-Konstruktor (Aufgabe 3.14)
/* ... */
template <typename T>
List<T>::List(List<T>&& rhs) {}

// test and implement:
//TODO: Initializer - List Konstruktor(3.15 - Teil 1)
/* ...  */
template <typename T>
List<T>::List(std::initializer_list<T> ini_list) {
    //not implemented yet
}

// test and implement:
// TODO: Destructor - List Konstruktor(3.4)
/* ... */
template <typename T>
List<T>::~List() {
  //TODO: Implement via clear-Method (Aufgabe 3.4)
} //can not be tested with unit tests

// test and implement:
// TODO: unyfing assignment operator (see Vorlesung 6, pp. 11-13)
/* ... */
template <typename T>
List<T>& List<T>::operator=(List<T> rhs) {

}

// test and implement:
// TODO: helper-swap-method for bultin-types used by unifying assignment operator (see Vorlesung 6, pp. 11-13)
/* ... */
template <typename T>
void List<T>::swap(List<T>& rhs) {

}


template <typename T>
bool List<T>::operator==(List const& rhs) const {
    //TODO: operator== (Aufgabe 3.8)
}

template <typename T>
bool List<T>::operator!=(List const& rhs) const {
    //TODO: operator!= (Aufgabe 3.8)
    // make use of operator== you implemented
}

template <typename T>
void List<T>::clear() {

}

/* ... */
template <typename T>
ListIterator<T> List<T>::begin() {
    //TODO: begin-Method returning an Iterator to the 
    //      first element in the List (Aufgabe 3.9)
    return {};
}

/* ... */
template <typename T>
ListIterator<T> List<T>::end() {
    //TODO: end-Method returning an Iterator to element after (!) 
    //      the last element in the List (Aufgabe 3.9)
    return {};
}

/* ... */
//TODO: Freie Funktion reverse 
//(Aufgabe 3.7 - Teil 2, benutzt Member-Funktion reverse)

/* ... */
//TODO: Freie Funktion operator+ (3.15 - Teil 2)


#endif // #ifndef BUW_LIST_HPP