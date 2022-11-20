// #include <iostream>
// using namespace std;

// int main() {
//    int userNum;

//    cin >> userNum; // Program will be tested with values: -14, -15, -16, -17.

//    if (userNum < -15) {
//       cout << "less than -15" << endl;
//    }
//    else {
//       cout << "-15 or more" << endl;
//    }

//    return 0;
// }

#include <iostream>
using namespace std;

int main() {
   int userAge;

   cin >> userAge; // Program will be tested with values: 18, 19, 20, 21.

   if (userAge <= 19) {
      cout << "I am a teenager" << endl;
   }
   else {
      cout << "I am an adult" << endl;
   }

   return 0;
}