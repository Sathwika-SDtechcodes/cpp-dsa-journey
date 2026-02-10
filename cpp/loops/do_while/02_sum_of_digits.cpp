#include<iostream>
using namespace std ;
// program to find sum of the digits using 'do-while' loop
int main()
{
  int n,rem,sum=0;
  cout << "Enter the number : " << endl;
  cin >> n;
  do
  {
    rem = n%10;
    sum = sum + rem;
    n = n/10;
  }
    while(n > 0);
  cout << "sum of the digits : " << sum << endl;
  return 0;
}
