#include<iostream>
using namespace std;
//program to print diamond star pattern using nested loops
int main()
{
  int i,j,n;
  cout << "Enter number of rows :";
  cin >> n;
  if(n<=0)
  {cout << "please enter a positive number !" << endl;
  return 0;    
  }
  //Upper half of the diamond
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
  {cout << " ";
  }
  for(j=1;j<=2*i-1;j++)
  {cout << "*" ;
  }
    cout << endl;
  }
  // lower half of the diamond 
  for(i=n-1;i>=1;i--)
  {
  for(j=1;j<=n-i;j++)
  {cout << " "; 
  }
  for(j=1;j<=2*i-1;j++)
  {cout << "*" ;
  }
    cout << endl;
  }
  return 0;
}
