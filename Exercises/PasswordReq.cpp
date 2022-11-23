#include <string>
using namespace std;

int main() {
   string codeStr;
   unsigned int i;
   
   cin >> codeStr;

   while (codeStr != string::npos)
   {
    codeStr.replace(codeStr, i , "x");
   }
   

   cout << "New password: " << codeStr << endl;
   
   return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int usaIndex;

   cout << "Enter text: ";
   getline(cin, userText);

   // At least one occurrence exists
   while (userText.find("U.S.A.") != string::npos) {
      // Get index of first instance
      usaIndex = userText.find("U.S.A.");

      // U.S.A. is 6 long
      userText.replace(usaIndex, 6, "USA");
   }

   cout << "New text: " << userText<< endl;

   return 0;
}