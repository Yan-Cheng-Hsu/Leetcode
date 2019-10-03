#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> data;
    int n,m,i,j,k,x,temp;
    cin>>n;
    for(i=0; i<n; i++){
	    cin>>m;
	    data.resize(0);
	    for(j=0; j<m; j++){
	        cin>>k;
	        data.push_back(k);
	    }
	    x = 0;
	    for(j=0; j<data.size()-1; j++){
	        for(k=0; k<data.size()-1-j; k++){
	            if(data[k]>data[k+1]){
	                temp = data[k];
	                data[k] = data[k+1];
	                data[k+1] = temp;
	                x++;
	            }
	        }
	    }
	    cout<<"Optimal train swapping takes "<<x<<" swaps."<<endl;
    }
    return 0;
}