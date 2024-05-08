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


    /* ... */
    // test and implement:
    //TODO: (unifying) Assignment operator (Aufgabe 3.6)

    /* ... */
    // test and implement:

    bool operator==(List const& rhs) const
    {
      //TODO: operator== (Aufgabe 3.8)
    }

    bool operator!=(List const& rhs) const
    {
      //TODO: operator!= (Aufgabe 3.8)
      // make use of operator==
    }

    /* ... */
    ~List() {
      //TODO: Implement via clear-Method (Aufgabe 3.4)
    } //can not really be tested

    /* ... */
    ListIterator<T> begin() {
      //TODO: begin-Method returning an Iterator to the 
      //      first element in the List (Aufgabe 3.9)
      return {};
    }

    /* ... */
    ListIterator<T> end() {
      //TODO: end-Method returning an Iterator to element after (!) 
      //      the last element in the List (Aufgabe 3.9)
      return {};
    }

    /* ... */ 
    // test and implement:
    //TODO: clear()-Method (Aufgabe 3.4)


    /* ... */
    //TODO: member function insert (Aufgabe 3.11)

    /* ... */
    //TODO: member function erase (Aufgabe 3.12)

    /* ... */

    //TODO: member function reverse (Aufgabe 3.7 - Teil 1)


    /* ... */
    void push_front(T const& element) {
      // TODO: push_front-method (Aufgabe 3.3)
    }

    /* ... */
    void push_back(T const& element) {
      // TODO: push_back-method (Aufgabe 3.3)
    }

    /* ... */
    void pop_front() {
      if(empty()) {
        throw "List is empty";
      }

      // TODO: remainder of pop_front-method (Aufgabe 3.3)
    }

    /* ... */
    void pop_back() {
      if(empty()) {
        throw "List is empty";
      }

      // TODO: remainder of pop_back-method (Aufgabe 3.3)
    }

    /* ... */
    T& front() {
      if(empty()) {
        throw "List is empty";
      }

      // TODO: remainder of front-method (Aufgabe 3.3)
    }

    /* ... */
    T& back() {
      if(empty()) {
        throw "List is empty";
      }

      // TODO: remainder of back-method (Aufgabe 3.3)
    }

    /* ... */
    bool empty() const {

      // TODO: empty-method (Aufgabe 3.2)
      return false;
    };


    /* ... */
    std::size_t size() const{
      // TODO: size-method (Aufgabe 3.2)      
      return 27;
  };


  // list members
  private: 
    std::size_t size_;
    ListNode<T>* first_;
    ListNode<T>* last_;
};

// not fully implemented yet
// TODO: Implement Default-Constructor by adding a sensible initializer list. (Aufgabe 3.2)
/* ... */
template <typename T>
List<T>::List() {}


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


/* ... */
//TODO: Freie Funktion reverse 
//(Aufgabe 3.7 - Teil 2, benutzt Member-Funktion reverse)

/* ... */
//TODO: Freie Funktion operator+ (3.15 - Teil 2)


#endif // #ifndef BUW_LIST_HPP