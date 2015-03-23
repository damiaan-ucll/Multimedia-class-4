//
//  main.cpp
//  Labo 4
//
//  Created by Damiaan Dufaux on 3/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "ComplexNumber.h"

using namespace std;

void ex1() {
	bool a = true;
	bool b = false;
	bool & c = a;
	cout << a << " " << b << " " << c << endl; c = b;
	cout << a << " " << b << " " << c << endl; bool * d = &c;
	a = !c;
	cout << a << " " << c << " " << *d << endl;
}

void swap(float &x, float &y) {
	float temp = x;
	x = y;
	y = temp;
}

void ex2() {
	float a = 1;
	float b = 2;
	cout << "Before swap: " << a << " and " << b << endl; swap(a,b);
	cout << "After swap: " << a << " and " << b << endl;
}

void ex4() {
	ComplexNumber z1(1,2);
	ComplexNumber z2(2,3);
	cout << z1 << endl;
	cout << z1.getX() << " " << z1.getY() << endl;
	z1.setX(4);
	z1.setY(-1);
	cout << z1 << endl;
	cout << z1*z2 << endl;
	cout << 3*z2 << endl;
	cout << z2*(-2) << endl;
	cout << -z2 << endl;
	ComplexNumber z;
	cout << z << endl;
	cout << "Give a complex number (2 doubles separated by a space): ";
	cin >> z;
	cout << z << endl;
	cout << z1[0] << endl; cout << z1[1] << endl;
	z1[0] = 5;
	cout << z1 << endl;
	z1[0] = 0;
	cout << z1 << endl;
}

int main(int argc, const char * argv[]) {
	// insert code here...
	
//	ex1();
	
//	ex2();
	
	ex4();
	
	
    return 0;
}