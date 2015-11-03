#include <iostream>

using namespace std;

int main ()
{
  
  int N = 100; //This is the number of iterations
  
  for (double r = 0; r <= 4; r+=0.01) 
  {
    double x0 = 0.5;
    double x1;
    for (int i = 1; i <= N-81; i++)
    {	
      x1 = r*x0*(1-x0);
      x0 = x1;
    }
    for (int i = 20; i <= N; i++)
    {	
      x1 = r*x0*(1-x0);
      x0 = x1;
      cout << r << " " << x1 << endl;
  }  
  }
    return 0;

}