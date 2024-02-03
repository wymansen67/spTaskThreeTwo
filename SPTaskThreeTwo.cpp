#include <iostream>
#include <math.h>
using namespace std;
#define e 2.71828182845904523536
#define x 2.87
#define y 0.84
#define z ( 2 * x * y ) / ( x + cos( y ) )
#define b sqrt( x * sin( 2 ) * y ) / ( z + pow( e , x ) * y )

int main()
{
	cout << "Const e = " << e << endl << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl << "b = " << b;
}