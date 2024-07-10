
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
 int i,num,a,b;
 std::cout<<"enter starting range";
 std::cin>>a;
 
  std::cout<<"enter the last range ";
 std::cin>>b;
 
 for(i=a;i<=b;i++){
     for(num=2; num<i; num++){
         if(i%num==0){
              break;}
     }
     if(i==num){
           std::cout<<i<<" ";
     }
     
 }
  
	

  return 0;
}
