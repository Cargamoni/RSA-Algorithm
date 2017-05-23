#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
long makePrime(long becomePrime)
{
  return becomePrime * becomePrime + becomePrime + 41;
}

long euclidGCD(long a,long b)
{
  if(b == 0)
    return a;
  return euclidGCD(b,a%b);
}

int main()
{
  //Creating p and q random primitive numbers.
  srand(time(NULL));
  long p = makePrime(rand() % RAND_MAX/4 + RAND_MAX/2);
  long q =  makePrime(rand() % RAND_MAX/4 + RAND_MAX/2);

  //Prime Number Count between p and q.
  long fi = (p-1)*(q-1);

  //Generating n Key
  long n = p*q;

  //Generating General Key and Personal Key
  long e = rand() % 1 + fi;
  long d = 0;
  do {
    //Try next time dynamic memory..
      d = rand() % 1 + fi;
      if((euclidGCD(e,fi) == 1) && (e*d % fi == 1) && e != d)
        break;
      cout << p << " " << q << " " << fi << " " << n << " " << e << " " << d << endl;
  } while(true);
  cout << p << " " << q << " " << fi << " " << e << " " << d << endl;
}
