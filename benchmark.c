#include "hash_table.h"
#include <sys/time.h>
#include <stdlib.h>

int main(void) {

  hashtable* ht=NULL;
  init(&ht);

  int seed = 2;
  srand(seed);
  int num_tests = 50000000;  
  printf("Performing stress test. Inserting 50 million keys.\n");

  struct timeval stop, start;
  gettimeofday(&start, NULL);  

  for (int i = 0; i < num_tests; i += 1) {
    int key = rand();
    int val = rand(); 
    put(ht, key, val);
  }

  gettimeofday(&stop, NULL);
  double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec); 
  printf("50 million insertions took %f seconds\n", secs);

  return 0;
}
