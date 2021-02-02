#pragma once
#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

class C : public B, public A
{
	int n;
	int p;

public:
	/*
	C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v)
	{
		n = n3;
		p = n1 + n2;
		cout << "** construction C : " << n << " " << p << "\n";
	}
	*/

	//110
	/*
	C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : B(v)
	{
		n = n3;
		p = n1 + n2;
		cout << "** construction C : " << n << " " << p << "\n";
	}
	*/

	//111
	C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0)
	{
		n = n3;
		p = n1 + n2;
		cout << "** construction C : " << n << " " << p << "\n";
	}
};
