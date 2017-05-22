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
  long p = makePrime(rand() % RAND_MAX/2 + RAND_MAX);
  long q =  makePrime(rand() % RAND_MAX/2 + RAND_MAX);

  //Prime Number Count between p and q.
  long fi = (p-1)*(q-1);
  cout << p << " " << q << " " << fi << endl;
  do {
    int e = 0;
    int d = 0;
    /* code */
  } while(euclidGCD(e,d) == 1)});
}
