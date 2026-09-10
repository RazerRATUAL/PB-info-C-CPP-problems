#include <iostream>

int GasesteTermenulN(int n) {
    int d = 0;
    while (n > 0) {
        n -= ++d;
    }
    if (n == 0) {
        return d;
    } else {
        return d - (n + d - 1);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << GasesteTermenulN(n) << std::endl;
    return 0;
}