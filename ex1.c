/******************
Name: Shaked Weizman
ID: 318794823
Assignment:ex1
*******************/
#include <stdio.h>

int main() {
    int number, position; //task 1
    
    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter the bit position: ");
    scanf("%d", &position);
    
    // Check if the position is within the valid range
    if (position < 0 || position >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;  // Exit with error code
    }
    
    // Shift the bit at the specified position to the least significant bit
    int bit = (number >> position) & 1;
    
    // Print the result
    printf("The bit at position %d is: %d\n", position, bit);


    int number, position; //task 2
    
    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter the bit position: ");
    scanf("%d", &position);
    
    // Check for valid bit position
    if (position < 0 || position >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;  // Exit if the position is out of range
    }
    
    // Create a mask with a 1 at the given position
    int mask = 1 << position;
    
    // Number with the bit at position 'on' (set to 1)
    int number_with_bit_on = number | mask;
    
    // Number with the bit at position 'off' (set to 0)
    int number_with_bit_off = number & ~mask;
    
    // Print the results
    printf("Number with bit at position %d set to 1: %d\n", position, number_with_bit_on);
    printf("Number with bit at position %d set to 0: %d\n", position, number_with_bit_off);

    int number, position; //task 3
    
    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter the bit position: ");
    scanf("%d", &position);
    
    // Check for valid bit position (should be within the range of an integer's bit length)
    if (position < 0 || position >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;  // Exit with error code
    }
    
    // Toggle the bit at the given position
    int mask = 1 << position;  // Create a mask with a 1 at the specified position
    number = number ^ mask;    // Toggle the bit using XOR
    
    // Print the result
    printf("Number after toggling the bit at position %d: %d\n", position, number);


    int number; //task 4
    
    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check the least significant bit using bitwise AND
    if (number & 1) {
        // If the least significant bit is 1, the number is odd
        printf("0\n");  // Odd
    } else {
        // If the least significant bit is 0, the number is even
        printf("1\n");  // Even
    }
    //task 5
    unsigned int num1, num2, sum;
    
    // Get two numbers from the user in octal format
    printf("Enter the first octal number: ");
    scanf("%o", &num1);  // Read number as octal (prefix 0)
    
    printf("Enter the second octal number: ");
    scanf("%o", &num2);  // Read number as octal (prefix 0)
    
    // Calculate the sum of the two numbers
    sum = num1 + num2;
    
    // Print the sum in hexadecimal format (uppercase)
    printf("Sum in hexadecimal: %X\n", sum);
    
    // Extract and print the bits at positions 3, 5, 7, and 11
    // Note: We are counting positions from right (0-based index)
    
    // To extract a bit, we shift the desired position to the least significant bit and then mask it with 1
    printf("Bit at position 3: %d\n", (sum >> 3) & 1);
    printf("Bit at position 5: %d\n", (sum >> 5) & 1);
    printf("Bit at position 7: %d\n", (sum >> 7) & 1);
    printf("Bit at position 11: %d\n", (sum >> 11) & 1);


  printf("Bye!\n");
  
  return 0;
}
