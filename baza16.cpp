#include <iostream>
using namespace std;

char tablou_conversie[] = "0123456789ABCDEF";
void C16(int n);

int main(){
    int n;
    cin >> n;
    C16(n);
}


void C16(int n){
    if(n == 0)
        return ;
    C16(n / 16);
    cout << tablou_conversie[n % 16];
}
