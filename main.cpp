#include <iostream>
using namespace std;
int Days(int);

int main() {
  int n;
  int I;
  cin >> n;
  Days(I);
  
    cout << "Lanuch on " << I << endl;
}
int Days(int n)
{
  int smalls_Days;
  for (int i = 0; i < n; i++)
    {
      int day;
      cin >> day;
      
      if (smalls_Days > day)
        smalls_Days = day;
      break;
    }
  return smalls_Days;
}