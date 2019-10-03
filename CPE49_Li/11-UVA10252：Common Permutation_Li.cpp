#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    multiset<char> s1, s2, x;
    string str;
    while(cin>>str){
        s1.clear();
        s2.clear();
        x.clear();
        s1.insert(str.begin(), str.end());
        cin>>str;
        s2.insert(str.begin(), str.end());
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(x,x.begin()));
        for(auto iter=x.begin(); iter!=x.end(); iter++){
            cout<<*iter;
        }
        cout<<endl;
    }
    
    return 0;
}