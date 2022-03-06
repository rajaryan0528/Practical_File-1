/*this program calculates the sum of the asked series*/

#include <iostream>
using namespace std;


int main()
{
int n;
cout<<"How many terms to be included:";
cin>>n;
float sum=1;
const int numrtr=1;
for(int i=2;i<=n;i++)
{
  sum=sum+(float)numrtr/i;
  //finding the sum of the series

}
cout<<"Sum of the series upto "<<n<<" terms is : "<<sum;
return 0;
}
