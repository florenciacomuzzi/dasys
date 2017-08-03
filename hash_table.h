#ifndef HASH_TABLE_GUARD
#define HASH_TABLE_GUARD

typedef struct hashtable {
// define the components of the hash table here (e.g. the array, bookkeeping for number of elements, etc)
} hashtable;

typedef int keyType;
typedef int valType;

int allocate(hashtable** ht, int size);
int put(hashtable* ht, keyType key, valType value);
int get(hashtable* ht, keyType key, valType *values, int num_values, int* num_results);
int erase(hashtable* ht, keyType key);
int deallocate(hashtable* ht);

#endif
