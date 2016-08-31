// triangel.c
// Given the size prints a triangle

#include <stdio.h>
#include <stdlib.h>

void trig ( int size ) {

    int i, j;

    // printf( "Enter the size of the triangle: ");
    // scanf( "%d", &size);
    // printf( "Size you entered is: %d\n", size );

    for ( i = 0; i < size; i++ ) {
        for ( j = 0; j <= i; j++ ) {
            printf ( "* " );
        }
        printf ("\n");
    }
}
