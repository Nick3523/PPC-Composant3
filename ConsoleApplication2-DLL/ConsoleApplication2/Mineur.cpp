#include "stdafx.h"
#include "Mineur.h"
#include "hash.h"
#include <iostream>
#include <vector>
#include "Bloc.h"
using std::string;
using std::cout;
using std::endl;

int nbZerosCounter(std::string str) {
	int nbZeros = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == '0') nbZeros++;
		else break;
	}
	return nbZeros;
}


Bloc miner(unsigned int difficulty, Bloc b) {
	string strHash;
	int nbZeros;
	do {
		b.nonce++;
		strHash = hash(b.ToString());
		nbZeros = nbZerosCounter(strHash);
	} while ((unsigned) nbZeros < difficulty);
	strcpy_s(b.hash, strHash.c_str());
	return b;
}

