#include <iostream>
#include <stack>

using namespace std;

int n, x;
string s;
stack <int> stiva;

int main(){

    cin >> n;
    for(int i = 1; i <= n; i++){

        cin >> s;

        if(s == "push")
            cin >> x;

        if(s == "push")
            stiva.push(x);
        else if(s == "top" && !stiva.empty())
            cout << stiva.top() << "\n";
        else if(s == "pop" && !stiva.empty())
            stiva.pop();

    }

}
