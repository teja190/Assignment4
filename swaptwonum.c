#include<stdio.h>
#include<conio.h>
    
void main()
{

int x,y,*ptr_x,*ptr_y,temp;

printf("Enter the value of x and y\n");
scanf("%d%d", &x, &y);
printf("Before Swapping\nx = %d\ny = %d\n", x, y);

ptr_x = &x;
ptr_y = &y;

temp = *ptr_y;
*ptr_y = *ptr_x;
*ptr_x = temp;


printf("After Swapping\nx = %d\ny = %d\n", x, y);
getch();
}
