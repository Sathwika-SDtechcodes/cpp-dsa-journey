#include<iostream>
using namespace std ;
//Demonstrate to print 1 to n numbers
int main()
{
  int n,i=1 ;
  cout << "How many numbers do you want to print ?" << endl ;
  cin >> n ;
  do
    {
      cout << i << endl ;
      i++;
    }
  while(i <= n);

  
    return 0 ;
  
}
