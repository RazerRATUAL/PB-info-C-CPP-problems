#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[101];
  cin.getline(text, 101);

  bool found = false;
  int i = 0, j, nVocale, nConsoane;
  while (text[i] != '\0') 
  {

    while (text[i] == ' ') 
    {
      i++;
    }

    j = i;
    nVocale = nConsoane = 0;
    while (isalpha(text[j])) {
      if (strchr("aeiou", text[j])) 
      {
        nVocale++;
      } else 
      {
        nConsoane++;
      }
      j++;
    }

    if (nVocale < nConsoane) {
      found = true;
      for (int k = i; k < j; k++) {
        cout << text[k];
      }
      cout << endl;
    }

    i = j;
  }

  if (!found) {
    cout << "nu exista" << endl;
  }

  return 0;
}
