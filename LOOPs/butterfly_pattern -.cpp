/******************************************************************************

   Butterfly pattern

*******************************************************************************/

#include <iostream>

int
main ()
{
  int x1, x2, i, j;
  std::cout << "enter the number of row";
  std::cin >> x1;
  std::cout << "enter the number of coloum";
  std::cin >> x2;


  for (i = 0; i <= x1; i++)
	{

	  for (j = 0; j <= x2; j++)
		{

		  if (j <= i || j >= (x2 - i))
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
	//////////////////////////////////////////////////
	  for (i = x1; i>=0; i--)
	{

	  for (j = 0; j <= x2; j++)
		{

		  if (j <= i || j >= (x2 - i))
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
