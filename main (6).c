/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat_7869, vet [] = {1,2,3,7,8,6,9};
    
    for(mat_7869 = 0; mat_7869 < 7; mat_7869 ++)
    
    printf("\nO endereço de cada posição do vetor é: %p", vet + mat_7869);

    return 0;
}
