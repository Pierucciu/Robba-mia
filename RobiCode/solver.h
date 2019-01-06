#ifndef SOLVER_H
#define SOLVER_H
#include<iostream>
#include<vector>
#include"equation.h"
#include"parameters.h"
#include<fstream>

using namespace std;

//Responsible for solving the equation and saving the solution to a file.

class solver{
	equation eq;
	parameters par;
	vector<vector<float>> solution;
        float dt();
	float cond(vector<float>, vector<float>);
	public: 
	solver(equation x, parameters y); 
 	void solve();
	void savesolution(string file_name);
}; 

#endif
