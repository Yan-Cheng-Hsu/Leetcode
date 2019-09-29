#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, j;
    string str;
    int top, north, west, temp;
    while(cin>>i){
        if(i==0) break;
        
        top = 1;
        north = 2;
        west = 3;
	    for(j=0; j<i; j++){
	        cin>>str;
	        if(str=="north"){
	            temp = top;
	            top = 7-north;
	            north = temp;
	        }
	        else if(str=="south"){
	            temp = north;
	            north = 7-top;
	            top = temp;
	        }
	        else if(str=="east"){
	            temp = west;
	            west = 7-top;
	            top = temp;
	        }
	        else if(str=="west"){
	            temp = top;
	            top = 7-west;
	            west = temp;
	        }
	    }
	    cout<<top<<endl;
    }
    return 0;
}