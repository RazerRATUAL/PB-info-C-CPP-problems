#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("in.in");
ofstream cout("out.out");
char cuvm[251][21], cuv[21];

int main(){
    int cnt = 0;
    while(cin >> cuv)
        strcpy(cuvm[cnt++], cuv);

    for(int i = 0; i < cnt - 1; ++i)
        for(int j = i + 1; j < cnt; ++j)
            if(strcmp(cuvm[i], cuvm[j]) > 0)
                swap(cuvm[i], cuvm[j]);

    for(int i = 0; i < cnt; ++i)
        cout << cuvm[i] << '\n';

return 0;
}