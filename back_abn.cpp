#include <iostream>
using namespace std;

void generateWords(char a, char b, int n, string current) {
    if (n == 0) {
        cout << current << endl;
        return;
    }

    for (char c = a; c <= b; c++) {
        generateWords(c + 1, b, n - 1, current + c);
    }
}

int main() {
    char a, b;
    int n;
    cin >> a >> b;

    generateWords(a, b, n, "");

    return 0;
}
