#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	int i;
	char b;
	b = 'A';
	for (i = b; b <= 'Z'; i++) {
		cout << b << '\t' << i << '\n';
		++b;
	}
	b += 6;
	for (i = b; b <= 'z'; i++) {
		cout << b << '\t' << i << '\n';
		++b;
	}
	keep_window_open();
	return 0;
}
