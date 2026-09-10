#include <fstream>
using namespace std;

ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");

int n;
bool a[100];

int main(){
    while (fin >> n){
        a[n] = true;
    }
    for (int i = 0; i < 100; i++){
        if (a[i]==true && i % 2 == 1){
            fout << i <<" ";
        }
    }

    fout << '\n';
    
    for (int i = 99; i >= 0; i--){
        if (a[i] == true && i % 2 == 0){
            fout << i <<" ";
        }
    }
    return 0;
}