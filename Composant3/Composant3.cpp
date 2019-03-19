

#include "stdafx.h"
#include "hash.h"
#include <iostream>
#include <vector>
#include "Bloc.h"
using std::string;
using std::cout;
using std::endl;


Bloc miner(unsigned int difficulty, Bloc b) {
	string strHash;
	int nbZeros;
	do {
		b.nonce++;
		nbZeros = 0;
		strHash = hash(b.toString());
		for (int i= HASH_SIZE-1; i >= 0; i--) {
			if (strHash[i] == '0') nbZeros++;
			else break;
		}
	} while (nbZeros < difficulty);
	strcpy_s(b.hash, strHash.c_str());
	return b;
}

