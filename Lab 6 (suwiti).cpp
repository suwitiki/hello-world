
#include <stdio.h>

int main() {
    int i = 0 , j = 0 , ip = 0 ;
    
    printf( " Please enter a number: " ) ;
    scanf( "%d", &ip ) ;
    
    if( ip % 2 == 0 ) {
        for( i = 0 ; i < ip ; i++ ) {
            for( j = 0 ; j < ip ; j++ ) {
                if( i == j ) {
                    printf( "1" ) ;
                } else {
                    printf( "0" ) ;
                }//end else
            }//end for   
        printf( "\n" ) ;
        }//end for
    } else {
        for( i = 0 ; i < ip ; i++ ) {
            for( j = 0 ; j < ip ; j++ ) {
                if( j == ip - i - 1 ) {
                    printf( "1" ) ;
                } else {
                    printf( "0" ) ;
                }//end else
            }//end for   
        printf( "\n" ) ;
        }//end for
                
    }//end else
    return 0 ;
}//end funtion