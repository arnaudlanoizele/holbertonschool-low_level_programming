#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */

void jack_bauer(void)
{
	int heures = 0;
	int minutes = 0;

	while (heures < 24)
	{

		while (minutes <= 59)
		{
			_putchar(heures / 10 + '0');
			_putchar(heures % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			minutes++;
			_putchar('\n');
		}
		heures++;
		minutes = 0;
	}
}
