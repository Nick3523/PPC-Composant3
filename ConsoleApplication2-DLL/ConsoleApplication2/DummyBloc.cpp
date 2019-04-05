#include "stdafx.h"
#include <iostream>
#include "Bloc.h"


std::string Bloc::ToString() {
	return "foooooooooooooooooooooooooooooooooooooo" + nonce;
}

Bloc::Bloc() {
	nonce = 0;
}

