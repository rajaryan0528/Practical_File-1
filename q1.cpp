/* this program finds the sum and product of the digits of a given integer */

#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter a number:";
cin>>n;

int sum,prod=1,dig;
while(n>0)
{
  dig=n%10;  //extracting each digit from the number
  sum=sum+dig;
  prod=prod*dig;
  n=n/10;
}
cout<<sum<<endl;
cout<<prod<<endl;
return 0;
}
