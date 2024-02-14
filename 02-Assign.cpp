#include <iostream>
using namespace std;

inline int EXP(int x, int y, int z, int p, int r) {
  return x + y - z + p % r;
}

int main() {
  int x,y,z,p,r;
  cout<<"Enter operands: ";
  cin>>x>>y>>z>>p>>r;
  float a = EXP(x,y,z,p,r);

  printf("%d + %d - %d + %d %% %d = %f ",x,y,z,p,r,a);
  return 0;
}
