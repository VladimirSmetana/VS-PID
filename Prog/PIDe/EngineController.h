#pragma once
#include <cmath>
class EngineController
{
private:
	float target;
	float input;
	float dinput;
	float umax;
public:
	EngineController(float max)
	{
		umax = max;
	}


	float signal(float target, float current, float dcurrent)
	{
		float delta =  target-current;
		float foo = delta - dcurrent * abs(dcurrent) / (2 * umax);
		if (foo > 0)
			foo = 1;
		else
			foo = -1;

		return foo * umax;
			
	}

};