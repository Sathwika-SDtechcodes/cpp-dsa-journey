#include<iostream>
using namespace std;
//program to demonstrate 'for' looping statements to  print a perfect table of any number
int main()
{
  int i,n,x;
  cout << "Enter the value of n :" << endl;
  cin >> n;
cout << "Enter the number of which table you want to print : " << endl;
  cin >> x;
   if(n<=0)
   {
     cout << "invalid ! please enter the positive number!" << endl;
   } 
  else
   {
     for(i=1;i<=n;i++)
       {
         cout << x << "*" << i << "=" << x*i << endl;
       }
   }
  return 0;
}
