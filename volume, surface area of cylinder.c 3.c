#include<stdio.h>
#include<math.h>

int main()
{
float height= 0.0;
float radius =0.0;
const double PI=3.142;
float volume=0.0;
float surfacearea=0.0;

    printf("enter height of the cylinder:");
    scanf("%f", & height);
    
    printf("enter the radius of the cylinder:");
    scanf("%f",&radius);
    
    volume= PI* pow(radius,2)*height;
    surfacearea=2*PI*pow(radius,2)+2*PI*radius*height;
    
    printf("The volume is:%.2fcubic meter\n", volume);
    printf("The surface area is:%.2fsquare meter\n", surfacearea);
    return 0;
}