#include"solver.h"

solver::solver(equation eq1, parameters par1){
  		eq=eq1;
		par=par1;
}

float solver::dt(){ 
	vector<float> al=eq.get_alpha();
	float max=al[0];
	for(int i=0;i<100;i++){
		if(al[i]>max){
		  max=al[i];
		}
	}
return	0.5*(par.get_dx()*par.get_dx()/max); 
	}

float solver::cond(vector<float> u_x, vector<float> u_x_prev){
	float sum=0;
	for(int i=0; i<100;i++){
		sum=sum+((u_x[i]-u_x_prev[i])*(u_x[i]-u_x_prev[i]));
	}
	return sum;
}

void solver::solve(){
	vector<float> u_x;
	vector<float> u_x_prev=eq.get_u_t0();
	vector<float> al=eq.get_alpha();
	float delta_t=dt(); 
	vector<float> ff=eq.get_f();
	while(true){
	u_x.push_back(u_x_prev[0]);	
		for(int i=1; i<99;i++){
			u_x.push_back(u_x_prev[i]+delta_t*ff[i]+delta_t*al[i]*(u_x_prev[i+1]-2*u_x_prev[i]+u_x_prev[i-1])/(par.get_dx()*par.get_dx()));
		}
	u_x.push_back(u_x_prev[99]);
	if(cond(u_x,u_x_prev)<par.get_eps()){break;}
	solution.push_back(u_x);
	u_x_prev=u_x;
	u_x=vector<float>();	
	}
}

void solver::savesolution(string file_name){
	ofstream data;
	data.open(file_name);
	if(data.good()){
		for(int i=0; i<solution.size();i++){
			for(int j=0; j<solution[0].size();j++){
				data << solution[i][j] << " ";
			}
			data << endl;
		}	
		data.close();
	}
	else{ 
	    cout << "failed" ; 
	}
}








































