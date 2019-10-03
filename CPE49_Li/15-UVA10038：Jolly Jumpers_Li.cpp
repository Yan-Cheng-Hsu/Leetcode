#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string str;
    stringstream sstr;
    vector<int> data;
    int n;
    int temp;
    bool flag;
    while(getline(cin, str)){
        sstr.str(str);
        sstr>>n;
        data.resize(0);
        while(sstr>>temp){
            data.push_back(temp);
        }
        sstr.clear();
        
        for(int i=0; i<n-1; i++){
            data[i] = abs(data[i]-data[i+1]);
        }
        data.resize(n-1);
        
        sort(data.begin(), data.end());
        flag = true;
        for(int i=0; i<n-1; i++){
            if(data[i]!=i+1){
                flag = false;
                break;
            }
        }
        
        if(flag) cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
    return 0;
}