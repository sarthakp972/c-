/******************************************************************************
palindromic pattern
    Enter the numbers 5
  number prime or not
 
*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int
main ()
{
  int n, flag = 0;
  cout << "Enter the numbers ";
  cin >> n;
  for (int i = 2; i <= sqrt (n); i++)
	{
	  if (n % i == 0)
		{
		  cout << "number is not prime";
		  flag = 1;
		  break;
		}


	}
	if (flag==0)
		{
		  cout << "number is  prime";
		 
		}



  return 0;
}
