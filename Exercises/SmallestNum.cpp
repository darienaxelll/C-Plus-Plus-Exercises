#include <iostream>
using namespace std;

int main() {

    // Write a program whose inputs are three integers, and whose output is the smallest of the three values.
   
   /* Type your code here. */
   int a,b,c;
   
   cin >> a >> b >> c;
   
   if(a < b && a < c) {
      cout << a;
   } else if (b < a && b < c) {
      cout << b;
   } else if (c < a && c < b) {
      cout << c;
   }

   return 0;
}