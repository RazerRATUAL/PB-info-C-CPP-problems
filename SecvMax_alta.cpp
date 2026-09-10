#include <fstream>
using namespace std;

ifstream fin("secvmax.in");
ofstream fout("secvmax.out");

int main(){
    int n;
    fin >> n;
    int cnt = 0,cnt_max = 0, l = 0, lmax = 0, sum = 0, summax = 0;

    int x;
    int st, dr;
    for(int i = 1; i <= n; ++i){
        fin >> x;
        if(x % 2 == 0){
            l++;
            cnt++;
            sum += x;
        }

        else{
            l = 0;
            cnt = 0;
            sum = 0;
        }
    if(cnt > cnt_max || (cnt == cnt_max && sum > summax)){
        summax = sum;
        cnt_max = cnt;
        dr = i; 
        st = i - cnt + 1;
    }
}

    fout << st << " "<< dr;
return 0;
}