
/*Conditional Statement , Programming Exercises:-

 Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.

*/

#include <iostream>
#include <cmath>

int
main ()
{
  int a, b, c;
  float x1, x2, discriminant;

  std::cout << "Enter the coefficients a, b, and c: ";
  std::cin >> a >> b >> c;

  discriminant = b * b - 4 * a * c;

  if (discriminant < 0)
	{
	  std::cout << "Discriminant (" << discriminant <<
		") is negative. Roots are imaginary; No real solution." << std::endl;
	}
  else if (discriminant == 0)
	{
	  x1 = -b / (2.0 * a);
	  std::cout << "Discriminant is zero. There is one repeated root: " << x1
		<< std::endl;
	}
  else
	{
	  x1 = (-b + sqrt (discriminant)) / (2.0 * a);
	  x2 = (-b - sqrt (discriminant)) / (2.0 * a);
	  std::cout <<
		"Discriminant is positive. There are two distinct real roots: " << x1
		<< " and " << x2 << std::endl;
	}

  return 0;
}
