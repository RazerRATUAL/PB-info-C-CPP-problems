#include <iostream>
using namespace std;

int main(){
    long long n, sum = 0, n1, r, k=0, l=0;
    
    cin >>n;
    while (n != 0){
        sum += n%10;
        n/=10;
        k++;
    }
    
    n1 = sum / 9;
    
    for (int i=1; i<=n1; i++){
        cout<<"9";
        l++;
    }
        
    r = sum - n1 * 9;
    cout <<r;
    
    for (int i = 1; i <= sum - l - 1; i++)
        cout <<"0";
    
    return 0;
}
