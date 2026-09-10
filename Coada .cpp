#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int c , x;
    queue<int>Q;
    string s;
    cin >> c;
    for(int i = 1 ; i <= c ; i++)
    {
        cin >> s;
        if(s == "push")
        {
            cin >> x;
            Q.push(x);
        }
        else if(s == "front")
            cout << Q.front() << '\n';
        else Q.pop();
    }
}