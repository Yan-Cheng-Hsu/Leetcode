#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
class rule{
public:
    rule(){}
    bool operator()(T a, T b){
        if(a.second!=b.second) return a.second<b.second;
        else                   return a.first>b.first;
    }
};

int main(){
    string str;
    vector< pair<char, int> > result;
    int n;
    while(getline(cin, str)){
        if(result.size()!=0){
            result.clear();
            cout<<endl;
        }
        
        for(int i=0; i<str.length(); i++){
            if(str[i]=='\n') continue;
            
            n = 1;
	        for(int j=i+1; j<str.length(); j++){
	            if(str[j]==str[i]){
	                n++;
	                str[j] = '\n';
	            }
	        }
	        result.push_back( pair<char,int>(str[i],n) );
	        str[i] = '\n';
        }
        
        stable_sort(result.begin(), result.end(), rule< pair<char,int> >());
        
        for(int i=0; i<result.size(); i++){
            cout<<int(result[i].first)<<" "<<result[i].second<<endl;
        }
    }
    return 0;
}
