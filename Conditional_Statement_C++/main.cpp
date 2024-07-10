
/*Conditional Statement , Programming Exercises:-

3. Write a C++ program to check whether a given number is positive or negative.
Test Data : 15
Expected Output : 15 is a positive number

*/

#include <iostream>

int
main ()
{
  int a, b;

  std::cout << "Enter the a number";
  std::cin >> a;

 
  if (a<0)
	{
	  std::cout <<a<<" is an negative integer";
	}
  else
	{
	  std::cout <<a<<" is an positive integer ";
	}

  return 0;
}
