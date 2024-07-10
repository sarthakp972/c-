/******************************************************************************

   half pyramid using number
   1
   22
   333
   4444
   55555

*******************************************************************************/

#include <iostream>

int main()
{
 int i,j,c,n;
    std::cout<<"enter the number of rows";
    std::cin>>n;
 c=1;
 for(i=0;i<=n;i++)
 {
     
     for(j=0;j<=i;j++){
            std::cout<<"*";
     }
     
        std::cout<<"\n";
       
 }
 ///////////////////////////////////////////
     std::cout<<"\n";
       std::cout<<"\n";
  for(i=n;i>=0;i--)
 {
     
     for(j=0;j<=i;j++){
            std::cout<<"*";
     }
     
        std::cout<<"\n";
       
 }
 /////////////////////////////////
    std::cout<<"\n";
       std::cout<<"\n";
////////////////////////////

         for(i=0;i<=n;i++)
 {
     
     for(j=0;j<=n;j++){
         if(i>j){
              std::cout<<" ";
         }
         else{
                 std::cout<<"*";
         }
        
     }
     
        std::cout<<"\n";
       
 }
////////////////////////////////////////////
  std::cout<<"\n";
       std::cout<<"\n";
       ///////////////////////////////////
       
         for(i=n;i>0;i--)
 {
     
     for(j=0;j<=n;j++){
         if(i<=j){
              std::cout<<"*";
         }
         else{
                 std::cout<<" ";
         }
        
     }
     
        std::cout<<"\n";
       
 }
       
       
    return 0;
}