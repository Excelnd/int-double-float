// int double float.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void f(int) { std::cout << "i"; }
void f(double) { std::cout << "d"; }
void f(float) { std::cout << "f"; }

int main()
{
	f(1);
    return 0;
}

