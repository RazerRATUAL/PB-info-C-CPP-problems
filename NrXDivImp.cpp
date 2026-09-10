int NrXDivImp(int a[], int st, int dr, int x){
    if(st == dr){
        if(a[st] == x){
            return 1;
        }
        else return 0;
    }
    else{
        int m = (st + dr) / 2;
        int cnt1 = NrXDivImp(a,st,m,x);
        int cnt2 = NrXDivImp(a,m+1,dr,x);
        return cnt1 + cnt2;
    }
}