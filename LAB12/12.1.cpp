#include <stdio.h>
#include <stdlib.h>
int *Dijkstra( int *L, int n ) ;

int main() {
 int n = 5, i = 0, j = 0, *d, *g ;
 g = new int[ n * n ] ;
 for( i = 0 ; i < n ; i++ )
  for( j = 0 ; j < n ; j++ )
   g[ i * n + j ] = -1 ;

 g[ 0 * n + 1 ] = 100 ; g[ 0 * n + 2 ] = 80 ;
 g[ 0 * n + 3 ] = 30 ; g[ 0 * n + 4 ] = 10 ;
 g[ 1 * n + 2 ] = 20 ; g[ 3 * n + 1 ] = 20 ;
 g[ 3 * n + 2 ] = 20 ; g[ 4 * n + 3 ] = 10 ;

 d = Dijkstra( g, n ) ;
 for( i = 0 ; i < n - 1 ; i++ )
  printf( "%d ", d[ i ] ) ;
 return 0 ;
}//end function

int *Dijkstra( int *L, int n ) {
    int *d = new int[ n ];
    bool *visited = new bool[ n ];
    for( int i = 0 ; i < n ; i++ ) {
        d[ i ] = INT_MAX;
        visited[ i ] = false;
    }
    d[ 0 ] = 0;
    for( int count = 0 ; count < n - 1 ; count++ ) {
        int u = -1;
        for( int i = 0 ; i < n ; i++ ) {
            if( !visited[ i ] && ( u == -1 || d[ i ] < d[ u ] ) ){
			    u = i;
			}
        }
        visited[ u ] = true;
        for( int v = 0 ; v < n ; v++ ) {
            if(L[ u * n + v ] != -1 && d[ u ] != INT_MAX && d[ u ] + L[ u * n + v ] < d[ v ] ){
            	d[ v ] = d[ u ] + L[ u * n + v ];
			}
                
        }
    }
    delete [] visited;
    return d;
}
