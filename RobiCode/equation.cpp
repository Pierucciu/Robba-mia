#include"equation.h"

equation::equation(){ 
	vector<float> init(100);
	for(int i=0; i<100;i++ ){
		if(i>=40 && i<=60){
			init[i]=100;
			}
		else{
		   init[i]=0;
			}
		}
	u_t0=init;

	for(int i=0; i<100;i++ ){
			if(i<=49){
				alpha.push_back(0.1);
				}
			else{
			   alpha.push_back(0.01);
			}
		}
	for(int i=0; i<100; i++){
			f.push_back(0);	
		}
}
vector<float> equation::get_alpha(){return alpha;}
vector<float> equation::get_f(){return f;}
vector<float> equation::get_u_t0(){return u_t0;}
