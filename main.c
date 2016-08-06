#include "hash_table.h"

// This is where you can implement your own tests for the hash table implementation.
// Compile and run it in the command line by typing: 
// make main; ./main
int main(void) {

  hashtable* ht=NULL;
  init(&ht);

  int key = 0;
  int value = -1;

  put(ht, key, value);

  int num_values = 1;
  int values[num_values];
  
  get(ht, 0, values, num_values);
  erase(ht, 0);
  return 0;
}
