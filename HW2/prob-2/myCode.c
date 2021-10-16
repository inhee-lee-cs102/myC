#include <stdio.h>

int main() {
  
  int minute;
  printf("\nEnter the number of minutes: ");
  scanf("%d", &minute);

  int hr,min;
  hr = (minute / 60.0);
  min =  (minute - (60 * hr));

  printf("\nYour number of minutes in hours and minutes is: %d hours and %d minutes\n\n", hr, min);
}
