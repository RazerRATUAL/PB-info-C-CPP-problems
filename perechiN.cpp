#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int i = 1, j = n -1;
    while(i <= j){
        cout << i <<" " << j << endl;
        i++;
        j--;
    }
}