#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct s_punto
{
    double x;
    double y;
};

int main()
{
    struct s_punto p1, p2; /**el tamaño de almacenamiento p1 y p2 no se conoce*/
    double dist1;
    double dist2;
    scanf("%lf",&p1.x);
    scanf("%lf",&p1.y);
    scanf("%lf",&p2.x);
    scanf("%lf",&p2.y);
    printf("carga hecha----------------------------------");
    dist1=sqrt((p1.x*p1.x)+(p1.y*p1.y));
    dist2=sqrt((p2.x*p2.x)+(p2.y*p2.y));
    if (dist1>dist2)
    {
        printf("el punto (%2lf,%2lf) es más grande y su dist es %2lf",p1.x,p1.y,dist1);
    }
    if (dist1<dist2)
    {
        printf("el punto (%2lf,%2lf) es más grande y su dist es %2lf",p2.x,p2.y,dist2);
    }
    return 0;
}

