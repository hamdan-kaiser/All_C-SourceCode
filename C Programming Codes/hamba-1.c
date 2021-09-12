#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main()
{
    double radius, area, perimeter;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area= pi*radius*radius;
    printf("Area of the circle: %.1lf\n", area);

    perimeter= 2*pi*radius;
    printf("Perimeter of the circle: %.1lf\n", perimeter);

    return 0;
}
