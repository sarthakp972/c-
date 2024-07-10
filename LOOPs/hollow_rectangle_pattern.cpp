
/*Conditional Statement , Programming Exercises:-

 Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.

*/

//prime number or not , now user will give range 

#include <iostream>


int
main ()
{
  int i, num, row, col;
  std::cout << "enter row";
  std::cin >> row;

  std::cout << "enter the col value ";
  std::cin >> col;

  for (i = 1; i <= row; i++)
	{

	  for (num = 1; num <= col; num++)
		{

		  if (i == 1 || i == row)
			{
			  std::cout << "*";
			}

		  else if (num == 1 || col == num)
			{
			  std::cout << "*";
			}
		  else
			{
			  std::cout << " ";

			}


		}

	  std::cout << "\n";



	}



  return 0;
}
