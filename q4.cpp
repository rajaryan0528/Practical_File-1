/*this program calculates the sum of the asked series*/

#include <iostream>
using namespace std;


int main()
{
int n;
cout<<"How many terms to be icluded:";
cin>>n;
int sum=1;
for(int i=2;i<=n;i++)
{
  //finding the sum as per the given series
  if(i%2==0)
   sum=sum-i;
  else
   sum=sum+i;

}
cout<<"Sum of the series upto "<<n<<" terms is : "<<sum;
return 0;
}
