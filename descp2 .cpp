#include <iostream>
#include <fstream>  

using namespace std;

//Declarare vector, deschidere fisier

int v[100];
ofstream fout("descp2.out");

//Scrie vectorul solutie in fisier

void afisare_solutie(int level) {

for (int index = 1; index < level; index++)

 fout << v[index] << " ";

fout << endl;

}

//Functie pentru backtracking

void bkt(int target_sum, int level) {

//Daca am trecut peste suma target atunci opreste executarea functiei

if (target_sum < 0) return;

//Daca am ajuns la suma target atunci afiseaza

if (target_sum == 0) afisare_solutie(level);

//Pe fiecare pozitie construieste un element putere a lui doi mai mare sau egal decat valoarea elementului anterior

for (v[level] = v[level-1]; v[level] <= target_sum; v[level]*=2) {

 //Apeleaza functia backtracking. Noua suma la care trebuie sa ajungem acum este egala cu suma anterioara minus valoarea elementului generat curent

 bkt(target_sum-v[level], level+1);

}

}

int main() {

int target;

//Citeste numarul la care trebuie sa ajungem din fisier

ifstream fin("descp2.in");

fin >> target;

fin.close();

//Elementul de pe pozitia 0 din vector este initializat cu 2 (deoarece la fiecare pas noul element trebuie sa fie mai mare sau egal decat elementul generat aterior trebuie sa ne asiguram ca exista un astfel de element pentru prima iteratie a programului)

v[0] = 2;

//Apeleaza functia pentru backtracking, incepe generarea elementelor de pe pozitia 1 din vector. Suma la care trebuie sa ajungem initial este cea citita din fisier

bkt(target,1);

//Inchidere fisier

fout.close();
}