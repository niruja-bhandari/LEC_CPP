#include <stdio.h>
void main()
{
    int *pc,c;
    c=22;
    printf("Address of c: %p",&c);
    printf("\nValue of c: %d ",c);
    
    pc=&c;
    printf("\n\nAddress of pointer pc: %p",pc);
    printf("\nContent of pointer pc: %d ", *pc);

    c=11;
    printf("\n\nAddress of pointer pc: %p",pc);
    printf("\nContent of pointer pc: %d ", *pc);

    *pc=2;
    printf("\n\nAddress of c: %p",&c);
    printf("\nValue of c: %d ",c);
}