#include<cstdio>
#include<iostream>
#include<vector.h>
#include<cmath>
using namespace std;


/*

Preconditions for using Binary Search Technique:
1. When the target list is sorted already.[ if not, please sort (Time complexity: O(nlogn) ) the target list first ].

Benefits of using Binary Search Technique:
1. Time complexity O(n) --> O(logn), where n is the size of the target array.

*/


class Solution
{
    public:
        int Sqrt69_1( int x );
        int Sqrt69_2( int x );
        char nextGreatestLetter744( vector<char>& letters, char target );
        int firstBadVersion278( int n );
        int singleNonDuplicate540( vector<int>& nums) ;
        void test();
};




int Solution::Sqrt69_1( int x )
{
    double y = (double) x;
    return int( sqrt(y) );
}

int Solution::Sqrt69_2( int x )
{
    int l = 1;
    int r = x/2 + 1;            
    while( l <= r )
    {
        int mid = (l+r) / 2;
        if( x/mid == mid )
            return mid;
        else if( x/mid > mid )
            l = mid + 1;
        else 
            r = mid - 1;

    }
    return r;

}


char Solution::nextGreatestLetter744( vector<char>& letters, char target )
{
    int l = 0;
    int r = letters.size() - 1;

    while( l <= r )
    {
        int mid = (l+r) / 2;

        if( letters[mid] <= target )
            l = mid + 1;
        else 
            r = mid - 1;

    }
    if( l > ( letters.size()-1 ) )
        return letters[0];
    else 
        return letters[l];
    
}



bool isBadVersion( int n )
{
    if( n >= 4 )
        return true;
    else 
        return false;
}


int Solution::firstBadVersion278( int n )
{
    int l = 1;
    int r = n;

    while( l<r )
    {

        int mid = (l+r) / 2;
        if( isBadVersion(mid) && !isBadVersion(mid-1) )
            return mid;
        else if( isBadVersion(mid) && isBadVersion(mid-1) )
            l = mid + 1;
        else
            r = mid - 1;

    }
    return -1;

}



int Solution::singleNonDuplicate540( vector<int>& nums)
{
    int r = nums.size() - 1;
    int l = 0;
     
    while( l < r )
    {
        int mid = (l+r) / 2;
        
        if( mid%2 == 0 )
        {
            
        }
        else
        {
            if( num[mid] == num[mid-1] )
                
        }

    }


}




void Solution::test()
{
    cout<<firstBadVersion278(5);
    return;
}


int main(void)
{
    Solution S;
    S.test();
    system("pause");
    return 0;
}



