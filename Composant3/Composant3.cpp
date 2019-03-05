

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
		strHash = hash(b.ToString());
		for (int i= HASH_SIZE-1; i >= 0; i--) {
			if (strHash[i] == '0') nbZeros++;
			else break;
		}
	} while (nbZeros < difficulty);
	strcpy(b.hash, hash(b.ToString()).c_str);
	return b;
}

