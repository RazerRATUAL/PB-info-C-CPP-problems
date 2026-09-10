#include <iostream>
using namespace std;
int n;
int nrsol(int no,int nc);

int main(){

    cin >> n;
    cout << nrsol(0, 0);
}

int nrsol(int no, int nc){
    if(nc + no == n)
        return 1;
    int cnt = 0;
    if(nc < no)
        cnt += nrsol(no, nc + 1);
    
    if(no < n/2)
        cnt += nrsol(no + 1, nc);
    return cnt;
}