#ifndef HASH_TABLE_GUARD
#define HASH_TABLE_GUARD

#include <stdio.h>

typedef struct _hashtableStruct hashtableStruct;

typedef hashtableStruct* hashtable;
typedef int keyType;
typedef int valType;


void init(hashtable** ht);
void put(hashtable* ht, keyType key, valType value);
int get(hashtable* ht, keyType key, valType *values, int num_values);
void erase(hashtable* ht, keyType key);

#endif
