#include <stdio.h>

double fahrenheitToCelsius(double fahrenheit){
	return (fahrenheit - 32)/(1.8);
}

double celsiusToFahrenheit(double celsuis){
	return (celsuis + 32)*(1.8);
}

int main(int argc, char** argv){
	int i = 0;
	for (i = -40; i <= 220; i = i + 10){
		printf("Fahrenheit: %d -> Celsius: %f\n", i, fahrenheitToCelsius((double)i));
	}
}