// main.c

#include <stdio.h>
#include <stdlib.h>
#include "hello_world.h"
#include "add.h"
#include "triangle.h"
#include <string.h>

int main ( int argc, char ** argv ) {

    int size = 0;
    int i = 0, n = 0, tot = 0;

    hello();

    printf( "%d\n", add( atoi( argv[1] ), atoi( argv[2] ) ) );

    printf ( "Enter the size of the triangle: ");
    scanf ( "%d", &size );
    trig( size );

    for ( i = 0; i < size; i++ ) {
        scanf ( "%d", &n );
        tot += n;
    }

    printf ( "The total is: %d\n", tot);

    FILE * fp = fopen("test_file.txt", "w+");
    fprintf( fp, "Hello World\n%d", tot );
    fclose(fp);

    char f_name[20] = "manujinda_\0";
    sprintf( f_name, "manujinda_%d.txt", size );
    printf( "File Name: %s\n", f_name );

    fp = fopen ( f_name, "w+" );
    fprintf ( fp, "%s", f_name );
    fclose(fp);

    return 0;
}
