#include <iostream>
using namespace std;

int main() {
   int hourlyWage;
   int weeklyHours;
   int weeklySalary;
   int overtimeHours;
   const int WEEKLY_LIMIT = 40;

   cout << "Enter hourly wage: " << endl;
   cin >> hourlyWage;
   cout << "Enter hours worked: " << endl;
   cin >> weeklyHours;

   // FIXME: Get user input value for weeklyHours
   // weeklyHours = 40;


   if (weeklyHours <= WEEKLY_LIMIT) {
      weeklySalary = weeklyHours * hourlyWage;
   }
   else {
      overtimeHours = weeklyHours - WEEKLY_LIMIT;
      weeklySalary = static_cast<int>((hourlyWage * WEEKLY_LIMIT) +
                                      (hourlyWage * overtimeHours * 1.5));
   }
   cout << "Weekly salary is: " << weeklySalary << endl;

   return 0;
}