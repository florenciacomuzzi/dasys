#ifndef HASH_TABLE_GUARD
#define HASH_TABLE_GUARD

#include <stdio.h>

typedef struct _hashtableStruct hashtableStruct;

typedef hashtableStruct* hashtable;
typedef int keyType;
typedef int valType;


void init(hashtable** ht);
valType get(hashtable* ht, keyType key);
void put(hashtable* ht, keyType key, valType value);
void erase(hashtable* ht, keyType key);

#endif
