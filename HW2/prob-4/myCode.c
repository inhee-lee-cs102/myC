#include <stdio.h>

int main(void) {
  
  int cents;
  printf("\nEnter your money in cents: ");
  scanf("%d", &cents);
int quarters, dimes, nickels, pennies = 0;
  
  do{
    quarters = (cents/25);
    cents = cents - quarters * 25;
  
    if(cents <= 0){
      break;
    }
    
    dimes = (cents/10);
    cents = cents - dimes * 10;
    if(cents <= 0){
      break;
    }

    nickels = (cents/5);
    cents = cents - nickels * 5;
    
    if(cents <= 0){
      break;
    }

    pennies = (cents);
    cents = cents - pennies * 5;
  }while (cents > 0);
  
  printf("%d quarters, %d dimes, %d nickels, %d pennies",quarters, dimes, nickels, pennies);

}
