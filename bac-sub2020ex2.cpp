#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[101];
  cin.getline(text, 101);

  int i = 0, j = 0;
  while (text[i] != '\0') {
    if (text[i] == '-') {
      // Verificăm dacă este un număr negativ
      bool isNegative = true;
      for (int k = i + 1; text[k] != '\0' && text[k] != ' '; k++) {
        if (text[k] < '0' || text[k] > '9') {
          isNegative = false;
          break;
        }
      }

      if (isNegative) {
        // Sărim peste numărul negativ
        while (text[i] != ' ' && text[i] != '\0') {
          i++;
        }
      } else {
        // Copiem caracterul curent
        text[j++] = text[i++];
      }
    } else {
      // Copiem caracterul curent
      text[j++] = text[i++];
    }
  }

  text[j] = '\0';

  // Afișăm textul transformat
  cout << text << endl;

  return 0;
}
