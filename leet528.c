/* Leet Code #528: Random Pick with Weight */
/*
    You are given a 0-indexed array of positive integers w where w[i] describes the weight of the ith index.
    You need to implement the function pickIndex(), which randomly picks an index in the range [0, w.length - 1] (inclusive) and returns it.
    The probability of picking an index i is w[i] / sum(w).
*/
#include <stdlib.h>

typedef struct {
    int *w;
    int wSize;
} Solution;


Solution* solutionCreate(int* w, int wSize) {
    Solution *p = (Solution *) malloc(sizeof(Solution));
    p->w = w;
    p->wSize = wSize;
    return p;
}

int solutionPickIndex(Solution* obj) {
  int sum = 0;
  int uniformRandomNumber;

  for(int i=0; i<(obj->wSize); i++)
  {
      sum += obj->w[i];
  }
  /* Pick a random number uniformly between 1 and sum */
  uniformRandomNumber = (rand() % sum) + 1;

  /* Select index according to weight of w[i] */
  for(int i=0; i<(obj->wSize); i++)
  {
    uniformRandomNumber -= obj->w[i];
    if(uniformRandomNumber<=0) return i;
  }

  return 0;
}

void solutionFree(Solution* obj) {
    free(obj);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(w, wSize);
 * int param_1 = solutionPickIndex(obj);
 
 * solutionFree(obj);
*/