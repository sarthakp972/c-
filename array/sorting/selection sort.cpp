/******************************************************************************

Binary search

*******************************************************************************/

#include <iostream>

int main()
{
    int n ,temp;
  
    std::cout<<"Number of elements";
     std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       std::cin>>arr[i];
    }
      for(int i=0; i<n; i++){
     std::cout<<"index ["<<i<<"] ="<<arr[i];
     std::cout<<"\n";
    }
    
 for(int i=0; i<n-1; i++){
     for(int j=i+1; j<n; j++){
         if(arr[i]>arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }
  std::cout<<"\n sorted array \n";
   for(int i=0; i<n; i++){
     std::cout<<"index ["<<i<<"] ="<<arr[i];
     std::cout<<"\n";
    }
    return 0;
}