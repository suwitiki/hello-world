/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime( int N ) {
    if ( N < 2 ) return false ;
    for ( int i = 2 ; i * i <= N ; i++ ) {
        if ( N % i == 0 ) return false ;
    }//end for
    return true ; 
}//end bool

int main()
{
    int i , n ;

    printf ( " ENTER N: " ) ;
    scanf ( "%d" , &n ) ;
     
    int s[n] ;
    for ( i = 0 ; i < n ; i++ ) {
        printf ( " Enter value[%d]: ", i ) ;
        scanf ( "%d" , &s[i] ) ;
    }//end for  
    
    printf ( " Index : " ) ;
    for ( i = 0; i < n; i++ ) {
        printf ( "%d  " , i ) ;
    }//end for 

    printf ( "\n" ) ;
    printf ( " Array :  " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        if ( isPrime( s[i] ) ) {
            printf ( "%d  " , s[i] ) ; 
        } else {
            printf ( "#  " ) ;
        }//end else
    }//end for
    
    printf ( "\n" ) ;
    return 0 ;
}//end funtion 