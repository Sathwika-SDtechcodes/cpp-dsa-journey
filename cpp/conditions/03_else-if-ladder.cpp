#include<iostream>
using namespace std;
//Demonstrates else-if ladder
int main()
{
  int marks;
  cout << "enter marks of the student" << endl;
  cin >> marks;
  if(marks<=100 && marks>=90)
  {
    cout <<"grade A"<< endl;
    else if(marks >= 80)
    {
      cout <<"grade B" <<endl;
      else if(marks >= 70)
      {
        cout <<"grade C"<< endl;
        else if(marks >= 60)
        {
          cout <<"pass"<< endl;
        }
      }
    }
  }
  else
  {cout << "fail" << endl;
  }
  return 0;
}
