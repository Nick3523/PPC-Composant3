#include "hash.h"
#include "stdafx.h"
#include <string>
#include "Bloc.h"

std::string hash(Bloc b) {
	return "000000000000000000000000000000000000000000000000000000000000000"; /*64 zeros*/
}
std::string hashName() {
	return "DummyHasher";
}
std::string version() {
	return "v1.0";
}