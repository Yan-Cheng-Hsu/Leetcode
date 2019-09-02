#include<iostream>
#include<cstdio>
using namespace std;
struct ListNode 
{
	int val;
    ListNode *next;
	ListNode(int val = 0, ListNode* next = NULL)
	{
		this->val = val;
		this->next = next;
	}
 };

class Solution 
{
public:
	ListNode* removeElements(ListNode* head, int val);
	int size(ListNode* head);
};
ListNode* Solution::removeElements(ListNode* head, int val)
{
	ListNode* the_node_to_remove = head;
	while (the_node_to_remove->val != val)
	{
		the_node_to_remove = the_node_to_remove->next;
	}
	ListNode* the_node_b4_remove = head;
	while (the_node_b4_remove->next->val != val)
	{
		the_node_b4_remove = the_node_b4_remove->next;
	}
	the_node_b4_remove->next = the_node_to_remove->next;
	delete the_node_to_remove;
	return head;
}
int Solution::size(ListNode* head)
{
	ListNode* current = head;
	int size = 0;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return  size;
}
ostream& operator<<(ostream& output, ListNode& head)
{
	ListNode* current = &head;

	while (current != NULL)
	{
		if (current->next != 0)
		{
			output << current->val << "-->";
		}
		else
		{
			output << current->val;
		}
		current = current->next;
	}
	return output;
}



void test();
int main(void)
{
	test();
	system("pause");
	return 0;
}
void test()
{
	ListNode l1_3(3, NULL);
	ListNode l1_2(2, &l1_3);
	ListNode l1_1(1, &l1_2);
	cout << l1_1 << endl;
	return;
}