#include<stdio.h>
#include<iostream>
#include<vector.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 


class Solution
{
    public:
        ListNode *getIntersectionNode160(ListNode *headA, ListNode *headB);
        ListNode* reverseList206(ListNode* head);
        void test();

};



ListNode* Solution::getIntersectionNode160(ListNode *headA, ListNode *headB)
{
    ListNode *l1 = headA;
    ListNode *l2 = headB;

    int tailA = 0;
    int tailB = 0;
    bool pA = false;
    bool pB = false;

    while( l1 != l2 )
    {
        if( l1 -> next == 0 ) 
        {
            tailA = l1 -> val;
            pA = true;
            l1 = headB;
        }
        else 
            l1 = l1 -> next;
        
        if( l2 -> next == 0 )
        {
            tailB = l2 -> val;
            pB = true;
            l2 = headA;
        }
        else
            l2 = l2 -> next;

        //check if the intersection of two lists really exists by comparing if their tails' values are the same or not
        //if( !same )
        //    intersection !exist 
        if( pA && pB && ( tailA != tailB ) )
            return 0;
        
    }

    return l1;

}


ListNode* Solution::reverseList206(ListNode* head)
{
    if( head == 0 || ( (head->next) == 0 ) )
        return head;

    ListNode* l1 = head;
    ListNode* l2 = head -> next;

    while( l2 != 0 )
    {
        if(l1 == head)
            l1 -> next = NULL;
        
        ListNode* temp = l1;
        l1 = l2;
        l2 = l2 -> next;  
        l1 -> next = temp;
    }

    return l1;
}



void Solution::test()
{

    return;
}



int main(void)
{
    Solution S;
    S.test();
    system("pause");
    return 0;
}



