// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  
   cout<<"Enter a number to start the series: "<<endl;
   
   cin>>n;
  int first=0;
  int second =1;
  int third;
   
   for(int i = 0; i<n-1; i++){
       
       if(i==0)
       {
        
        cout<<first<<" "<<second<<" ";   
       }
       else
       {
          third = first + second;
          
          first = second;
          
          second = third;
          
          cout<<third<<" ";
       }
   
}
return 0;}
