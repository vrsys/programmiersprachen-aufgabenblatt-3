#ifndef BUW_LIST_NODE_HPP
#define BUW_LIST_NODE_HPP

template <typename T>
struct ListNode {
	T         value = T{};
	ListNode* prev = nullptr;
	ListNode* next = nullptr;
};

#endif // #ifndef BUW_LIST_NODE_HPP