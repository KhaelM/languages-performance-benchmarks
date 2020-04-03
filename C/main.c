#include <limits.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);

    clock_t begin = clock();
    for(int i = INT_MIN; i < INT_MAX; i++) {
    }
    clock_t end = clock();
    double timeElapsed = (double) (end - begin) / (double)CLOCKS_PER_SEC;
    
    printf("time elapsed: %f seconds", timeElapsed);
}