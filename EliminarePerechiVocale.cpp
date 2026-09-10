#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    while(ch[i]!='\0')
    {
        if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && ((ch[i-1]=='a' || ch[i-1]=='e' || ch[i-1]=='i' || ch[i-1]=='o' || ch[i-1]=='u') || (ch[i+1]=='a' ||ch[i+1]=='e' ||ch[i+1]=='i' ||ch[i+1]=='o' ||ch[i+1]=='u' )))
        {}
        else
        cout << ch[i];
        i++;    
    }
    return 0;    
}