#include <stdio.h>
#include <string.h>

int main() 
{
    int i, *pi;
    float f, *pf;
    char c[10],*pc;
    
    pi = (int *) malloc(sizeof(int));
    pf = (float *) malloc(sizeof(float));
    pc = (char *) malloc(sizeof(char));
    
    strcpy(c, "ali velli");
    pc = c;
    
    *pi = 1024;
    *pf = 3.14;
    
    printf("integer value: %d, float value: %f\n", *pi, *pf);
    printf("a string: %s\n", pc);
    strcpy(c, "memo");
    pc = c;
    printf("a string: %s\n", pc);
    free(pi);
    free(pf);
    free(pc);
    
    return 0;
}

