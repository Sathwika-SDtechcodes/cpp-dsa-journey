#include<stdio.h>
using namespace std;
//Demonstrate if else statement
int main()
{
  int age;
  cout << "Enter age" << endl;
  cin >> age;
  if(age >= 18)
  {
    cout << "you are eligible to vote" <<endl;
  }
  else
  {
    cout << "sorry!you are not eligible" << endl ;
  }
  return 0;
}
