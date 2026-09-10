#include <iostream>

using namespace std;

bool Palindrom(int n);

int main() {
    int x;
    cin >> x;
    int ppm = 0;
    int spm = 0;
    for (int i = 1; i <= x; i *= 10) {
        int r = x % i;
        int p = x - r;
        int s = r;

        if (Palindrom(p) && p > ppm) {
            ppm = p;
        }

        if (Palindrom(s) && s > spm) {
            spm = s;
        }
        }
        if (Palindrom(x)) {
            ppm = x;
            spm = x;
        }
    cout << ppm << " " << spm << endl;
    return 0;
}

bool Palindrom(int n) {
    int ogl = 0;
    int copie = n;

    while (n > 0) {
        int c = n % 10;
        ogl = ogl * 10 + c;
        n /= 10;
    }

    return copie == ogl;
}
