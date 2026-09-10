#include <fstream>
#include <queue>
#include <cmath>
#include <cstring>
#include <tuple>

using namespace std;
#define Inf 0x3f3f3f3f

fstream cin("hex.in");
ofstream cout("hex.out");

char s[10001];

void afis(int sum){

    if(sum == 10)
        cout << 'A';

    else if (sum == 11)
        cout << 'B';

    else if (sum == 12)
        cout << 'C';

    else if (sum == 13)
        cout << 'D';

    else if (sum == 14)
        cout << 'E';

    else if (sum == 15)
        cout << 'F';

}

int main(){ 
    cin >> s;

    int Lungime = strlen(s); 
        while(Lungime % 4 != 0) 
            Lungime++;

        char aux[10001];

        for(int i = 0;i < Lungime - strlen(s); ++i)
            aux[i]='0'; 

        strcat(aux, s); 
        
        int sum=0;
        int putere = 3; 

        int i=0;

        while(aux[i]){

            if((i+1)%4!=0){ 
                int x = aux[i] - '0'; 
                int p = pow(2,putere); 
                sum = sum + (x * p); 
                putere--;

            }
            
            else if((i + 1) % 4 == 0){ 
                int x = aux[i] - '0';
                int p = pow(2,putere);
                sum = sum + (x * p);
                putere--;

                if(sum <= 9)
                    cout << sum;
                else
                   afis(sum);
                
                putere = 3;
                sum = 0;

            }
           i++;
        }
    
    
    return 0;
}