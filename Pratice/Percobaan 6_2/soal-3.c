#include <stdio.h>
#include <math.h>

#define PI 3.14159

float radian(float degree) {
    return degree * PI / 180.0;
}

int main() {
    int i;
    float x[13];
    float data[13][3];

    for (i = 0; i < 13; i++) {
        x[i] = i * 30;
    }

    for (i = 0; i < 13; i++) {
        float rad = radian(x[i]);
        data[i][0] = sin(rad);
        data[i][1] = cos(rad);
        data[i][2] = tan(rad);
    }

    printf("---------------------------------------------------------\n");
    printf("|   x   |   Sin(x)   |   Cos(x)   |    Tan(x)   |\n");
    printf("---------------------------------------------------------\n");

    for (i = 0; i < 13; i++) {
        printf("| %5.0f | %10.2f | %10.2f | %11.2f |\n",
               x[i], data[i][0], data[i][1], data[i][2]);
    }

    printf("---------------------------------------------------------\n");

    return 0;
}
