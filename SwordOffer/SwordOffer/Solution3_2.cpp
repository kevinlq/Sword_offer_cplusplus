#include "Solution3_2.h"

#include <stack>
#include <iostream>
using namespace std;

Solution3_2::Solution3_2()
{
}


Solution3_2::~Solution3_2()
{
}

ListNode * Solution3_2::createLisNode(const int value)
{
	ListNode *pNode = new ListNode();
	pNode->value = value;
	pNode->m_pNext = nullptr;

	return pNode;
}

void Solution3_2::connectListNodes(ListNode *pCurrent, ListNode *pNext)
{
	if (pCurrent == nullptr){
		cout << "error to connect two nodes," << endl;
		exit(1);
	}

	pCurrent->m_pNext = pNext;
}

void Solution3_2::printList(ListNode *pHead)
{
	cout << "print start :" << endl;
	
	ListNode *pNode = pHead;
	while (pNode != NULL)
	{
		cout << pNode->value << " ";
		pNode = pNode->m_pNext;
	}

	cout << "\nprint end." << endl;
}

void Solution3_2::destroyList(ListNode *pHead)
{
	ListNode *pNode = pHead;
	while (pNode != NULL)
	{
		pHead = pHead->m_pNext;
		delete pNode;
		pNode = pHead;
	}
}

void Solution3_2::printListRecersingStack(ListNode *pHead)
{
	std::stack<ListNode *>nodeStack;

	ListNode *pNode = pHead;
	//将链表节点放入栈中
	while (pNode != NULL)
	{
		nodeStack.push(pNode);
		pNode = pNode->m_pNext;
	}

	//打印
	while (!nodeStack.empty())
	{
		pNode = nodeStack.top();
		cout << pNode->value << " ";
		nodeStack.pop();
	}
	cout << endl;
}

void Solution3_2::test(ListNode *pHead)
{
	printList(pHead);

	cout << "使用栈进行逆序打印: ";
	printListRecersingStack(pHead);
}

void Solution3_2::test1()
{
	cout << "test1 begin:" << endl;

	ListNode * pNode1 = createLisNode(1);
	ListNode * pNode2 = createLisNode(2);
	ListNode * pNode3 = createLisNode(3);
	ListNode * pNode4 = createLisNode(4);
	ListNode * pNode5 = createLisNode(5);
	ListNode * pNode6 = createLisNode(6);
	ListNode * pNode7 = createLisNode(7);
	ListNode * pNode8 = createLisNode(8);

	connectListNodes(pNode1,pNode2);
	connectListNodes(pNode2, pNode3);
	connectListNodes(pNode3, pNode4);
	connectListNodes(pNode4, pNode5);
	connectListNodes(pNode5, pNode6);
	connectListNodes(pNode6, pNode7);
	connectListNodes(pNode7, pNode8);

	test(pNode1);

	cout << "test1 end." << endl;

	destroyList(pNode1);
}