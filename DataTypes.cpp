#include<iostream>
#include<iomainp>
#include<limits>
using namespace std;

int main(){

// Declare second integer, double, and String variables.

int i2 ; 
double d2;
string s2;
  
  //works the following code too
  //int i2 =12;
  //double d2=4.0;
  //string s2="is the best place to learn and practice coding!";

// Read and save an integer, double, and String to your variables.
cin >> i2;
cin >> d2;
cin.ignore(); //write it before getline gets executed otherwise it will cause issues while getting numeric and string values from regular cin>>i2>>d2 to getline(cin,s2)
getline(cin, s2); //using getline(cin, s2) will get the full string length(the entire line) otherwise it won't execute the whole line

// Print the sum of both integer variables on a new line.
cout << i + i2 << endl;

// Print the sum of the double variables on a new line.
cout << fixed << setprecision(1) << d + d2 << endl; 

// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
cout << s + s2 << endl;
return 0;
}
