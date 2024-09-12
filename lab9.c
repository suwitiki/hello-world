#include <stdio.h>
#include <stdbool.h>

bool isPrime( int N ) {
    if( N < 2 ) return false ;
    for( int i = 2 ; i * i <= N ; i++ ) {
        if ( N % i == 0 ) return false ;
    }//end for
    return true ; 
}//end bool

int main()
{
    int i , n ;

    printf( " ENTER N: " ) ;
    scanf( "%d" , &n ) ;
     
    int s[n] ;
    for( i = 0 ; i < n ; i++ ) {
        printf( " Enter value[%d]: ", i ) ;
        scanf( "%d" , &s[i] ) ;
    }//end for  
    
    printf( " Index : " ) ;
    for( i = 0; i < n; i++ ) {
        printf( "%d  " , i ) ;
    }//end for 
    
    printf( " \n " ) ;
    printf( " Array:  " ) ;
    for( i = 0 ; i < n ; i++ ) {
        if( isPrime( s[i] ) ) {
            printf( "%d  " , s[i] ) ; 
        } else {
            printf( "#  " ) ;
        }//end else
    }//end for
    
    printf( "\n" ) ;
    return 0 ;
}//end funtion 