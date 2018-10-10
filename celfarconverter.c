#include <stdio.h>

int main(void) {
	int goodanswer = 0;
	int quit = 0;
	int response;
	double fahrenheit;
	double celsius;

	while ( quit != 1 )
	{
		while ( goodanswer == 0 )
		{
			printf("Press 1 to convert from Farenheit to Celsius\n");
			printf("Press 2 to convert from Celsius to Farenheit\n");
			scanf( "%d", &response );
			if ( response == 1 || response == 2 )
			{
				goodanswer = 1;
			}
		}
		if ( response == 1 )
		{
			printf("Please enter the temperature in Fahrenheit degrees:\n");
			scanf("%lf", &fahrenheit);
			celsius = (fahrenheit - 32) * 5 / 9;
			printf("%f Fahrenheit is equivalent to %f Celsius.\n", fahrenheit, celsius);
		}
		if ( response == 2 )
		{
			printf("Please enter the temperate in Celsius degrees:\n");
			scanf("%lf", &celsius);
			fahrenheit = ((celsius * 9) / 5) + 32;
			printf("%f Celsius is equivalent to %f Fahrenheit.\n", celsius, fahrenheit);
		}
		fahrenheit = 0;
		celsius = 0;
		printf("Press 1 to quit or any other number to convert another value\n");
		goodanswer = 0;
		scanf("%d", &quit);
	}

	return 0;

}
