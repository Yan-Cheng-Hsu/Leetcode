#include<stdio.h>
#include<vector.h>
#include<iostream>
using namespace std;

class Solution
{
    public:
        int climbStairs70( int n );
        int rob198( vector<int>& nums );
        vector<int> productExceptSelf238( vector<int>& nums );
        void test();

};


int Solution::climbStairs70( int n )
{

    if( n == 1 )
        return 1;
    else if( n == 2 )
        return 2;
    else
    {
        int step[n];
        step[0] = 1;
        step[1] = 2;
        for(int i=2;i<n;i++)
            step[i] = step[i-1] + step[i-2];
        
        return step[n-1];
    }

}

int Solution::rob198( vector<int> &nums )
{
    
}


vector<int> Solution::productExceptSelf238( vector<int>& nums )
{
    vector<int> out( nums.size() );

    out[0] = 1;
    for(int i=1;i<nums.size();i++)
        out[i] = out[i-1]*nums[i-1];
    
    int c = 1;
    for(int i=nums.size()-1;i>=0;i--)
    {
        out[i] = out[i]*c;
        c *= nums[i];
    }

    return out;
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