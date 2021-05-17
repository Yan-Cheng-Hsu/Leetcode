#include<stdio.h>
#include<iostream>
#include<vector.h>
#include<string.h>
#include<sstream>

using namespace std;

class Solution
{
    public:
        void reverseString344( vector<char>& s );
        void swap( vector<char>& s , int a , int b );
    

};

void Solution::swap( vector<char>& s , int a , int b )
{
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    return;
}



void Solution::reverseString344( vector<char>& s )
{
    int l = 0;
    int r = s.size() - 1;

    while( l < r )
    {
        swap( s , l , r );
        l++;
        r--;
    }

    return;

}



int main(void)
{
    system("pause");
    return 0;
}