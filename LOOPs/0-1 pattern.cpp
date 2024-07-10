/******************************************************************************
0-1 pattern

1
01
101
0101

*******************************************************************************/

#include <iostream>

int
main ()
{
  int n;
  std::cout << "Enter the numbers ";
  std::cin >> n;
  for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j <= i; j++)
		{
		 if((i+j)%2==0){
		     	  std::cout <<1;
		 }
		 else {
		    std::cout <<0;  
		 }
	
		}
	  std::cout << "\n";
	}



  return 0;
}
