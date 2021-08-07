#include <iostream>
using namespace std;

int main()
{
   // Variable Declaration
   double num1, num2, num3;
   double total, average;

   // Value declaration
   num1 = 75.35;
   num2 = -35.56;
   num3 = 15.76;

   // Total adds all three numbers together.
   total = num1 + num2 + num3;

   // Average divides that total by three.
   average = total/3;

   // Outputs the total of the numbers.
   cout << "Total of Numbers = " << total << endl;

   // Outputs the average of the total.
   cout << "Average = " << average << endl;

   return 0;

}