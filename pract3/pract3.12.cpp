#include <iostream>
using namespace std;

int main()
{
  int games = 110;
  int players = 0;

  for (int n = 1; n <= 100; n++)
  {
    if (n * (n - 1) == games)
    {
      players = n;
      break;
    }
  }

  cout << "Кількість шахістів: " << players << endl;

  return 0;
}
