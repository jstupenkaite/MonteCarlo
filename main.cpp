#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // n = 1;
  int n;
  double num2[10];
  cout << "n = 1" << endl;
  double low, high;
  cin >> low;
  cin >> high;
  double range=(high-low);
  double num = rand() * range / RAND_MAX + low ;
  cout << num << endl;
  // n = 2
  cout << "n = 2" << endl;
  double low2, high2;
  cin >> low2;
  cin >> high2;
  cout << "Kokio ilgio vektorius: ";
  cin >> n;
  double range2=(high2-low2);
  for (int i = 1; i<=n; i++)
  {
    num2[i] = rand() * range / RAND_MAX + low2;
    cout << num2[i] << endl;
  }

}
