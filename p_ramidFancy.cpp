#include <iostream>

using namespace std;

int main ()
{
  int repeats = 10;
  char letter = 'p';
  for (int i = 0; i < repeats; i++)
    {
      for (int p = 2; p <= repeats - i; p++)
	{
        std:cout << " ";
	}
      for (int n = 1; n <= i * 2 + 1; n += 1)
	{
	    cout << letter;
	}
      cout << "\n";
    }
  cout << "Why does it think im in Albany? -Caleb Denio, 2/19/2019";
}
