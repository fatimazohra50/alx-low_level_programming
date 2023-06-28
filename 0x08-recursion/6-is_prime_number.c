#include "main.h"
#include <stdio.h>
int is_prime_number(int n)
{
	    return (su_them_all(n ,1));
}
int su_them_all(int n, int s)
{
	    if (n < 0)
		        {
				       n = n * -1;
				           }
	        {
			    if (s * s == n)
				        {
						    return 0;
						        }
			        if (s * s < n)
					    {
						         (su_them_all(n, s + 1));

							     }
				    else 
					        return 1;
				        }
}
