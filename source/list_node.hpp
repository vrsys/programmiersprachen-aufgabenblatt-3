#ifndef BUW_LIST_NODE_HPP
#define BUW_LIST_NODE_HPP

// complete list node struct, similar to the one presented in lecture "Verwaltung dynamischer Ressourcen (V 6),
// just as template struct

template <typename T>
struct ListNode {
	T         value = T{};
	ListNode* prev = nullptr;
	ListNode* next = nullptr;
};

#endif // #ifndef BUW_LIST_NODE_HPP