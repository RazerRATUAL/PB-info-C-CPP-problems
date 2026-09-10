#include <iostream>
using namespace std;

int cifmaximp(int x);
const int  N = 101;
int a[N];

int main(){
int n, cnt = 0;
    cin >> n;
    for(int i = 1;i <=n ; i++){
        cin>>a[n];
        if(cifmaximp(a[n])!=0)
            cnt++;
    }

    cout << cnt;
}

int cifmaximp(int x){
    int maxx=0;
    while(x)
    {
        if(x % 10 > maxx)
            maxx = x % 10;
            x = x/10;
    }
    if(maxx % 2 == 1)
        return 1;
        else
            return 0;
}
