#include <fstream>
using namespace std;
ifstream cin("nrlipsa1.in");
ofstream cout("nrlipsa1.out");
  int v[101];
int main(){
  int n, a = -1, b = -1;
  while(cin >> n)
    if(n >= 10 && n <= 100) v[n]++;
  for(int i = 10; i <= 98; i += 2){
    if(v[i] == 0 && a == -1) a = i;
    if(v[i] == 0 && a != 0 && i != a) b = i;
  }
  if(a != -1 && b != -1) cout << a << " " << b;
  else cout << "nu exista";
  return 0;
}