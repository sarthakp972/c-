
/*Conditional Statement , Programming Exercises:-

 Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.

*/

//inverted_half_pyramid 

#include <iostream>


int
main ()
{
  int i, num, row, col;
  std::cout << "enter row";
  std::cin >> row;

  /*std::cout << "enter the col value ";
  std::cin >> col;
*/
  for (i = 0; i <= row; i++)
	{

	  for (num = i; num <=row-1; num++)
		{

	
	  std::cout << "*";

		}

	  std::cout << "\n";



	}



  return 0;
}
