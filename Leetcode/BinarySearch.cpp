#include<stdio.h>
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
        int firstBadVersion278(int n);
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



int Solution::firstBadVersion278( int n )
{
    int fbi = 1;
    int l = 1;
    int r = n;

    while()
    {
        
    }




}





void Solution::test()
{
    vector<char> letters(3);
    letters[0] = 'c';
    letters[1] = 'f';
    letters[2] = 'j';
    
    cout<<nextGreatestLetter774( letters , 'c' );
    return;
}


int main(void)
{
    Solution S;
    S.test();
    system("pause");
    return 0;
}