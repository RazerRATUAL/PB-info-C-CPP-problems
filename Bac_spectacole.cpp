#include <iostream>
using namespace std;

struct date
{ char CNP[14];
  int anNastere;
};
struct angajat
{ struct date dp;
  int venit;
} a[30];

a[1].dp.anNastere = 2000;
a[1].venit = 4000;