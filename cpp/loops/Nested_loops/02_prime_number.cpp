#include<iostream>
using namespace std;
//Program to check whether the given number is  prime or not by using  loops
int main()
{
  int n;
  cout <<"Enter a number" << endl;
  cin >> n;
  if(n <= 1)
  {
    cout << "Not Prime";
    return 0;
  }
bool  isPrime =true;
  for(int i=2;i*i <= n;i++)
    {
      if(n % i == 0)
      {
        isPrime = false;
        break;
      }
    }
  if( isPrime)
    cout << "Prime number" ;
  else
    cout << "Not Prime";
  return 0;
}
