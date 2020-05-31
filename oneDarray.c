#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int n, sum = 0;
    scanf("%d", &n);
    int * array = (int *)malloc(n * sizeof(int));  
    for(int i = 0; i < n; i ++) {
        scanf("%d", array + i);
        sum =sum + array [i];
    } 
    printf("%d", sum); 
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

}

