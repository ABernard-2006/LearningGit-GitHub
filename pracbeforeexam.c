#include <stdio.h>

int factorial(int n);


int main()
{
    float a;
    int x=10, y;

    y = x++;

    a = 3.67894;

    printf("%d\n", factorial(3));

    return 0;
}


int factorial ( int n )
{
   if ( n <= 1 )
   {
      return 1;
   }
   else
   {
      return n * factorial(n-1);
   }
}

int multiply(int m, int n) {
      if (n == 1)
            return m;     /* simple case */
      else
            return m + multiply(m, n  - 1);  /* recursive step */
}


double pow(double x, int n) {
       if (n == 0)
            return 1;     /* simple case */
      else
            return x * pow(x, n  - 1);  /* recursive step */
}

long fib ( long n )
{
   if ( n <= 1 )
      return n ;
   else
      return fib( n - 2 ) + fib( n - 1 );
}