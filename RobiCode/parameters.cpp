#include<iostream>
using namespace std;
#include"parameters.h"

parameters::parameters(){
dx=0.1;
M=20;
eps=0.001;
} 

parameters::parameters(float dx1, int M1, float eps1){
dx=dx1;
M=M1;
eps=eps1;
} 

float parameters::get_dx(){return dx;}
float parameters::get_eps(){return eps;}
int parameters::get_M(){return M;}


