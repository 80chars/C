#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// give change. E.g. if price is 25 and 50 is give,
// give change one twenty and one five

static const int BUFFER_SIZE = 1048;

char * give_change (double price, double amount) {
    double back = amount - price;
    char *res = (char *) malloc (BUFFER_SIZE);
    if (back == 0)
    {
        sprintf(res, "zero");
        return res;
    }
    if (back < 0)
    {
        sprintf(res, "amount must be greater than price\n");
        return res;
    }
    char* ms[] = {"hundreds", "twenties", "tens", "fives", "ones"};
    char* m[] = {"hundred", "twenty", "ten", "five", "one"};
    double div[] = {100, 20, 10, 5, 1};
    char *pos = res;
    int ctr = 0;
    for (; ctr < sizeof (m); ctr++)
    {
        if (back >= div[ctr])
        {
            int den = back / div[ctr];
            if (den == 1)
            {
                sprintf(pos, "1 %s\n", m[ctr]);
            }
            if (den > 1)
            {
                sprintf(pos, "%d %s\n", den, ms[ctr]);
            }
            back = back - den * div[ctr];
            pos += strlen(pos);
        }
    }
    return res;
}
