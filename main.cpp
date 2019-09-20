#include <iostream>

using namespace std;
int power( int base, int exponente){
    int i=1;
    for( i=1; exponente >0 ;exponente--){
        i*=base;
    }
    return i ;
}
int main()
{
    int b,d=0,e=0,c=0;
	cout<<"Ingrese numero Binario: "<<endl ;
	cin>>b;

	while(b>=10){
		c=0;
		while(b>=10){
        b=b-10;
        c++;
		}
		d=d+b*power(2,e);
		e++;
		b=c;
	}
	d=d+c*power(2,e);

	cout<<endl<<"El numero entero es  "<<d<<endl;
	return 0 ;
}
