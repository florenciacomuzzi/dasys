#include "hash_table.h"

// This is where you can implement your own tests for the hash table implementation.
// Compile and run it in the command line by typing: 
// make main; ./main
int main(void) {

  hashtable* ht=NULL;
  init(&ht);

  put(ht, 0, 1);
  get(ht, 0);
  erase(ht, 0);
  return 0;
}
