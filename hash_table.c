#include <stdlib.h>
#include "hash_table.h"

typedef struct _hashtableStruct
{
// define the components of the hash table
}hashtableStruct;


void init(hashtable** ht)
{
// initialize the components of the hashtable
}

valType get(hashtable* ht, keyType key) {
// get a value based on a key from the hash table. If the key does not exist, a symbol should be returned to indicate that to the client code. 
  return -1;
}

void put(hashtable* ht, keyType key, valType value) {
// insert a key-value pair into the hash table
}

void erase(hashtable* ht, keyType key) {
// erase a key-value pair from the hash talbe
}
