/*
Finding the approximate square root of any given number using Sir Issac Newton's algorithm
Find the square root of a number x.
We will call the square root y such that y^2 = x.
Start with an initial square root of the number, we will call this z.
Keep refining z by averaging z with x/z.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double x;
	double tolerance;
	double z = 1;
	
	cout<< "Enter number you want to find the square root of: ";
	cin>> x;
	cout<<"Now enter your tolerance level: ";
	cin>> tolerance;
	
	while(abs(x-(z*z)) > tolerance){
		z = ((z + (x/z)) / 2);
		cout<< z << '\n';
	}

}
