#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    int m,n,q;
    int r,c;
    int i,j,k,w;
    char ch;
    bool flag = true;
    vector<string> data;
    string str;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>m>>n>>q;
        cout<<m<<" "<<n<<" "<<q<<endl;
        data.resize(0);
        
        for(j=0; j<m; j++){
            cin>>str;
            data.push_back(str);
        }
        
        while(cin>>r>>c){
            ch = data[r][c];
            for(w=1; flag; w++){
		        for(j=r-w,k=c-w+1; flag;){
		            if(j<0 || j>=m) break;
		            else if(k<0 || k>=n) break;
		            else if(ch!=data[j][k]) break;
		        
		            if(k==c-w) j--;
		            else if(j==r+w) k--;
		            else if(k==c+w) j++;
		            else if(j==r-w) k++;
		            
		            if(j==r-w && k==c-w) flag = !flag;
		        }
		        if(!flag) flag = true;
		        else break;
	        }
	        cout<<w*2-1<<endl;
        }

    }
    return 0;
}