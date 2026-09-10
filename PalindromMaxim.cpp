#include <iostream>
#include <cstring>
using namespace std;

bool palindrom(char s[])
{
    for(int i = 0 , j = strlen(s)-1; i < j ; ++i , --j)
        if(tolower(s[i]) != tolower(s[j]))
        return false;
    return true;
}

int main()
{
    char s[256]  , pal[11]="";
    cin.getline(s , 256);
    char *p = strtok(s , " .,;:");
    bool gasit = false;
    while(p)
    {
        if(palindrom(p))
            if(strlen(p) > strlen(pal))
            strcpy(pal , p) , gasit = 1;
        p = strtok(NULL , " .;:,");
    }
    if(gasit)
        cout << pal;
    else
        cout << "IMPOSIBIL";
    return 0;
}