/*
输入一个链表，从尾到头打印链表每个节点的值
*/
#include "Solution3.h"

#include <stack>
#include <iostream>


Solution3::Solution3()
{
}


Solution3::~Solution3()
{
}

vector<int> Solution3::printListFromTailToHead(ListNode* head)
{
	vector<int> res;
	stack<int> mystack;
	while (head)
	{
		mystack.push(head->value);
		head = head->next;
	}

	while (!mystack.empty())
	{
		res.push_back(mystack.top());
		mystack.pop();
	}
	return res;
}

void Solution3::display(const vector<int> &res)
{
	for (auto item : res)
		cout << item << "";
	cout << endl;
}

void Solution3::test()
{
	std::cout << "===============start test solution3===================" << std::endl;

	ListNode myHead(0), a(1), b(2), c(3), d(4), e(5), f(6);
	a.next = &b;
	b.next = &c;
	c.next = &d;

	auto res = printListFromTailToHead(&a);
	display(res);

	res = printListFromTailToHead(&myHead);
	display(res);

	res = printListFromTailToHead(nullptr);
	display(res);

	e.next = &f;
	res = printListFromTailToHead(&e);
	display(res);

	std::cout << "===============end test solution3===================" << std::endl;
}