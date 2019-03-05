

#include "stdafx.h"
#include "hash.h"
#include <iostream>
#include <vector>
#include "Bloc.h"
using std::string;
using std::cout;
using std::endl;


Bloc mineur(unsigned int difficulty, Bloc b) {
	string strHash;
	int nbZeros;
	do {
		b.nonce++;
		nbZeros = 0;
		strHash = hash(b.ToString());
		for (int i; i < strHash.size(); i++) {
			if (strHash[i] == '0') nbZeros++;
		}
	} while (nbZeros < difficulty);
	return b;
}

