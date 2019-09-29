#include <iostream>
#include <map>
using namespace std;

int main(){
    char sen[100] = "";
    map<char, char> table;
    table['e'] = 'q';
    table['d'] = 'a';
    table['c'] = 'z';
    table['r'] = 'w';
    table['f'] = 's';
    table['v'] = 'x';
    table['t'] = 'e';
    table['g'] = 'd';
    table['b'] = 'c';
    table['y'] = 'r';
    table['h'] = 'f';
    table['n'] = 'v';
    table['u'] = 't';
    table['j'] = 'g';
    table['m'] = 'b';
    table['i'] = 'y';
    table['k'] = 'h';
    table[','] = 'n';
    table['o'] = 'u';
    table['l'] = 'j';
    table['.'] = 'm';
    table['p'] = 'i';
    table[';'] = 'k';
    table['/'] = ',';
    table['['] = 'o';
    table['\''] = 'l';
    table[']'] = 'p';
    
    int i;
    while(cin.getline(sen, 99)){
        for(i=0; i<100; i++){
            if(sen[i]>=65 && sen[i]<91)
                sen[i] += 32;
            if(table.find(sen[i])!=table.end())
                sen[i] = table[sen[i]];
        }
        cout<<sen<<endl;
    }
    return 0;
}