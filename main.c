//6 variant
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static void compute(const double* x, const double* y, double* t1, double* t2) {
    *t1 = ((2 + *x) / (2 - *x)) * log( (sqrt( (*y * *y) + (*x * *x) ) / sqrt( (*y * *y) - (*x * *x) ) ));
    *t2 = (3 / (4 + 4 * sqrt(*x))) + ((2 * ((cos(2 * *x)) * 2) - 5) / ((sin(*y)) * 2));
}

void main() {
    double x = 0.0;
    double y = 0.0;
    double t1 = 0.0;
    double t2 = 0.0;



    printf("%s", "insert x: ");
    scanf_s("%lf", &x);
    printf("%s", "insert y: ");
    scanf_s("%lf", &y);
    compute(&x, &y, &t1, &t2);
    printf("%s%lf%\n%s%lf", "t1: ", t1, "t2: ", t2);
}