#include<stdio.h>
#include <stdio.h>

long SumLoop( int ) ;
long SumRecur( int ) ;

int main() {
 printf( "SumLoop(n) = %d ", SumLoop( 10 ) ) ;
 printf( "SumRecur(n) = %d", SumRecur( 10 ) ) ;
 return 0 ;
}//end function

long SumLoop( int n ) {
	int i, sum = 0;
	for( i = 1 ; i <= n ; i++ ) 
		sum += i;
	return sum;
}

long SumRecur( int n ){
	if( n > 1)
		return n + SumRecur ( n - 1 );
	return 1;
}

