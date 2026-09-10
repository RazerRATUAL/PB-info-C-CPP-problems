#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("doarvocale.in");
ofstream cout("doarvocale.out");
const int dim = 256;
int main()
{
    char s[dim];
    int n;
    cin >> n;
    int cnt=0;
    for(int k = 0 ; k < n ; ++k)
    {
        cin >> s;
        int i = 0;
        bool voc=true;
        while(s[i]!='\0')
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                voc=false;
            i++;    
        }
        if(voc)
            cnt++;
        
    }
    cout << cnt;
    return 0;    
}