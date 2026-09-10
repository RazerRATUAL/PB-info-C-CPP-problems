#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct cuvant{
    char x[260];
    int nr_voc;
    int lung;
}v[260];
int vocale(char s[]);
bool cmp(cuvant a, cuvant b);
char  s[260];


char voc[]="aeiouAEIOU";

int main()
{
    char *p;
    int k = 0;
    cin.getline(s,260);

    p=strtok(s," ");
    while(p)
    {
        k++;
        strcpy(v[k].x,p);
        v[k].lung=strlen(p);
        v[k].nr_voc= vocale(p);
        p=strtok(NULL, " ");
    }

    sort(v+1,v+k+1, cmp);

    for(int i=1;i<=k;i++)
        cout<<v[i].x<<"\n";
}

int vocale(char s[])
{
    int nr=0;
    for(int i=0;s[i]!=0;i++)
        if(strchr(voc,s[i])!=NULL)
            nr++;
    return nr;
}
bool cmp(cuvant a, cuvant b)
{
    if(a.nr_voc > b.nr_voc || a.nr_voc == b.nr_voc  && a.lung > b.lung ||
       a.nr_voc == b.nr_voc && a.lung == b.lung && strcmp(a.x,b.x)<0)
        return true;
    else
        return false;

}


