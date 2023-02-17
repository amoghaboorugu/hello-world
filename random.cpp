/** @file thirdexample.cpp
@author Lastname:Firstname:A00123456:cscxxxxx
@version Revision 1.1
@brief Illustrates doxygen-style comments for documenting a C++
program file and the functions in that file.
@details If you want to add any further detailed description of
what is in the file, then place it here (after the first statement)
and it will appear in the detailed description section of the HTML
output description for the file.
@date Monday, September 19, 2011
*/

#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  