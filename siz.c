#include<stdio.h>
#include<time.h>
int main() {
double time_spent =0.0;
 clock_t begin = clock();
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    clock_t end = clock();
time_spent += (double)(end - begin)/ CLOCKS_PER_SEC;
printf("the elapsed time is %f seconds",time_spent); 

    return 0;
}
