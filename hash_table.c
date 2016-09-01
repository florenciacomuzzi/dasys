#include <stdlib.h>
#include "hash_table.h"

typedef struct _hashtableStruct
{
// define the components of the hash table here (e.g. the array, bookkeeping for number of elements, etc)
}hashtableStruct;


void init(hashtable** ht)
{
// initialize the components of the hashtable
}

void put(hashtable* ht, keyType key, valType value) {
// insert a key-value pair into the hash table
}

int get(hashtable* ht, keyType key, valType *values, int num_values) {
// get entries with a matching key and stores the corresponding values in the values array. The size of the values array is given by the parameter num_values. If there are more matching entries than num_values, they are not stored in the values array to avoid a buffer overflow. The function returns the number of matching entries. If the return value is greater than num_values, the caller can invoke this function again to get values that it missed during the first call. 
  return 1;
}

void erase(hashtable* ht, keyType key) {
// erase a key-value pair from the hash talbe
}
