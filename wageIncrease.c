#include <stdio.h>
int main () {

  int jobRole;
  float wage, newWage;

 // Print the table of wage increases by job position
  printf("Wage Increase 📈 by job position:\n");
  printf("\n\033[1m Position\t\t\t\tIncrease\033[0m\n");
  printf(" [1]Manager:\t\t\t10%%\n [2]Engineer:\t\t\t20%%\n [3]Technician:\t\t\t30%%\n [4]Other positions:\t40%%\n");

  // Get the job position from the user
  printf("\nEnter the job position: ");
  scanf("%i", &jobRole);
  // Check if the job position entered by the user is valid
  if (jobRole>4 || jobRole<1) {
    printf("\nNot a valid value.");
    return 0;
  } 
  
  // Get the current wage from the user
  printf("Enter your current wage: $");
  scanf("%f", &wage);
  // Check if the wage entered by the user is valid
  if (wage<0) {
    printf("\nNot a valid value.");
    return 0;
  }

  // Calculate the new wage based on the job position
  if (jobRole == 1) {
    newWage = wage*1.1;
    printf("\nYour wage was: $%.2f\nNow your wage is: $%.2f", wage, newWage);
    printf("\nDifference: +$%.2f", newWage-wage);
  } 
  else if (jobRole == 2) {
    newWage = wage*1.2;
    printf("\nYour wage was: $%.2f\nNow your wage is: $%.2f", wage, newWage);
    printf("\nDifference: +$%.2f", newWage-wage);
  } 
  else if (jobRole == 3) {
    newWage = wage*1.3;
    printf("\nYour wage was: $%.2f\nNow your wage is: $%.2f", wage, newWage);
    printf("\nDifference: +$%.2f", newWage-wage);
  } 
  else { // (jobRole == 4) 
    newWage = wage*1.4;
    printf("\nYour wage was: $%.2f\nNow your wage is: $%.2f", wage, newWage);
    printf("\nDifference: +$%.2f", newWage-wage);
  } 

  return 0; // End program
}
