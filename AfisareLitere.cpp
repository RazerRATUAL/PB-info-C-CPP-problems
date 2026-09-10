#include <iostream>
#include <cstring>

using namespace std;

char s[256], lit[256];
bool l[28];

int main(){
    int nrlit;
    cin.getline(s, 256);
    for(int i = 0; i < strlen(s); ++i){
        if(s[i] >= 'a' && s[i] <= 'z' && l[s[i] - 'a'] == 0) //l ii ca sa apara numa o data litera
        {
            lit[nrlit] = s[i], l[s[i] - 'a'] =1;
            nrlit++;
        }    
    }

    for(int i = 0 ; i < nrlit; ++i)
        cout << lit[i] << ' ';
}