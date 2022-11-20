#include <iostream>
using namespace std;

int main() {
   int x;

   cin >> x;

   if (x < 5) {
      cout << "t";
   }
   else if (x < 25) {
      cout << "p";
   }
   else if (x < 35) {
      cout << "n";
   }
   else {
      cout << "o";
   }

   cout << endl;

   return 0;
}