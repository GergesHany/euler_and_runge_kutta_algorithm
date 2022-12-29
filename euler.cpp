#include <bits/stdc++.h>
using namespace std; 

void Gerges_Hany(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}




long double equation(double x, double y){
   return (x * x) + (y * y); // The equation
}

long double euler_method(double x0, double y0, double h, double x){
   double y = y0;
   while (x0 < x){
      y = y + h * equation(x0, y); 
      x0 = x0 + h; 
   }
   return y;
}


int main()
{
  
   Gerges_Hany();

   double x0 = 0, y0 = 1, h = 0.2, x = 0.4; // x is the value of x at which we want to find the value of y
   cout << euler_method(x0, y0, h, x) << "\n"; 
  
  return 0;
}
