#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Now enter your last name, please: ");
=======
    printf("No eer your last name: ");
>>>>>>> 7800d5af3bbfb3e8453095f90cffb965f10d45c9
    gets(last); /* buffer overflow? what's that? */

    printf("Helo %s %s!\n", first, last);
    return 0;
}
<<<<<<< HEAD

=======
>>>>>>> 7800d5af3bbfb3e8453095f90cffb965f10d45c9
