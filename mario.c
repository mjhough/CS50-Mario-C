#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do  // Get user input as an integer and store in the variable 'height'.
    {
        height = get_int("Enter Height: ");
    }
    while (height < 0 || height > 23);  // If the user did not enter a number between 0-23, ask for the height again.
    for (int i = 0; i < height; i++)    // Loop the number of times entered in height.
    {
        for (int s = height - i - 1; s > 0; s--)    // Loop height - i - 1 times and print spaces before # symbol.
        {
            printf(" ");
        }
        for (int h = 0; h < i + 1; h++)     // Print the # symbol i + 1 number of times. This prints the left side of the pyramid.
        {
            printf("#");
        }
        printf("  ");   // Prints the space between the sides of the pyramid.
        for (int h = 0; h < i + 1; h++)     // Print the # symbol i + 1 number of times. This prints the right side of the pyramid.
        {
            printf("#");
        }
        printf("\n");   // Print a new line to start the next row of the pyramid.
    }
}