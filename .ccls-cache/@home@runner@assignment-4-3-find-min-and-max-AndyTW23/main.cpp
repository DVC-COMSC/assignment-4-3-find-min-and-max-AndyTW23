// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  
  int num1, num2, num3;
  int min, max, other;
  
  cin >> num1 >> num2 >> num3;

  if (num1 > num2)
  {
    if ( num2 < num3)
      min = num2;
        else //num2 >= num3
     min = num3;
    }
  else // num1 <= num2
  {
    if (num1 < num3)
     min = num1;
    else 
     min = num3;
  }//max numbers
    if (num1 < num2)
  {
    if ( num2 > num3)
     max = num2;
        else //num2 >= num3
       max = num3;
   
    }
  else // num1 >= num2
  {
    if (num1 > num3)
  max = num1;
    else 
    max = num3;
  }
  cout << "max" << max << endl;
  cout << "min" << max << endl;
  //other value
  

  
  }