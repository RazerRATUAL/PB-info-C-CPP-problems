#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
ifstream cin("biarbore1.in");
ofstream cout("biarbore1.out");
int main(){
    int r, st, dr;
    cin >> r >> st;
    int cnt = 2;
    if(st == 0)
        cin >> dr;
    else{
        while(cnt){
            int x;
            cin >> x;
            if(x == 0)
                cnt--;
            else
                cnt++;
        }
        cin >> dr;
    }
    cout << st << ' ' << dr;
    return 0;
}