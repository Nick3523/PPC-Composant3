#include "stdafx.h"
#include "Mineur.h"
#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;


int main()
{
	Bloc b;
	b = miner(4, b);
	cout << "hash found:" << b.hash << endl;
	return 0;
}

