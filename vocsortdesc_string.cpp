#include <iostream>
#include <string>

using namespace std;

string m[120];
string voc = "AEIOUaeiou";

int NrVoc(string a);

int main()
{
    string s;

    getline(cin, s);

    size_t i = s.find_first_not_of(" "), j = 0;
    string cuv;
    size_t cnt = -1;

    while (i != string::npos)
    {
        j = s.find_first_of(" ", i);

        if (j == string::npos)
            j = s.length();

        cuv = s.substr(i, j - i);

        m[++cnt] = cuv;

        i = s.find_first_not_of(" ", j);
    }

    bool ok = false;

    while (!ok)
    {
        ok = true;

        for (size_t i = 0; i < cnt; ++i)
            if (NrVoc(m[i]) < NrVoc(m[i + 1]) || (NrVoc(m[i]) == NrVoc(m[i + 1]) && m[i].size() < m[i + 1].size()) || (NrVoc(m[i]) == NrVoc(m[i + 1]) && 
                m[i].size() == m[i + 1].size() && m[i] > m[i + 1]))
            {
                ok = false;

                swap(m[i], m[i + 1]);
            }
    }

    for (size_t i = 0; i <= cnt; ++i)
        cout << m[i] << '\n';

    return 0;
}

int NrVoc(string a)
{
    int cnt = 0;

    for (size_t i = 0; i < a.size(); ++i)
        for(size_t j = 0; j < voc.size(); ++j)
            if (a[i] == voc[j])
            {
                ++cnt;

                break;
            }

    return cnt;
}
