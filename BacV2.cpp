#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[101];
  cin.getline(text, 100);

  char* token = strtok(text, " ");
  while (token != NULL) {
    bool isNegative = false;
    if (token[0] == '-') {
      isNegative = true;
      token++;
    }

    bool isNumber = true;
    for (int i = 0; i < strlen(token); i++) {
      if (!isdigit(token[i]) && token[i] != '.' && token[i] != ',') {
        isNumber = false;
        break;
      }
    }

    if (!isNegative || !isNumber) {
      cout << token << " ";
    }

    token = strtok(NULL, " ");
  }

  cout << endl;

  return 0;
}
