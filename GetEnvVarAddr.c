#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
        char *ptr;

        ptr = getenv(argv[1]); /* This gets the env variable location */
        ptr += (strlen(argv[0]) - strlen(argv[2]))*2; /* Ajust length for the program name */
        printf("%s address: %p\n", argv[1], ptr);
}
