#include <iostream>
using namespace std;
int Days(int);

int main() {
int n;
  cin >> n;
  int smalls_Days;
  for (int i = 0; i < n; i++)
    {
      int day;
      cin >> day;
      
      if (smalls_Days >= day)
      {
        smalls_Days = day;
        }
      else
        break;
    }
  cout << smalls_Days;
return 0;
}
int Days(int)
{ int n;
  int I;
  cin >> n;
  int smalls_Days;
  for (int i = 0; i < n; i++)
    {
      int day;
      cin >> day;
      
      if (smalls_Days > day)
      {
        smalls_Days = day;
        }
      else
        break;
    }
  return smalls_Days;
}