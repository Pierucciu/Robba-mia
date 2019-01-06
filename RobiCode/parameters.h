#ifndef PARAMETERS_H
#define PARAMETERS_H
#include<iostream>
using namespace std;

// parameters responsible for reading and storing the values of dx, M and eps. 

class parameters{
	float dx, eps; int M; 
	public:
	parameters();
	parameters(float, int, float);
	float get_dx();
	float get_eps();
	int get_M();
};

#endif
