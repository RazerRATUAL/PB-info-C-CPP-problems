#include <fstream>
using namespace std;

ifstream in("sir147.in");
ofstream out("sir147.out");

int main()
{
    int nr;
    while (in >> nr)
    {
        if (nr % 3 == 1)
            out << nr << " ";
    }
}