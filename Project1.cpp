#include <iostream>

using namespace std;
/*program that takes as input a given length expressed in feet and
inches and displays length in centimeters after conversion.*/
int main() 
{
	int ft,inch; //variable declaration
	double x,y; //variable declaration
	cout<<"\n\n\t\tEnter the length of feet: "; cin>>ft;  //input from user in ft
	cout<<"\n\n\t\tEnter the length of inch: "; cin>>inch;  //input from user in inch
	x=ft*30.48; //conversion formula of converting ft to cm
	y=inch*2.54; ///conversion formula of converting inch to cm
	cout<<endl<<endl<<"***************************************************";
	cout<<"\n\n\t\tResult = ";
	cout<<x+y; //additionn of both x and after the convertion to cm
	cout<<"cm";
	
	
	return 0;
}
