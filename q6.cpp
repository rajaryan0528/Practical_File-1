/* this program checks whether the number entered by the user is prime
or not  and also prints all the prime numbers in the range [1,100]*/

#include <iostream>
using namespace std;

int isPrime(int n)
{
  int flag=1;
  for(int i=2;i<n/2+1;i++) //checking for factors of the number
  {
    if(n%i==0)
    {
      flag=0;
      break;
    }
  }
  if(flag==1)
   return 1;
  else
   return 0;
}

void Prime()
{
 cout<<"\t"<<"Prime Numbers between 1 to 100"<<endl;;
 for(int i=2;i<101;i++)
 {
   if(isPrime(i)==1)
     cout<<i<<" ";
 }
}

int main()
{
int n;
cout<<"Enter the number to be checked for prime:";
cin>>n;
int res=isPrime(n);
if(res==1)
 cout<<"Prime"<<endl;
else
 cout<<"Not Prime"<<endl;
 Prime();
return 0;
}
