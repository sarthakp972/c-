/******************************************************************************
palindromic pattern
    Enter the numbers 5
    1
   212
  32132
 4321432
543215432
*******************************************************************************/

#include <iostream>

int
main ()
{
  int n;
  std::cout << "Enter the numbers ";
  std::cin >> n;
  for (int i = 1; i <= n; i++)
	{
	    for(int k=1;k<=n-i;k++){
	         std::cout <<" ";
	    }
	  for (int j =i; j >= 1; j--)
		{
	 std::cout <<j;
		}
		 for (int j =i; j > 1; j--)
		{
	 std::cout <<j;
		}
	  std::cout << "\n";
	}



  return 0;
}
