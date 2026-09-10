#include <iostream>
using namespace std;
int main(){
long long n, x, c = 0, t = 0;
cin>>n;
    if(n == 0){
        cout <<"da"; 
        }
while(n){
    x = n % 10;
    if(x % 2 == 0){
        c++;
        t = 0;}
    else{
        t++;
        c = 0;}
    if(c == 2 || t == 2){
     cout<<"nu";
     break;}
    n /= 10;
        }
    if((c == 1 && t == 0) || (c == 0 && t == 1))
        cout <<"da";
    return 0;
}