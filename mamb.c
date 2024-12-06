#include <stdio.h>
#include <math.h>

int triangle(int base, int het)
{
   int triangle = base*het*0.5;
}
int rectangle(int width, int het)
{
  int rectangle = width*het;
}
int circle(int radius)
{
   int cicrle = radius*radius*3.14;
}
int main(){
    int radius,base,het,width,num;
    printf("choose the shape amoung the following\n");
    printf("1.circle\n2.triangle\n3.rectangle\n");
    printf("enter your choose:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
     printf("enter the radius:");
     scanf("%d",&radius);
     printf("the area of cicrle is %d ",circle(radius));
    break;
    case 2:
    printf("enter base and height of triangle:");
    scanf("%d %d", &base ,&het);
    printf("The area of triangle is %d",triangle(base,het));
    break;
    case 3:
    printf("enter width and height of rectangle:");
    scanf("%d %d",&width,&het);
    printf("the area of rectangle is %d",rectangle(width,het));
    break;
    default:
    printf("you entered invalid value");
       
    }
}
