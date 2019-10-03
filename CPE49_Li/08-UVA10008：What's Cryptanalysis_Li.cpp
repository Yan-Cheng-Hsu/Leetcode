#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<char, int> PAIR;

class rule{
public:
    rule(){}
    bool operator()(const PAIR& a, const PAIR& b) const{
        return a.second>b.second;
    }
};

int main(){
    map<char, int> fre;
    string str;
    int n;
    cin>>n;
    getline(cin, str);
    for(int i=0; i<n; i++){
        getline(cin, str);
        for(int j=0; j<str.length(); j++){
            if(str[j]>='a' && str[j]<='z') str[j] -= 32;
            if(str[j]>='A' && str[j]<='Z'){
                if(fre.find(str[j])!=fre.end()){
                    fre[str[j]]++;
                }
                else{
                    fre[str[j]] = 1;
                }
            }
        }
    }
    
    vector<PAIR> p(fre.begin(), fre.end());
    stable_sort(p.begin(), p.end(), rule());
    
    for(auto iter=p.begin(); iter!=p.end(); iter++){
        cout<< (iter->first) << " " << (iter->second) << endl;;
    }

    


    
    return 0;
}