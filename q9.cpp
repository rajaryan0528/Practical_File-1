#include <bits/stdc++.h>
using namespace std;


void even(int a[],int n)
{
  for(int i =0;i<n;i++)
  {
    if(a[i]%2==0)
      cout<<a[i]<<' ';
  }
  cout<<endl;
}

void odd(int a[], int n)
{
  for(int i =0;i<n;i++)
  {
    if(a[i]%2!=0)
      cout<<a[i]<<' ';
  }
  cout<<endl;
}

void sum_avg(int a[],int n)
{
  int sum=0;
  for(int i =0;i<n;i++)
  {
    sum=sum+a[i];
  }
  float avg= (float)sum/(n-1);
  cout<<"\n";
  cout<<"Sum of the elements :"<<sum<<endl;
  cout<<"Average :"<<avg<<endl;
}

void max_min(int a[],int n)
{
  //present in algorithm library
  int *max=max_element(a,a+n);
  int *min=min_element(a,a+n);
  cout<<"\nMAX : "<<*max<<endl;
  cout<<"MIN : "<<*min<<endl;

}

void remDup(int a[],int n)
  {
    int size=n;
    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;)
      {
        if(a[i]==a[j])
        {
          for(int k=j;k<size-1;k++)
            a[k]=a[k+1];  //shifting the elements right by one step
          size--;
        }
        else
          j++;
       }
      }
    for(int i=0;i<size;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }
void reverse(int a[], int n)
{
  int t;
  for(int i=0;i<n/2;i++)
  {
      t=a[i];
      a[i]=a[n-i-1];
      a[n-i-1]=t;
  }

  for(int i=0;i<n;i++)
  {

      cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main()
{
        int n,ch;
        char quit;
        cout<<"Enter the dimension for the array:";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Element "<<i<<":";
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {

            cout<<a[i]<<" ";
        }
        cout<<"\n1.Find the even-valued elements from the array.";
        cout<<"\n2.Find the odd-valued elements from the array.";
        cout<<"\n3.Find the sum of the elements and their average.";
        cout<<"\n4.Find the maximum and the minimum values from the array.";
        cout<<"\n5.Remove duplicate elements from the array.";
        cout<<"\n6.Reverse the array.";
        cout<<"\n7.To quit.";
        cout<<"\n";
        do
        {
        cout<<"Enter your choice from the above.";
        cin>>ch;
        //menu driven choice for users
        switch(ch)
        {
                case 1:
                     cout<<"\nThe even-valued elements from the array:- ";
                     even(a,n);
                     break;

                case 2:
                     cout<<"\nThe odd-valued elements from the array:- ";
                     odd(a,n);
                     break;

                case 3:
                      cout<<"\nSum of the elements and their average:- ";
                      sum_avg(a,n);
                      break;

                case 4:
                      cout<<"\nThe maximum and the minimum values from the array:- ";
                      max_min(a,n);
                      break;

                case 5:
                      cout<<"\nArray after removing  the duplicate elements from the array:- ";
                      remDup(a,n);
                      break;

                case 6:
                      cout<<"\nArray after it is reversed:- ";
                      reverse(a,n);
                      break;

                default:
                      if(ch==7)
                        cout<<"Task aborted."<<endl;
                      else
                      {
                      cout<<"Please enter a valid choce."<<endl;
                      cout<<"Valid choice is between 1 and 6."<<endl;
                      }
                      break;
        }
      }while(ch!=7);
        return 0;
}
