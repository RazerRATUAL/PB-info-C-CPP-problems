#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isDivisor(int n, int x) {
    return n % x == 0;
}

vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 2; i * i <= n; i++) {
        if (isDivisor(n, i)) {
            divisors.push_back(i);
            if (n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

vector<vector<int>> findTriplets(int n) {
    vector<vector<int>> triplets;
    vector<int> divisors = findDivisors(n);
    for (int i = 0; i < divisors.size(); i++) {
        for (int j = i + 1; j < divisors.size(); j++) {
            int sum = divisors[i] + divisors[j];
            if (sum > n) {
                break;
            }
            if (sum == n && isDivisor(n, sum)) {
                triplets.push_back({divisors[i], divisors[j], sum});
            }
        }
    }
    return triplets;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> triplets = findTriplets(n);
    if (triplets.empty()) {
        cout << "nu exista";
    } else {
        for (const auto &triplet : triplets) {
            for (int i = 0; i < triplet.size() - 1; i++) {
                cout << triplet[i] << " ";
            }
            cout << triplet.back() << endl;
        }
    }
    return 0;
}