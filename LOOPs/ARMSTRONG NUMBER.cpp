/******************************************************************************

               Armstrong number
               input 153
               1*1*1 + 5*5*5 +3*3*3 
             output=>  153
*******************************************************************************/

#include <iostream>

int main()
{
    int  lastdigit, sum=0,n,p;
    std::cout<<"enter the number";
    std::cin>>n;
    p=n;
   while(n>0){
        lastdigit=n%10;
        sum = ( lastdigit*  lastdigit*  lastdigit)+sum;
        
       // std::cout<<sum<<"\n";
        
        n=n/10;
           
    }
    if(sum ==p ){
          std::cout<<"number is Armstrong"<<"\n";
    }
    else{
         std::cout<<"number is not Armstrong"<<"\n";
    }
  
    
    //std::cout<<reverse;
 
    return 0;
}