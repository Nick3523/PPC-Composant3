#pragma once
#ifndef HASH_H
#define HASH_H

#include <string>
#include "Bloc.h"

#ifdef HASH_EXPORTS
#define HASH_INTERFACE __declspec(dllexport)
#else
#define HASH_INTERFACE __declspec(dllimport)
#endif


HASH_INTERFACE  std::string hash(Bloc b);
HASH_INTERFACE  std::string hashName();
HASH_INTERFACE  std::string version();

#endif