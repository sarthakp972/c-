/******************************************************************************
pascal triangele
using functions
            
*******************************************************************************/

#include <iostream>
#include <cmath>


int fact(int n){
    int sum=1;
    if(n==0){
        sum=1;
        return sum;
    }
    else{
    for(int i=1;i<=n;i++){
    
        sum=i*sum;    
    }
 
    return sum;
}
}

int main ()
{
  int ans,n,row,col;
    std::cout << "factorial\n ";
  std::cout << "enter the  two number n and r ";
  std::cin >>row;



for(int i=0; i<row; i++){
    for(int j=0; j<=i;j++){
  ans =(fact(i))/(fact(i-j) * fact(j));
    
  std::cout<<ans<<" ";
    }
    std::cout<<"\n";
}
       
  return 0;
}
