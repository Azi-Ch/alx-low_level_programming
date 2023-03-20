int main(void)
{
	int d = '0';
	int u = '1';

	while (d <= '8')
	{
		while (u <= '9')
		{
			putchar(d);
			putchar(u);
			if (d != '8')
			{
				putchar(',');
				putchar(' ');
			}
			u++;
		}
		u = d + 2;
		d++;
	}
	putchar('\n');
	return (0);
}
