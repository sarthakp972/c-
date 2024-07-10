/******************************************************************************
Rhombus pattern
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
	    for(int k=n-1;k>=i;k--){
	         std::cout <<" ";
	    }
	  for (int j = 1; j <= n; j++)
		{
	 std::cout <<"*";
		}
	  std::cout << "\n";
	}



  return 0;
}
