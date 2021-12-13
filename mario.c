#include <stdio.h>
#include <cs50.h>

void space(int n);
void block(int m);

int main(void)
{
    int height;

    // Do while checks if height is non-negative or above 23
    do
    {
        height = get_int("Height of the Pyramid: ");
    }
    while (height > 23 || height < 0);
    

    // For the first line of the pyramid
    // Move the height - 1 in steps to the right
    // Then build blocks, starting with two
    // For the following lines
    // Take one less step to the right and build one more block
    // Repeat this process untill no more steps can be taken
    int s = height - 1;
    for (int b = 2; s >= 0; b += 1, s -= 1)
    {
        space(s);
        block(b);
        printf("\n");
    }

}

void space(int n)
// Prints space n times
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void block(int m)
// Prints blocks m times
{
    for (int j = 0; j < m; j++)
    {
        printf("#");
    }
}