#include<iostream>
using namespace std;
int main()
{
   int n,s=0,ogl=0,c,cate=0,k=0,aux,a,j=0;
   cin>>n>>c;
   aux=n;
   a=n;
   while(a!=0)
   {
       if(a%10!=0) break;
       else
       if(a%10==0) j++;
       a=a/10;
   }
   while(aux!=0)
   {
       cate++;
       if(aux%10==c) {k++;}
       aux=aux/10;
   }
{
        while(n!=0)
       {
          if(n%10!=c)
            s=s*10+n%10;
          else if(n%10==c)
            s=s;
          n=n/10;
       }
       while(s!=0)
       {
           ogl=ogl*10+s%10;
           s=s/10;
       }
    }
   if(cate==k) cout<<"-1";
   else
    if(cate!=k)
    {
        cout<<ogl;
        while(j>0)
        {
            cout<<"0";
            j--;
        }
    }
  return 0;
}
