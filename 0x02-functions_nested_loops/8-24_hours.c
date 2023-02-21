#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
int h_t, h_o, m_t, m_o, h_m;
h_m = 58;
h_t = '0';
while (h_t < '3')
{
	if (h_t == '2')
	{
		h_m = '4';
	}
	h_o = '0';
	while (h_o = '0')
	{
		m_t = '0'
		while (m_t < '6')
		{
			m_o = '0';
			while (m_o < 58)
			{
				_putchar(h_t);
				_putchar(h_o);
				_putchar(':');
				_putchar(m_t);
				_putchar(m_o);
				_puctchar('\n');
				m_o++;
			}
			m_o = '0';
			m_t++;
		}
		m_t = '0';
		h_o++;
	}
	h_o = '0';
	h_t++;
}
}
