#pragma once
#include <iostream>

using namespace std;

class point
{
protected:
	int x, y;

public:
	point(int abs = 0, int ord = 0)
	{
		x = abs;
		y = ord;
	}

	void affiche()
	{
		cout << "Coordonées : " << x << " " << y << "\n";
	}
};