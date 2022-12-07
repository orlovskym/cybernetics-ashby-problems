#include <stdio.h>
#define LIMIT 5
float transform(float v, float p);

int main()
{
    float i, v, p, oldV;
    v = 10;
    p = 10;
    printf("%3s%3s%7s\n", "V", "P", "V'");

    for (i = 0; i < LIMIT; i++)
    {
        oldV = v;
        v = transform(v, p);
        printf("%3.0f%3.0f%6.1f\n", oldV, p, v);
    }
}

float transform(float v, float p)
{
    return ((0.1) * (v + (90.0 / p)));
}