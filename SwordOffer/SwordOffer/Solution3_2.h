#pragma once

struct ListNode
{
	int value;
	ListNode *m_pNext;
};

class Solution3_2
{
public:
	Solution3_2();
	~Solution3_2();

	//创建一个链表
	ListNode * createLisNode(const int value);

	//连接链表节点
	void connectListNodes(ListNode *pCurrent,ListNode *pNext);

	//打印链表
	void printList(ListNode *pHead);

	//销毁链表节点
	void destroyList(ListNode *pHead);

	//使用栈，从尾到头打印链表
	void printListRecersingStack(ListNode *pHead);

	void test(ListNode *pHead);

	void test1();
};

