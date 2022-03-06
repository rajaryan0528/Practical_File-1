/* this program prints the following pattern based on the user input
              *
              *  *
              *  *  *
              *  *   *  *
    where number of lines is given by the user */

#include <iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the value:";
        cin>>n;
        for(int i=0;i<=n;i++)
        {
          for(int j=0;j<i;j++)
          {
            cout<<"*"<<" ";
          }
          cout<<endl;
        }
        return 0;
}
