// C Program to Find Area of Rhombus
#include <stdio.h>
int main(){
    float d1, d2, area;
    
    // Asking for input
    printf("Enter the first diagonal of rhombus: ");
    scanf("%f", &d1);
    printf("Enter the second diagonal of rhombus: ");
    scanf("%f", &d2);
    
    // Calculating area
    area = (d1 * d2) / 2;
    
    // Displaying output
    printf("Area of rhombus: %.2f", area);
    return 0;
}