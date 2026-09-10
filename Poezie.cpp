#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char x[256], aux[257] = "";
    char *p, ch;
    int l;
    char semn[] = ".,!?";
    cin >> n;
    cin.get(); //extragem caractet '\n'
    for(int i = 1; i <= n; ++i)
    {
        cin.getline(x, 256);
        l = strlen(x);
        ch = x[l -1];
        strcpy(aux, "");
        p = strtok(x, semn);
        while(p)
        {
            strcat(aux, p);
            p = strtok(nullptr, semn); //NULL = '\0' = nullptr
        } 
        l = strlen(aux);
        if(strchr(semn, ch))
        {
             aux[l] = ch;
             aux[l + 1] = '\0';
        }
       

        cout << aux << '\n';
    }
    

    return 0;
}