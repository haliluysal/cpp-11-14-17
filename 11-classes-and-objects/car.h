#pragma once
#include <iostream>


class Car
{
public:
	Car();
	Car(float amount);
	~Car();
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard();

private:
	float fuel;
	float speed;
	int passengers;
	
};