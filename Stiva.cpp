/* Solutie OOP + STL */
#include <iostream> // pentru std::cin, std::cout
#include <string>   // pentru std::string
#include <string.h> // pentru memcpy

template<typename T>
class Stack
{
private:
    T* data; // Structura de date folosita este un vector
    unsigned int capacity;
    unsigned int count;
    /*
    Initial, capacitatea este de 2 elemente de tipul T.
    Capacitatea va fi dublata de fiecare data cand este depasita.
    */
public:
    Stack() {
        this->capacity = 2;
        this->count = 0;
        this->data = new T[capacity];
    }
    void top() {
        if(this->count >= 1) {
            std::cout << this->data[this->count - 1] << std::endl;
        }
    }
    void pop() {
        if(this->count >= 1) {
            this->count -= 1;
        }
    }
    void push(T value) {
        if(this->count == this->capacity) { // Daca capacitatea max. a fost atinsa
            this->capacity *= 2;            // Dublam capacitatea
            T* tmp = this->data;            // Salvam elementele vechi
            this->data = new T[capacity];   // Reinitializam structura de date
            // Copiem in noua structura de date vechile valori, bit cu bit
            memcpy(this->data, tmp, this->capacity / 2 * sizeof(T));
        }
        this->data[count++] = value; // Inseram noua valoare si crestem contorul
    }
};

int main() {
    Stack<int> S; // Stiva noastra va contine elemente de tipul int,
    // dar poate fi definita ca avand elemente de orice
    // alt tip.
    int n, nr;
    std::string operatie;
    std::cin >> n;
    while(n--) {	// Citim n operatii
        std::cin >> operatie;
        if(operatie == "top") {
            S.top();
        } else if(operatie == "pop") {
            S.pop();
        } else if(operatie == "push") {
            std::cin >> nr;
            S.push(nr);
        }
    }
}
