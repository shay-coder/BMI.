// using a program to calculate BMI of a person

#include <iostream>
#include <cmath>
using namespace std;

int main ()

 {
	float Height2;

	float weight ;
	
	int  Height ;
	
	float BMI;
	
	cout << "ENTER YOUR WEIGHT IN KILOGRAMS:\n";

	cin >> weight;

	cout << "\nENTER YOUR HEIGHT IN METERS \n";
	
	cin >> Height;
	
	Height2 = pow (2, Height);	

	BMI = weight / Height2 ;   // formuala to calculate BMI of a person
	
	cout << "YOUR BMI IS: " << BMI; 
	
	return 0;
	
}

