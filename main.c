//6 variant
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static void compute(const double* x, const double* y, double* t1, double* t2) {
    *t1 = ((2 + *x) / (2 - *x)) * log10((sqrt((*y * *y) + (*x * *x)) / sqrt((*y * *y) - (*x * *x))));
    *t2 = (3 / (4 + 4 * sqrt(*x))) + (  (2 * ((cos(2 * *x)) * (cos(2 * *x))) - 5) / ((sin(*y)) * (sin(*y)))  );
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
    if (x && y != 0.0) {
        compute(&x, &y, &t1, &t2);
        printf("%s%lf%\n%s%lf", "t1: ", t1, "t2: ", t2);
    }
    else {
        printf("%s", "x or y 0, try greater or lower");
    }
}