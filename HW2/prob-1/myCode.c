#include <stdio.h>

int main() {

  int width, height;
  printf("\nEnter the width of your rectangle: " );
  scanf("%d", &width);
  printf("Enter the height of your rectangle: ");
  scanf("%d", &height);

  int perimeter;
  perimeter = 2 * (width + height);
  printf("\nThe perimeter of your rectangle is: %d\n", perimeter);

}
