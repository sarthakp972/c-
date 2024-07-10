
/*Conditional Statement , Programming Exercises:-

5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.

*/

#include <iostream>

int
main ()
{
  int a, b;

  std::cout << "Enter the a number";
  std::cin >> a;

 
  if (a>20)
	{
	  std::cout <<a<<" is your age :- Congratulation! You are eligible for casting your vote.";

	}
  
	else{
	   std::cout<<a<<" is your age :- sorry! You are not eligible for casting your vote "; 
	}

  return 0;
}
