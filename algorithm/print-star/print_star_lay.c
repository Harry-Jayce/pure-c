
void print_star_lay(const size_t layn)
{
	for (size_t i = 0; i < layn; i++)
	{
		// left space
		for (size_t j = 0; j < layn - i - 1; j++)
		{
			putchar(' ');
		}
		// mid star
		for (size_t j = 0; j < 2 * i + 1; j++)
		{
			putchar('*');
		}
		// right space -- same with left space
		for (size_t j = 0; j < layn - i - 1; j++)
		{
			putchar(' ');
		}
		putchar('\n');
	}
	printf("the bot star num: %zu\n", 2 * layn - 1);
}

// if (j < left_star or j > right_star)
// mid = 5 / 2 == 2  == botn / 2
// left_star = mid - i
// right_star = mid + i
// print  ' '

void print_star_lay2(const size_t layn)
{
	const size_t botn = 2 * layn - 1;
	for (size_t i = 0; i < layn; i++)
	{
		for (size_t j = 0; j < botn; j++)
		{
			if (j < botn / 2 - i || j > botn / 2 + i)
				putchar(' ');
			else
				putchar('*');
		}
		putchar('\n');
	}
	printf("the bot star num: %zu\n", botn);
}