#pragma once
#include <iostream>
#include "A2.h"
#include "B2.h"

class C2 : virtual public A2
{
	int nc;

public:
	C2(int nn = 2) : A2(2 * nn + 1)
	{
		nc = nn;
		cout << "$$construction objet C2" << nc << "\n";
	}
};