/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
reverse number program 

*******************************************************************************/

#include <iostream>

int main()
{
    int  lastdigit, reverse,n;
    std::cout<<"enter the number";
    std::cin>>n;
   while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        
        n=n/10;
           
    }
    std::cout<<reverse;
 
    return 0;
}