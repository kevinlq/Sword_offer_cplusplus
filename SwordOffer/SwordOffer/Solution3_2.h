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

	//����һ������
	ListNode * createLisNode(const int value);

	//��������ڵ�
	void connectListNodes(ListNode *pCurrent,ListNode *pNext);

	//��ӡ����
	void printList(ListNode *pHead);

	//��������ڵ�
	void destroyList(ListNode *pHead);

	//ʹ��ջ����β��ͷ��ӡ����
	void printListRecersingStack(ListNode *pHead);

	void test(ListNode *pHead);

	void test1();
};

