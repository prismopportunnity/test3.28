#include <stdio.h> 
#include <math.h>
//输入两点坐标（X1,Y1）,（X2,Y2）(0<=x1,x2,y1,y2<=1000),计算并输出两点间的距离。
int main() {
    int T;
    double a;
    double b;
    double c;
    double d;
    double distance;

    scanf("%d", &T);

    while (T--) {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

        distance = sqrt((a - c) * (a - c) + (b - d) * (b - d));

        printf("%.2lf\n", distance);
    }
    return 0;
}