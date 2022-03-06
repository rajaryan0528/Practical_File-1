/* this program reverses a  given number */

#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter a number:";
cin>>n;

int revNum,dig;
while(n>0)
{
  dig=n%10;  //extracting each digit from the number
  revNum=revNum*10+dig;
  n=n/10;
}
cout<<"Reversed number is: "<<revNum;
return 0;
}
