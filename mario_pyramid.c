#include <stdio.h>

int get_int();

int main(void)
{
    int pyramid_h = get_int("Height: ");
    while (pyramid_h < 1 || pyramid_h > 8)
    {
        pyramid_h = get_int("Height: ");
    }
    int spaces = pyramid_h - 1;

    // printing pyramid
    for (int i = 0; i < pyramid_h; i++)
    {
        int spaces_left = spaces;
        while (spaces_left != 0)
        {
            printf(" ");
            spaces_left--;
        }
        for (int j = 0; j < (i + 1); j++)
        {
            printf("#");
        }
        printf(" ");
        printf(" ");
        for (int j = 0; j < (i + 1); j++)
        {
            printf("#");
        }
        spaces--;
        printf("\n");
    }
}

int get_int() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    return num;
}
