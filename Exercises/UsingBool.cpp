// #include <iostream>
// using namespace std;

// int main() {
//    bool isTeenager;
//    int kidAge;

//    cin >> kidAge;

//    if (kidAge >= 13 && kidAge <= 19) {
//     isTeenager = true;
//    }

//    if (isTeenager) {
//       cout << "Teen" << endl;
//    }
//    else {
//       cout << "Not teen" << endl;
//    }

//    return 0;
// }

#include <iostream>
using namespace std;

int main()
{
   bool isRed;
   bool isBalloon;

   cin >> isRed;
   cin >> isBalloon;

   if (isBalloon && !isRed)
   {
      cout << "Balloon" << endl;
   }
   else if (isBalloon && isRed)
   {
      cout << "Red balloon" << endl;
   }
   else
   {
      cout << "Not a balloon" << endl;
   }

   return 0;
}