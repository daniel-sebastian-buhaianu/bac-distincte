#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
	int x, y;
	fin >> x;
	cout << x << ' ';
	while (fin >> y)
	{
		if (y != x)
		{
			cout << y << ' ';
		}
		x = y;
	}
	fin.close();
	return 0;
}
