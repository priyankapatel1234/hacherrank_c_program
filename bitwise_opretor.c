#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andmax, ormax, xormax;
  andmax = ormax = xormax = 0;
  for(int i = 1; i < n; i ++) {
      for(int j = i+1; j <= n; j ++) {
        andmax = (i & j) > andmax && (i & j) < k ? i & j : andmax;
        ormax = (i | j) > ormax && (i | j) < k ? i | j : ormax;
        xormax = (i ^ j) > xormax && (i ^ j) < k ? i ^ j : xormax; 
      }
  }
  printf("%d\n", andmax);
  printf("%d\n", ormax);
  printf("%d\n", xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

