#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int w, h;
    cin>>w>>h;
    
    int x, y;
    int dir = 0;
    bool lost;
    char dir2char[4] = {'N', 'E', 'S', 'W'};
    string str;
    set< pair<int,int> > dead_points;
    dead_points.clear();
    
    while(cin>>x>>y>>str){
        for(int i=0; i<4; i++){
            if(str[0]==dir2char[i]){
                dir = i;
                break;
            }
        }
        
        lost = false;
        cin>>str;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='R'){
                dir = (dir+1)%4;
            }
            else if(str[i]=='L'){
                dir = (dir+3)%4;
            }
            else if(str[i]=='F'){
                x += (1-(dir>>1<<1))*(dir%2);
                y += (1-(dir>>1<<1))*(1-dir%2);
                if(x<0 || x>w || y<0 || y>h){
                    if(dead_points.find( pair<int,int>(x,y) )==dead_points.end()){
                        dead_points.insert( pair<int,int>(x,y) );
                        lost = true;
                        x -= (1-(dir>>1<<1))*(dir%2);
	                    y -= (1-(dir>>1<<1))*(1-dir%2);
                        break;
                    }
                    else{
                        x -= (1-(dir>>1<<1))*(dir%2);
	                    y -= (1-(dir>>1<<1))*(1-dir%2);
                    }
                }
            }
        }
        
        if(lost) cout<<x<<" "<<y<<" "<<dir2char[dir]<<" LOST"<<endl;
        else     cout<<x<<" "<<y<<" "<<dir2char[dir]<<endl;
    }
    return 0;
}
