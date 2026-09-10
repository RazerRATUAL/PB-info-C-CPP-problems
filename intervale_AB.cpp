#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


ifstream fin("intervale.in");
ofstream fout("intervale.out");

struct Event {
    int x, sgn; // sgn = 1 pt inceput de interval, sgn = -1 pt sfarist
    bool operator < (Event const& e) const
    {
        return x < e.x || (x == e.x && sgn > e.sgn);
    }
};

vector<Event> events;
int n;   // nr de intervale

int main()
{
    int x, y;
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        fin >> x >> y;
        events.push_back({x, 1});
        events.push_back({y, -1});
    }

    sort(events.begin(), events.end());
    int cnt = 0;
    int mx = 0;

    for (auto event : events)
    {
        cnt += event.sgn;
        mx = max(mx, cnt);
    }

    fout << mx;
}
