#include<iostream>
using namespace std;
//Demonstrate 'while' loop to check whether a number is a palindrome or not
int main()
{
  int num,temp,reverse=0,rem;
  cout << "Enter a number" << endl;
  cin >> num;
  temp=num;
  while(num>0)
    {
      rem = num%10;
      reverse = reverse*10+rem;
      num=num/10;
    }
  if(temp==reverse)
  {
    cout << "the given number is a palindrome . " << endl;
  }
  else 
  {
    cout << "the given number is not a palindrome ." << endl;
  }
  return 0;
}
