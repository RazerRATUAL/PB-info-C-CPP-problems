#include <iostream>
using namespace std;

int prod(int a,int k);

long long int k, n, a, sum, aux, i;

int main(){
    cin >> k >> n;
    for(i = 1; i <= n; i++){
        cin >> a;
        aux = prod(a, k);
        if(aux) 
            sum += a;
    }
    cout << sum;
    return 0;
}

int prod(int a,int k){
    int i, sum = 0, cnt;
    for(i = 2; i <= a; i++){
        cnt=0;
        while(a%i==0)
        {
            cnt++;
            a /= i;
        }
        if(cnt != 0)
            sum += cnt;

        if(i * i > a && a > 1)  
            i = a - 1;
    }
    if(sum >= k)    
        return 1;
    return 0;
}