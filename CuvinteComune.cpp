#include <iostream>
#include <cstring>
using namespace std;

char s1[256], s2[256];
char cuv1[128][256], cuv2[128][256];
int nr_cuv1, nr_cuv2;

int main()
{
    cin.getline(s1, 256);
    cin.getline(s2, 256);

    for(int i = 0; s1[i]; ++i)
        s1[i] = tolower(s1[i]);

    for(int i = 0; s2[i]; ++i)
        s2[i] = tolower(s2[i]);

    char *p = strtok(s1, " ");
    while(p){
        strcpy(cuv1[++nr_cuv1], p);
        p = strtok(NULL, " ");
    }

    p = strtok(s2, " ");
    while(p){
        strcpy(cuv2[++nr_cuv2], p);
        p = strtok(NULL, " ");
    }

    for(int i = 1; i < nr_cuv1; ++i)
        for(int j = i + 1; j <= nr_cuv1; ++j)
            if(strcmp(cuv1[i], cuv1[j]) > 0)
                swap(cuv1[i], cuv1[j]);

    for(int i = 1; i <= nr_cuv1; ++i)
        if(i == 1 || strcmp(cuv1[i], cuv1[i-1]) != 0){
            bool gasit = false;
            for(int j = 1; j <= nr_cuv2 && !gasit; ++j)
                if(strcmp(cuv1[i], cuv2[j]) == 0)
                    gasit = true;
            if(gasit)
                cout << cuv1[i] << '\n';
        }

    return 0;
}