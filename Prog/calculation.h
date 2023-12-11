#pragma once
#include <vector>

using namespace std;

class PID
{
private:
	double Kp, Ki, Kd;
	double Error;
	double h;
	double Goal;
	double Err;
	double prev_Err;
	double Summ_Err;
public:
	PID(double P, double I, double  D, double  hp, double  goal)
	{
		Kp = P; Ki = I, Kd = D;
		h = hp;
		Goal = goal;
		Err = 0;
		prev_Err = 0;


	}
	double signal(double input)
	{
		double dErr;
		double P, I, D;


		Err = input - Goal;
		Summ_Err += Err * h;
		dErr = (Err - prev_Err) / h;
		prev_Err = Err;
		P = Err * Kp;
		I = Summ_Err * Ki;
		D = dErr * Kd;

		return P + I + D;
	}
	~PID()
	{

	}
}