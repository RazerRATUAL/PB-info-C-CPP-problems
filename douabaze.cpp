#include <iostream>
#include <string>
using namespace std;

string base2to4(string b2){
   string b4;

   if (b2.size() & 1)
      b2.insert(b2.begin(), '0');

   for (int i = 0; i < b2.size(); i += 2){
      string current_2 = b2.substr(i, 2);
      if (current_2 == "00") b4 += "0";
      else if (current_2 == "01") b4 += "1";
      else if (current_2 == "10") b4 += "2";
      else if (current_2 == "11") b4 += "3";
   }

   return b4;
}

int main(){
   string b2;
   cin >> b2;
   
   cout << base2to4(b2);
}