#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[22];

    cin >> s;
    
    for(int i=0;s[i] ;++i)          
        if(strchr("aeiou",s[i]))    
            s[i] -= 'a'-'A';            

    cout << s ;
    return 0;
}