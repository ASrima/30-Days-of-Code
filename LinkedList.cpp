// Example program
#include <iostream>
#include <string>
using namespace std;

//declare the print function

void Print();

//start the linklist

struct node
{ //structure is a typr in c++ and we named it node here
   int data;
   node* next;
};


node* head = NULL; //head is not pointing trowards anyone so it's null/empty


int main()
{
  int x,n, i;
  
  cout<<"How many data you want to input: ";
  cin>>n;
  
  cout<<"Input the data : ";
  cin>>x;
  
  //take the first data and allocate memory dinamically
  
  node* temp1=head;
  
  node* temp=new node();  //since we have decleared temp and created a new node it will a new data field like struct node
  
  temp->data=x;
  temp->next = NULL; //since it's not pointing towardes any other node yet
  
  //Now we have link th head node with the temp node
  
     head = temp;  //linked to head
     
     for(i = 0; i<n-1; i++){
         
      cin>>x;
      temp = new node();
      temp->data =x;
      temp->next = NULL;
      
      temp1 = head;
      while(temp1->next !=NULL){
          
          temp1=temp1->next;
         
     }
     temp1->next=temp;
     
     Print();
  
  
     }
}

void Print()
{
  node* temp = head;
  
  cout<<" list is :";
  
  while(temp!=NULL){
   cout<<temp->data<<" ";
    temp=temp->next;
  
  }
    
    
}
