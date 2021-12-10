#include <stdio.h>

void main()
{
    int rn=19022;
    switch(rn%4)
    {
        case 1: printf("1 ");
        case 2: printf("2 ");
        case 3: printf("3 ");
        case 0: printf("4 ");
    }
}