#include <fstream>
#include <string>
using namespace std;
 
ifstream fin("inlocuirecuvant.in");
ofstream fout("inlocuirecuvant.out");
 
int main()
{
    string a, b;
    fin >> a >> b;
    fin.get();
 
    int n1 = a.size();
    int n2 = b.size();
 
    string s;
    getline(fin, s, nullptr);
 
    size_t i = s.find(a);
 
    while(i != string::npos)
    {
        s.replace(i, n1, b);
        i = s.find(a, i + n2);
    }
 
    fout << s;
 
    return 0;
}