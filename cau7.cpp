#include <iostream>
#include <string>
using namespace std;
struct car
{
  string make;
  int Year;
};
int main()
{
  int num;
  cout << "How many cars do you wish to catalog? ";
  cin >> num;
  car *s = new car[num];                     // To issue memory for cursor s type interger of num.
  for (int i = 0; i < num; i++)
  {
    cout << "Car #" << i+1 << endl;
    cin.get();                              // Enter n characters to character "\n" then stop. Put n-1 characters.
    cout << " Enter the make : ";
    getline(cin, s[i].make);               // Enter data in the variable.
    cout << "Enter the year made : ";
    cin >> s[i].Year;
  }
  cout << "Here is your collection:" << endl;
  for (int i = 0; i < num; i++)
  {
	  cout << s[i].Year << "," << s[i].make << endl;
  }
  return 0;
} 