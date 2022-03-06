/* this program checks whether the string entered by the user is a
palindrome or not and also whether given string is palindrome or not.*/

#include <iostream>
using namespace std;

int isPali(string s)
{
  int flag=1;
  int n=s.length();
  for(int i=0;i<n/2;i++)
  {
    if(s[i]!=s[n-1-i])  //checking for a palindrome
    {
      flag=0;
      break;
    }
  }
  if(flag==1)
  {
    cout<<s<<" is Palindrome"<<endl;
  }
  else
     cout<<s<<" is not a Palindrome"<<endl;
}

int main()
{
string given="shipman";
string word;
cout<<"Enter the word which is to be checked for a palindrome:";
getline(cin,word);
cout<<"\n";
cout<<"The given string is: "<<given<<endl;
isPali(given);
isPali(word);
return 0;
}
