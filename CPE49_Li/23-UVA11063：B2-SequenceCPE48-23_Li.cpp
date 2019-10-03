#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n, t;
    bool flag;
    vector<int> data;
    set<int> sums;
    t = 1;
    while(cin>>n){
        flag = false;
        data.resize(n);
        sums.clear();
        for(int i=0; i<n; i++){
            cin>>data[i]; 
        }
        for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            if(sums.find(data[i]+data[j])==sums.end()){
	                sums.insert(data[i]+data[j]);
	            }
	            else{
	                flag = true;
	                break;
	            }
	        }
	        if(flag) break;
        }
        if(flag) cout<<"Case #"<<t<<": It is not a B2-Sequence.\n\n";
        else     cout<<"Case #"<<t<<": It is a B2-Sequence.\n\n";
        t++;
    }
    return 0;
}