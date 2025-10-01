#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

   
    area = length * breadth;
    perimeter = 2 * (length + breadth);

   
    printf("Area of rectangle = %d\n", area);
    printf("Perimeter of rectangle = %d\n", perimeter);

    return 0;
}