#pragma once
#include<iostream>
using namespace std;
void myswap(int&a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
