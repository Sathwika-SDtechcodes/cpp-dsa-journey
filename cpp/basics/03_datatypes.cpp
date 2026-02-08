#include<iostream>
using namespace std;
/*program to demonstrate basic datatypes in c++*/
int main()
{
  int Age ;
  float Height ;
  string Name;
  cout << "Enter your Full Name :" << endl;
  getline(cin,Name);
  cout << "Enter your Age" << endl;
  cin >>  Age ;
  cout << "Enter the Height" << endl;
  cin >> Height;
  cout << "Hello," << Name << "! May I know your age?" << endl;
  cout << "Hi,my age is " << Age << endl;
  cout << "what's your Height?" << endl;
  cout << "it's " << Height << " meters" << endl;
  return 0;
}
