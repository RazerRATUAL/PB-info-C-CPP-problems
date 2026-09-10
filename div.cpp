#include <iostream>

int main() {
    // Citirea valorilor n și k de la tastatură
    int n, k;
    std::cout << "Introduceti valorile pentru n si k (intre 2 si 20): ";
    std::cin >> n >> k;

    // Verificarea dacă valorile introduse sunt în intervalul [2, 20]
    if (n < 2 || n > 20 || k < 2 || k > 20) {
        std::cerr << "Eroare: n si k trebuie sa fie intre 2 si 20." << std::endl;
        return 1;  // Încheierea programului cu eroare
    }

    // Construirea și afișarea tabloului bidimensional
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n * k; ++j) {
            // Calcularea valorii curente în funcție de condițiile specificate
            int value = i + (j - 1) / k;

            // Afișarea valorii
            std::cout << value << " ";
        }
        std::cout << std::endl;  // Trecerea la următoarea linie
    }

    return 0;  // Încheierea programului cu succes
}
