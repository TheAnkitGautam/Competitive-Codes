#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double dd;
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &dd);
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", ch);
    printf("%f\n", f);
    printf("%lf\n", dd);
    return 0;
}