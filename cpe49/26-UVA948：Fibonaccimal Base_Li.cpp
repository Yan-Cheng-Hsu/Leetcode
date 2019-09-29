#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> fab;
    fab.push_back(1);
    fab.push_back(2);
    int n;
    bool start;
    cin>>n;
    while(cin>>n){
        cout<<n<<" = ";
        start = false;
        while(fab[fab.size()-1]<n){
            fab.push_back(fab[fab.size()-1]+fab[fab.size()-2]);
        }
        for(int i=fab.size()-1; i>=0; i--){
            if(n>=fab[i]){
                n = n - fab[i];
                cout<<"1";
                start = true;
            }
            else if(start){
                cout<<"0";
            }
        }
        cout<<" (fib)\n";
        
    }
    return 0;
}