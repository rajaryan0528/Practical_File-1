/* this program generates a pay slip for a salaried employee */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const int tax_rate=12.5;
string name;
int id,rta,rda,rhra,grossSal,netSal,bp,pf;
cout<<"Name of the employee:";
getline(cin,name);
cout<<"Employee ID:";
cin>>id;
cout<<"Enter Basic Pay:";
cin>>bp;
cout<<"Enter HRA (%):";
cin>>rhra;
cout<<"Enter TA (%):";
cin>>rta;
cout<<"Enter DA (%):";
cin>>rda;
cout<<"Provident Fund:";
cin>>pf;
//calculating the required values
float hra=(rhra*bp)/100.0;
float da=(rda*bp)/100.0;
float ta=(rta*bp)/100.0;
float tax=(tax_rate*bp)/100.0;
cout<<"\n";
// displaying the output in a formatted manner
cout<<"\t\t"<<"PaySlip for this month" <<"\t"<<"\n";
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"\t\tEmployee Details\t\n";
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Emloyee Name:"<<setw(15)<<setfill(' ')<<name
    <<"  |"<<"Employee ID:"<<setw(15)<<id<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Earnings"<<"\t|\t"<<"Rate"<<"\t|"<<"Amount\n";
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Basic Salary"<<"\t|\t"<<setw(3)<<setfill(' ')<<"-"<<"\t|"<<setw(6)<<bp<<endl;
cout<<"HRA"<<"\t\t|\t"<<setw(3)<<rhra<<"\t|"<<hra<<endl;
cout<<"DA"<<"\t\t|\t"<<setw(3)<<rda<<"\t|"<<da<<endl;
cout<<"TA"<<"\t\t|\t"<<setw(3)<<rta<<"\t|"<<ta<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Total Earnings:"<<"\t\t\t\t"<<setw(10)<<setfill(' ')<<bp+hra+da+ta<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Deductions"<<"\t|\t"<<"Rate"<<"\t|"<<"Amount\n";
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Tax"<<"\t\t|\t"<<setw(3)<<setfill(' ')<<tax_rate<<"\t|"<<tax<<endl;
cout<<"Provident Fund"<<"\t|\t"<<setw(3)<<"-"<<"\t|"<<pf<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Total Deductions:"<<"\t\t\t"<<setw(10)<<setfill(' ')<<tax+pf<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
cout<<"Net Pay:"<<"\t\t\t"<<(bp+hra+da+ta)-(tax+pf)<<endl;
cout<<setw(60)<<setfill('-')<<"\n";
return 0;
}
