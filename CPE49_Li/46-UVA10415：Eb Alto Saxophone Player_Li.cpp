#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<char, string> table;
    table['c'] = "0111001111";
    table['d'] = "0111001110";
    table['e'] = "0111001100";
    table['f'] = "0111001000";
    table['g'] = "0111000000";
    table['a'] = "0110000000";
    table['b'] = "0100000000";
    
    table['C'] = "0010000000";
    table['D'] = "1111001110";
    table['E'] = "1111001100";
    table['F'] = "1111001000";
    table['G'] = "1111000000";
    table['A'] = "1110000000";
    table['B'] = "1100000000";
    
    int n;
    string str;
    string pressed;
    int count[10] = {};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str;
        pressed = "0000000000";
        for(int j=0; j<10; j++){
            count[j] = 0;
        }
        for(int j=0; j<str.length(); j++){
	        for(int k=0; k<table[str[j]].length(); k++){
	            if(table[str[j]][k]!=pressed[k]){
	                if(pressed[k]=='0') count[k]++;
	                pressed[k] = table[str[j]][k];
	            }
	        }
        }
        cout<<count[0];
        for(int j=1; j<10; j++){
            cout<<" "<<count[j];
        }
        cout<<endl;
    }
    return 0;
}