//roots of a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;
float determinant(float a, float b, float c) {
	float determinant = (b*b) - (4*a*c);
	float determinant_s = sqrt(determinant);
	return determinant_s;
}
int main() {
	float a, b, c, root1, root2;
	cout<<"Enter the coefficient of x squared: ";
	cin>>a;
	cout<<"Enter the coefficient of x: ";
	cin>>b;
	cout<<"Enter the constant: ";
	cin>>c;
	
	if ( a != 0) {
		cout<<"This is a Quadratic Equation";}
	else if (a == 0) {
		cout<<"This is not a Quadratic Equation";}
			
	float d = determinant(a, b, c);
	
	root1 = (-b + d)/(2*a);
	root2 = (-b - d)/(2*a);
	
	if (root1 > 0 && root2 > 0) {
		cout<<"The roots X1 = " <<root1 <<" and X2 = "<< root2<< " are REAL";}
	if (root1 < 0 && root2 < 0) {
		cout<<"The roots X1 = " <<root1 <<" and X2 = "<< root2<< " are IMAGINARY";}
	if (root1 == 0 && root2 == 0) {
		cout<<"The roots X1 = " <<root1 <<" and X2 = "<< root2<< " are EQUAL";}

	return 0;
	
}