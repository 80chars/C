#include <stdio.h>
#include <stdlib.h>

#include "give_change.h"

void usage(char *my_name)
{
    printf("usage: %s price amount.\n", my_name);
    printf("Arguments must be be numbers.\n");
}

int main(int argc, char* argv[])
{
     if (argc != 3)
     {
         usage(argv[0]);
         return 0;
     }
     char *ptr;
     double price = strtod(argv[1], &ptr);
     if (ptr == argv[1])
     {
         usage(argv[0]);
         return 0;
     }
     double amount = strtod(argv[2], &ptr);
     if (ptr == argv[2])
     {
         usage(argv[0]);
         return 0;
     }
     char* result_ptr = give_change(price, amount);
     printf ("change:\n%s\n", result_ptr);
     return 0;
}
