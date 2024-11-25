#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



void populate_vector(float vector[], int n, float max)
{
    for (int i = 0; i < n; i++) {
        float value = ((float)rand() / RAND_MAX) * max;

        vector[i] = roundf(value * 2.0f) / 2.0f;
    }
    
}

void display_vector(const char *vectorName, float vec[], int n)
{
    int numToDisplay;

    if (n < 5) {
        numToDisplay = n; 
    } else {
        numToDisplay = 5; 
    }


    printf("%s - ", vectorName);
    


    for (int i = 0; i < numToDisplay; i++) {
        printf("%.2f", vec[i]);

         if (i < numToDisplay - 1) {
            printf(", ");
        }
    }
    printf("\n");
}



int main()
{
    int n;
    printf("Input Lenght of Vector: ");
    scanf("%d", &n);

    float *x1 = (float *)malloc(n * sizeof(float));
    float *x2 = (float *)malloc(n * sizeof(float));
    float *y1 = (float *)malloc(n * sizeof(float));
    float *y2 = (float *)malloc(n * sizeof(float));
    float *z = (float *)malloc(n * sizeof(float));

    populate_vector(x1, n, 50.0);
    populate_vector(x2, n, 50.0);
    populate_vector(y1, n, 50.0);
    populate_vector(y2, n, 50.0);


    display_vector("X1", x1, n);
    display_vector("X2", x2, n);
    display_vector("Y1", y1, n);
    display_vector("Y2", y2, n);

    free(x1);
    free(x2);
    free(y1);
    free(y2);
    free(z);

    return 0;
}
