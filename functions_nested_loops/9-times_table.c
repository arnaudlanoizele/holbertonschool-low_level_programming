#include "main.h"

/**
 * times_table - Prints the multiplication tables from0 to 9.
 */

void times_table(void)
{
	int lignes = 0;
	int colonnes = 0;
	int resultat = 0;

	while (lignes <= 9)
	{
		while (colonnes <= 9)
		{
			resultat = lignes * colonnes;
			if (resultat >= 10)
			{
				_putchar(resultat / 10 + '0');
			}
			else
			{
				if (colonnes != 0)
				{
					_putchar(' ');
				}
			}
			_putchar(resultat % 10 + '0');
			if (colonnes < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			colonnes++;
		}
		_putchar('\n');
		lignes++;
		colonnes = 0;
	}
}
