/* this program prints the factors of a given number*/

#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the number whose factors is to be found:";
cin>>n;
cout<<"Factors of the given number are:"<<endl;
for(int i=1;i<=n;i++)
{
  if(n%i==0)      //checking for factors
    cout<<i<<", ";
}
return 0;
}
