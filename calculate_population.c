#include <stdio.h>

int get_int();

int main(void)
{
    // TODO: Prompt for start size

    int starting_size = get_int("Start size: ");
    while (starting_size < 9)
    {
        starting_size = get_int("Start size: ");
    }

    // TODO: Prompt for end size

    int ending_size = get_int("End size: ");
    while (ending_size < starting_size)
    {
        ending_size = get_int("End size: ");
    }

    // TODO: Calculate number of years until we reach threshold

    int result = 0;

    while (starting_size < ending_size)
    {
        starting_size = starting_size + (starting_size / 3) - (starting_size / 4);
        result++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", result);

    return 0;
}

int get_int() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    return num;
}
