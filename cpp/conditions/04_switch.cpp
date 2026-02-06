#include<iostream>
using namespace std;
//Demonstrates switch cases condition 
int main()
{
   int Sport;
  cout <<"Menu:"<<endl;
  cout <<"1.Kabaddi" << endl;
  cout <<"2.Cricket" << endl;
  cout <<"3.Football"<< endl;
  cout <<"4.Hockey" << endl;
  cout <<"5.Tennis" << endl;
  cout <<"Choose your Sport to play now :" << endl;
  cin >> Sport;
  switch(Sport)
    {
      case 1 : cout << "Kabaddi";break;
      case 2 : cout << "Cricket";break;
      case 3 : cout << "Football";break;
      case 4 : cout << "Hockey";break;
      case 5 : cout << "Tennis";break;
      default :
        {
          cout << "Invalid choice!" <<endl;
        }
    }
  return 0;
}
