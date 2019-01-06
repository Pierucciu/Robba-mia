#ifndef EQUATION_H
#define EQUATION_H
#include<iostream>
#include<vector>
using namespace std;

//stores the values of alpha(x), f(x) and u(x,t=0).

class equation{
vector<float> alpha;
vector<float> f;
vector<float> u_t0;
public:
equation();
vector<float> get_alpha();
vector<float> get_f();
vector<float> get_u_t0();
}; 

#endif


