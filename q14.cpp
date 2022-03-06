/*to display fibonacci series,calculate factorial of a number and calculate GCD of two numbers*/

#include <iostream>
using namespace std;
void fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
  {
    f=f*i;
  }
  cout<<"Factorial of "<<n<<" is :"<<f<<endl;
}

void gcd(int a, int b)
{
  int t=min(a,b);
  int gcd=0;
  for(int i=1;i<=t;i++)
  {
    if(a%i==0 && b%i==0)
      gcd=i;
  }
  cout<<"GCD of "<<a<<","<<b<<" is : "<<gcd;
}

void fib_series(int n)
{
  unsigned int a=0,b=1,c;
  cout<<a<<" "<<b<<" ";
  for(int i=2;i<n;i++)
  {
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
  }
  cout<<endl;
}

int main()
{

 int n;
 cout<<"How many terms do you want to display in fibonacci series? ";
 cin>>n;
 fib_series(n);
 int a;
 cout<<"Enter the number whose factorial is to be found:";
 cin>>a;
 fact(a);
 int n1,n2;

 cout<<"Enter a number:";
 cin>>n1;
 cout<<"Enter another number:";
 cin>>n2;
 gcd(n1,n2);

return 0;
}
