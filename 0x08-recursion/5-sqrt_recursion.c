#include "main.h"

int _sqrt_recursion(int n)
{
	    return (sum_them_all(n ,1));
}
int sum_them_all(int n, int s)
{
	    if (s * s == n)
		        {
				    return s;
				        }
	        if (s * s < n)
			    {
				        return (sum_them_all(n, s + 1));

					    }
		    else 
			        return -1;
		        
}
