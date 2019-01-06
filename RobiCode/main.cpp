#include<iostream>
#include<vector>
#include"equation.h"
#include"parameters.h"
#include<fstream>
#include"solver.h"

// Creating the objects associated to the classes that I have defined and call the solve function and save the data in the file 

int main(){
	parameters param;
	equation eqn;
	solver solution(eqn,param);
	solution.solve();
	solution.savesolution("Temp_distribution.dat");
} 
