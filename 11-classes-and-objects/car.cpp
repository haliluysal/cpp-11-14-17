#include "car.h"

Car::Car()
{

}

Car::Car(float amount) {
	fuel = amount;
}

Car::~Car()
{
}

void Car::FillFuel(float amount) {
	fuel = amount;
}

void Car::Accelerate() {
	++speed;
	fuel -= .5;
}

void Car::Brake() {
	speed = 0;
}

void Car::AddPassengers(int count) {
	passengers += count;
}

void Car::Dashboard() {
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Passengers" << passengers << std::endl;
}