#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    int array[N] = { 0 };
    int array_sum = 0;

    // Read array from input;
    int input_size = argc - 1;
    if (input_size > N || input_size <= 0) {
        printf("dimensione sbagliata, hai fornito N=%d\n", input_size);
        return -1;
    }
    for (int i = 0; i < input_size; i++) {
        array[i] = atoi(argv[i + 1]);
    }

    ////////////////////////////
    // Add your function here //
    ////////////////////////////
  
  

    ////////////////////////////

    printf("somma del vettore=%d\n", array_sum);

    return 0;
}
