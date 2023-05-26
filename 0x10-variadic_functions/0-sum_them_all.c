/**
 * sum_them_all - Calculates the sum of all its parameters.
 * @ntr: number of parameters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If ntr == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int ntr, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	va_start(arg, ntr);
	for (i = 0; i < ntr; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
