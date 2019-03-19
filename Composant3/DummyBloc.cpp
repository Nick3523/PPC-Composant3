#include "stdafx.h"
#include "hash.h"
#include <iostream>
#include "Bloc.h"


std::string Bloc::toString() {
		return "fooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" + nonce;
}

Bloc::Bloc() {
	nonce = 0;
}

