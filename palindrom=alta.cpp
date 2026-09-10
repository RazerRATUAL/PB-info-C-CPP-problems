#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("in.in");
ofstream cout("out.out");

bool pal(char c[]){
    for(int i = 0, j = strlen(c) - 1; i < j; ++i, --j)
        if(c[i] != c[j])
            return false;
    return true;
}

int main(){

}