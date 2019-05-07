#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  
  double c = 0.5;
  double t_max = 6.0;
  double delta_t = 0.01;
  double delta_x = 0.01;
  double L = 1.0;
  int i, j;
  double rho = 0.01;
  tension = 40.0;
  int t = 0;
  int n_side = 101;
  double cp = c;
  double ra = (c*c)/(cp*cp);
  double T_old[n_side];
  double T_new[n_side];
  int itera = 0;

  ofstream outfile;
    
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  
  double c = 0.5;
  double t_max = 6.0;
  double delta_t = 0.01;
  double delta_x = 0.01;
  double L = 1.0;
  int i, j;
  double rho = 0.01;
  tension = 40.0;
  int t = 0;
  int n_side = 101;
  double cp = c;
  double ra = (c*c)/(cp*cp);
  double T_old[n_side];
  double T_new[n_side];
  int itera = 0;

  ofstream outfile;
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  
  double c = 0.5;
  double t_max = 6.0;
  double delta_t = 0.01;
  double delta_x = 0.01;
  double L = 1.0;
  int i, j;
  double rho = 0.01;
  int t = 0;
  int n_side = 101;
  double cp = c;
  double ra = (c*c)/(cp*cp);
  double T_old[n_side][2];
  double T_new[n_side][2];
  int itera = 0;
  double eta;

  ofstream outfile;
    
  for(i=0;i<n_side;i++){
        T_old[i][0] = sin(M_PI*i/100);
  }
  T_new[0][0] = 0.0;
  T_new[n_side-1][0] = 0.0;

  eta = delta_t / (c * rho * delta_x * delta_x);
  cout << eta << endl;

  outfile.open("onda.dat");
 
  while(t < t_max){
    
    for(i=1;i<n_side-1;i++){
      T_new[i][0] = T_old[i][0] + eta * (T_old[i+1][0]+T_old[i-1][0]-2.0*T_old[i][0]);
      T_new[i][1] = T_old[i][1] + eta * (T_old[i+1][1]+T_old[i-1][1]-2.0*T_old[i][1]);
    }
    for(i=0;i<n_side;i++){
      outfile << T_new[i][0] << " "<< T_new[i][1];
    }
    outfile << "\n";

    for(i=1;i<n_side-1;i++){
      T_old[i][0] = T_new[i][0];
      T_old[i][1] = T_new[i][1];
        
    }
    t = t + delta_t;
  }
  outfile.close();
  return 0;
}
