#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
     fgets(s, sizeof(s), stdin);
    printf("Hello, World!\n%s",s); 
    
    ///* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

