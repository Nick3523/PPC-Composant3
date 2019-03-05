#include "stdafx.h"
#include "hash.h"
#include <iostream>
#include "Bloc.h"

class Bloc
{
public:
	char hash[HASH_SIZE]; // hash des autres champs, hash of the entire bloc
	unsigned int nonce;

	char previous_hash[HASH_SIZE]; // hash of the previous bloc
	int num; // numero du bloc, commence a zero
	TX tx1; //  transaction du bloc
	TXM tx0; // transaction du mineur (coinbase)

	std::string ToString() {
		return "fooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" + nonce;
	}

	Bloc() {
		nonce = 0;
	}


};