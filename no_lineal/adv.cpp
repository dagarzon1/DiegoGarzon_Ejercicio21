#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double T=0.5;
	double c=1.0;
	double h=0.01;
	double h_t=0.01;
	int N_x=2.0/ h;
	double * in_u = new double[N_x];
	double * u = new double[N_x ];
	double * u_old =new double[N_x];
	double x =0.0;
	for(int i=0;i<N_x;i++)
	{
		x=(h*i);
		in_u[i]=exp(-0.5 * (x-1)*(x-1)/(0.25*0.25));
		u_old[i]=exp(-0.5 * (x-1)*(x-1)/(0.25*0.25));
	}
	for(int j=0;j<T/h_t;j++)
	{
		for(int i=1;i<N_x - 1 ;i++)
		{
			u[i]= in_u[i] - ( in_u[i] * (h_t/h) * ( in_u[i] - in_u[i-1] ) );
		}
		for(int i=1;i<N_x - 1 ;i++)
		{
		in_u[i]=u[i];
		}
	}
	for(int i=0;i<N_x;i++)
	{
		x=(h*i);
		cout<<x<<" "<<u[i]<<" "<<u_old[i]<<endl;
	}
	return 0;
}
