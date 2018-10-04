#include <bits/stdc++.h>
int main( )
{
	int arr[5] = { 19, 17, 1, 67, 2 ,100} ;
	int i, j, key, temp ;
	printf ( "Insertion sort.\n\n" ) ;
	printf ( "Array before sorting:\n") ;

	for ( i = 0 ; i <= 5 ; i++ )
		printf ( "%d\t", arr[i] ) ;

	for ( i = 1 ; i <= 5 ; i++ )
	{
	   key=arr[i];
		for ( j = 0 ; j < i ; j++ )
		{
			if ( arr[j] > key )
			{
				temp = arr[j] ;
				arr[j] = arr[i] ;
                arr[i]=temp;
			}
		}
	}

	printf ( "\n" ) ;
	printf ( "Array after sorting:\n") ;
	for ( i = 0 ; i <= 5; i++ )
		printf ( "%d\t", arr[i] ) ;
	return 0 ;
}

