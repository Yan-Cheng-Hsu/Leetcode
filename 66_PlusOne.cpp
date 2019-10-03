#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution 
{
    public:
        vector<int> plusOne(vector<int>& digits);
};

vector<int> Solution::plusOne(vector<int> &digits)
{
    digits[digits.size()-1] = digits[digits.size()-1] + 1;

    //overflow checking
    for(int i=digits.size()-1;i>=0;i--)
    {
        if( digits[i] == 10 )
        {
            if( i != 0 )
            {
                digits[i] = 0;
                digits[i-1] = digits[i-1] + 1;
            }
            else 
            {
                digits[i] = 0;
                digits.insert(digits.begin(),1);
            }
        }
        else break; 
        
    }

    return digits;
}



int main(void)
{
    vector<int> nums;
    for(int i=0;i<3;i++)
    {
        nums.push_back(9);
    }
    for(int i=0;i<3;i++)
    {
        nums.push_back(0);
    }
    nums.push_back(1);
    Solution s;
    nums = s.plusOne(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}