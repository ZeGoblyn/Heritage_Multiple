#pragma once
#include <iostream>
#include "B2.h"
#include "C2.h"
#include "A2.h"

using namespace std;

class D2 : public B2, public C2
{
	int nd;

public:
	D2(int n1, int n2, float x) : C2(n1), B2(x), A2(2 * n1 + 1)
	{
		nd = n2;
		cout << "$$construction objet D2" << nd << "\n";
	}
};