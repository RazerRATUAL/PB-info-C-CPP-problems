#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch[260];
    cin.getline(ch , 260);
    int i = 0;
    while(ch[i]!='\0')
    {
        if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o') && ch[i+1]=='p' && ch[i+2]==ch[i])
            cout << ch[i] , i+=2;
        else
            cout << ch[i];
        i++;
    }
}