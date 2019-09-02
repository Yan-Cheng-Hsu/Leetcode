#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int val = 0, ListNode* next = NULL)
	{
		this->val = val;
		this->next = next;
	}
	void print_val();
};
void ListNode::print_val()
{
	ListNode* temp = this;
	while (temp != NULL)
	{
		printf("%d\t", temp->val);
		temp = temp->next;
	}

	return;
}



void test();
int main(void)
{
	
	system("pause");
	return 0;
}
void test()
{
	struct ListNode l1_3(3);
	struct ListNode l1_2(2, &l1_3);
	struct ListNode l1_1(1, &l1_2);
	l1_1.print_val();
	return;
}