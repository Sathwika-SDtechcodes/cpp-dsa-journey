#include<iostream>
using namespace std;
//Demonstrate logical operators 
int main()
{
  int x,y,z;
  cin >> x >> y >> z;
  cout << (x>y && x<z) << endl;
  cout << (x<y || x=y) << endl;
  cout << !(x == y) << endl;
  return 0;
}
