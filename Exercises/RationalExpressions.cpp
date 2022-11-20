// #include <iostream>
// using namespace std;

// int main() {
//    int userCheck = 0;

//    cin >> userCheck; // Program will be tested with values: -9, -10, -11, -12.

//    if (userCheck >= -10) {
//       cout << "greater or equal to -10" << endl;
//    }
//    else {
//       cout << "less than -10" << endl;
//    }

//    return 0;
// }

#include <iostream>
using namespace std;

int main() {
   int userItems = 0;
   int userPoints = 0;

   cin >> userItems; // Program will be tested with values: 15, 20, 25, 30, 35.

   if (userItems <= 30) {
      userPoints = 10;
   }
   else {
      userPoints = 0;
   }

   cout << userPoints;

   return 0;
}