#include "main.h"
/**
 * numlength - returns the length of string 
 * @num: operand number
 * Return: number of digits 
*/
int numlength(int num)
{
	int length =0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
/**
 * main -Entry point
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by anew line 
 * Return: Always 0 (Success)
*/
int main(void)
	int count, i;
         unsigned long fl = 1, f2 = 2, sum, mx =100000000, flo =0, f2o =0, sumo =0;

	 for (count = 1; count <= 98; count++)
	 {
		 if (flo >0)
			 printf("%zu" , flo);
		 while (flo > 0 && i > 0)
		 {
			 printf ("%d", 0);
			 i--;
		 }
		 printf("%zu", fl);
		 sum = (fl + f2) % mx;
		 sumo = flo +f2o + (fl + f2) / mx;
		 f1 =f2;
		 flo = f2o;
		 f2 = sum;
		 f2o = sumo;
		 if (count != 98)
			 printf(", ");
		 else
			 printf("\n");
	 }
	 return (0);
}
