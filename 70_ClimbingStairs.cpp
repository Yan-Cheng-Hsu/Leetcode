#include<iostream>
#include<stdio.h>
#include<vector>
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
    else
    {
        int index1 = 0;
        int index2 = 1;
        vector<int> step_array;
        step_array.push_back(1);
        step_array.push_back(2);
        for(int i=0;i<(n-2);i++)
        {
            int temp = step_array[index1] + step_array[index2];
            step_array.push_back(temp);
            index1++;
            index2++;
        }
        return step_array[n-1];          
    }
}


int main(void)
{
    Solution s;
    for(int i=0;i<20;i++)
    {
        cout<<s.climbStairs(i)<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}