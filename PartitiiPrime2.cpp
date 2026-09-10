#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void findPrimeSums(int n, int start, string currentSum) {
    if (n == 0) {
        cout << currentSum << endl;
        return;
    }

    for (int i = start; i <= n; ++i) {
        if (isPrime(i)) {
            if (n - i >= 0) {
                string newSum = currentSum + to_string(i) + " ";
                findPrimeSums(n - i, i + 1, newSum);
            }
        }
    }
}

int main() {
    int n;
    cout << "Introduceți numărul n: ";
    cin >> n;

    if (n < 2 || n > 200) {
        cout << "Numărul trebuie să fie între 2 și 200." << endl;
        return 1;
    }

    cout << "Modalitățile de a scrie " << n << " ca sumă de numere prime sunt:" << endl;
    findPrimeSums(n, 2, "");

    return 0;
}
