#include <stdio.h>

/* print Fahrenheit-Celsisus table
 *  for fahr = 0. 20. ..., 300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;        /* lower limit of temperature scale */
	upper = 300;      /* upper limit */
	step = 20;        /* step size */
	
	celsius = lower;
	while (celsius <= upper) {
//		celsius = (5.0/9.0) * (fahr-32);
        fahr = celsius * 9.0/5.0 + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
