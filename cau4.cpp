#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
  double Daphne = 100;
  double Cleo = 100;
  int y=0;
  do
  {
      Daphne += 10;
      Cleo += 0.05*Cleo;
      y++;
      cout << "After " << y <<"years"<< endl;
      cout << "Investment of Daphne: " << Daphne << endl;
      cout << "Investment of Cleo: " << Cleo << endl;
  } while (Daphne > Cleo);
  cout << "Years required for Cleo's investment to overtake Daphne's investment are: " << y << endl;
  return 0;
}