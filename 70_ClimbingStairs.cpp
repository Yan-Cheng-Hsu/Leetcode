#include<iostream>
#include<stdio.h>
using namespace std;


class Solution 
{
    public:
        int climbStairs(int n);
};
int Solution::climbStairs(int n)
{
    if(n==1)return 1;
    else if(n==2)return 2;
    else return ( climbStairs(n-1) +climbStairs(n-2) );
}


int main(void)
{
    Solution s;
    cout<<"plz input the num of stairs: ";
    int n;
    cin>>n;
    cout<<"Answers: "<<s.climbStairs(n)<<endl;
    system("pause");
    return 0;
}