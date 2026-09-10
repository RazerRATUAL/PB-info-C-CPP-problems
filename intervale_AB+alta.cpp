#include <iostream>
using namespace std;

struct elem{
    int poz;
    int status;
}a[200001];

int nr_elem, n;

int partitionare(elem a[], int st, int dr){
    int poz = st;
    for(int i = st; i < dr;  ++ i){
        if(a[i].poz < a[dr].poz){
            swap(a[i], a[poz]);
            poz++;
        }
        else if(a[i].poz == a[dr].poz){
            if(a[i].status > a[dr].status){
                swap(a[i], a[poz]);
                poz++;
            }
                
        }
    }
    swap(a[poz], a[dr]);
    return poz;
}
void quickSort(elem a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz - 1);
        quickSort(a, poz + 1, dr);
    }
}

int main()
{
    
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[++nr_elem].poz;
        a[nr_elem].status = 1; // asa marcam deschiderea
        cin >> a[++nr_elem].poz;
        a[nr_elem].status = -1; // asa marcam inchiderea
    }
    
    quickSort(a, 1, nr_elem);
    // sorteaza crescator dupa poz, iar la acelasi poz, descresc dupa status
    
    int cnt = 0, cntmax = 0;
    for(int i = 1; i <= nr_elem; ++i){
        if(a[i].status == 1)
            cnt++;
        else cnt--;
        if(cnt > cntmax)
            cntmax = cnt;
    }
    
    cout << cntmax;
    
    return 0;
}