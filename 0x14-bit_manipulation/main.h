#ifndef main_h
#define main_h

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/**
 * powering - returns power.
 * @a: base
 * @b: power
 * Return: result of the power
 */

static inline unsigned int powering(unsigned int a, unsigned int b)
{
	unsigned int answer = 1;
	
	for (; b > 0; b--)
	{
		answer *= a;
	}
	return (answer);
}

#endif
