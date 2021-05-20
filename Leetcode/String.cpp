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
        int compress443(vector<char>& chars);
        string Int2String( int d );
        string addStrings415(string num1, string num2);
        bool rotateString796( string s , string goal );
    
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

int Solution::compress443( vector<char>& chars )
{
    if( chars.size() == 0 )
        return 0;
    if( chars.size() == 1 )
        return 1;

    vector<char> out;

    int l = 0;
    int r = 1;
    
    if( chars[l] != chars[r] )
    {
        out.push_back( chars[l] );
        l = r;   
    }

    while( l < chars.size() )
    {
        
        while( chars[r] == chars[r-1] &&  r < chars.size() )
        {
            r++;
        }
        
        if( r-l > 0 )
        {   
            out.push_back( chars[l] );
            int d = r - l + 1;
            string s = Int2String( d );

            for(int i=s.length()-1;i>=0;i--)
                out.push_back( s[i] );
        }
        else
            out.push_back( chars[l] );
        r = r + 1;
        l = r;

    }

    chars = out;

    return chars.size();

}



string Solution::Int2String( int d )
{
    stringstream s;
    s<<d;
    return s.str();
}



string Solution::addStrings415(string num1, string num2)
{
    if( num1.length() < num2.length() )
    {
        string temp = num1;
        num1 = num2;
        num2 = temp;
    }

    string out = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int c = 0;



    while( j >=0 )
    {
        int sum = ( num1[i] - 48 ) + ( num2[j] - 48 ) + c;
        out = char( sum%10 + 48 ) + out;
        c = sum/10;
        i--;
        j--;
    }

    while( i >= 0 )
    {
        int sum = num1[i] - '0' + c;
        out = char( sum%10 + 48 ) + out;
        c = sum/10;
        i--;
    }
    if( c != 0 )
        out = char( c + 48 ) + out;

    return out;
}


bool Solution::rotateString796( string s , string goal )
{
    if( s.length() != goal.length() )
        return false;
    
    if( s.length() == 0 && goal.length() == 0 )
        return true;
    
    int l = s.length();

    for(int i=0;i<l;i++)
    {
        bool flag = true;
        for(int j=0;j<l;j++)
        {
            if( s[ (i+j)%l ] != goal[j] )
            {
                flag = false;
                break;
            }
        }
        if(flag)
            return true;

    }

    return false;

}




void test()
{
    vector<char> c(7);

    for(int i=0;i<c.size();i++)
    {
        if( i < 3 )
            c[i] = 'a';
        else if( i < 4 )
            c[i] = 'b';
        else    
            c[i] = 'c';
    }

    Solution S;
    int a = S.compress443( c );

    for(int i=0;i<c.size();i++)
        cout<<"i = "<<i<<" , c[i] = "<<c[i]<<endl;;
    

    return;
}


int main(void)
{

    test();
    system("pause");
    return 0;
}