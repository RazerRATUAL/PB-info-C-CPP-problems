#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

char cv[100][100];
int main()
{

   char a[255], *p;
   int t=0;
   cin.getline(a, 255);
   p=strtok(a, " ");
   while(p)
   {
     strcpy(cv[t], p);
     t++;
     p=strtok(NULL, " ");
   }
   for(int i=0;i<=t;i++)
   {
       cout<<cv[i]<<' ';
       for(int j=strlen(cv[i])-1;j>=0;j--)
        cout<<cv[i][j];
       cout<<' ';
   }
return 0;
}