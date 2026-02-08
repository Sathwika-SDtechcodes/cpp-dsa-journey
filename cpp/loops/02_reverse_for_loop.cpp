#include<iostream>
using namespace std;
//demonstrate reverse 'for' loop to generate table of any number
int main()
{
  int i,n,x;
  cout <<"Enter the value of n : " << endl;
  cin >> n;
  cout << "Enter the number that you want generate a table : " << endl;
  cin >> x;
  if(n <= 0)
  {
    cout << "invalid ! please enter positive number ." <<endl;
  }
  else
  { 
    for(i=n;i>0;i--)
  { cout << x << "*" << i <<  "=" << x*i << endl;
  }
  }
  return 0;
}
