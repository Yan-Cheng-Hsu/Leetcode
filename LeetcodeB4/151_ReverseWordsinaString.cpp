#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;


class Solution 
{
    public:
        string reverseWords(string s);
};

string Solution::reverseWords(string s)
{
    //answer string
    string ans;
    //start from s[0] to search for the blank
    int current = 0;
    
    int next = 0;
    while(1)
    {   
        int next = s.find_first_of(" ", current);

        if( next != current )
        {
            string temp = s.substr(current, next - current);
            ans.insert( 0 , temp );
            ans.insert( 0 , " ");
        }
        //if the func find_first_of() can't find the target (" ") we want
        //it will return -1
        if(next == -1) break;

        current = next + 1;
    }
    
    while( ans[0] == ' ' )
    {
        ans.erase( ans.begin() );
    }
    

    return ans;
    
}

int main(void)
{
    string s = " hello World! ";
    Solution x;
    cout << x.reverseWords(s) <<endl;
    
    system("pause");
    return 0;
}
