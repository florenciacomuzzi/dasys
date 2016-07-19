#include "hash_table.h"
#include <time.h>
#include <stdlib.h>

int main(void) {

  hashtable* ht=NULL;
  init(&ht);

  int seed = 1;
  srand(seed);
  int num_tests = 20;  
  keyType keys[num_tests];
  valType values[num_tests];

  printf("Testing putting and getting from the hash table.\n");
  printf("Inserting %d key-value pairs.\n", num_tests);
  for (int i = 0; i < num_tests; i += 1) {
    keys[i] = rand();
    values[i] = rand(); 
    put(ht, keys[i], values[i]);
    printf("\t(%d -> %d) \n", keys[i], values[i]);
  }

  for (int i = 0; i < num_tests; i += 1) {
    int index = rand() % num_tests;
    keyType target_key = keys[index];
    valType target_value = get(ht, target_key);
    if (target_value != values[index]) {
      printf("Test failed with key %d. Got value %d. Expected value %d.\n", target_key, target_value, values[index]);
      return 1;
    } 
  }

  printf("Passed tests for putting and getting.\n");
  printf("Now testing erasing.\n");

  for (int i = 0; i < num_tests; i += 1) {
    keyType target_key = keys[i];
    erase(ht, target_key);
    valType value = get(ht, target_key);
    if (value != -1) {
      printf("Test failed with key %d. Got value %d. Expected value %d.\n", target_key, values[i], -1);
      return 1;
    } 
  }

  printf("Passed tests for erasing.\n");

  return 0;
}
