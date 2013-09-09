#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  timespec t1;
  
  clock_gettime(CLOCK_MONOTONIC, &t1);
  
  cout << "Seconds: " << t1.tv_sec << endl;
  cout << "Nanoseconds: " << t1.tv_nsec << endl;
  
  return 0;
}