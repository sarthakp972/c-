/******************************************************************************
number pattern
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5
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
	  for (int j = 1; j <= i; j++)
		{
	 std::cout <<j<<" ";
		}
	  std::cout << "\n";
	}



  return 0;
}
