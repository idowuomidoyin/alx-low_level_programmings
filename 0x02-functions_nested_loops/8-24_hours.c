#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
int hour, minute;
{
	for (hour = 0; hour <= 23; hour++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n')
	}
}
