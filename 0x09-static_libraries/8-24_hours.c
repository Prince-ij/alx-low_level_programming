#include "main.h"
/**
 * jack_bauer - blah blu bli bla bla
 * Return: void
 */
void jack_bauer(void)
{
	int htens, hones, mtens, mones, hmax;

	hmax = 58;
	htens = '0';
	while (htens < '3')
	{
		if (htens == 2)
		{
			hmax = '4';
		}
		hones = '0';
		while (hones < hmax)
		{
			mtens = '0';
			while (mtens < '6')
			{
				mones = '0';
				while (mones < 58)
				{
					_putchar(htens);
					_putchar(hones);
					_putchar(':');
					_putchar(mtens);
					_putchar(mones);
					_putchar('\n');
					mones++;
				}
				mones = '0';
				mtens++;
			}
			mtens = '0';
			hones++;
		}
		hones = '0';
		htens++;
	}
}
