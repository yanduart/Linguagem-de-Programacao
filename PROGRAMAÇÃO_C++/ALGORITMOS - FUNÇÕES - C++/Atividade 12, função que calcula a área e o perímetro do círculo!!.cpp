#include <iostream>
#include <cmath>
using namespace std;

  float FcAreaCirculo(float r = 0){
  	
	  const float PI = 3.14159;
	  float area = PI * pow(r, 2);
	  
	  return area;
	  
  }
  
  float FcPerimetroCirculo(float r = 0){
	  
	  const float PI = 3.14159;
	  float perimetro = PI * 2 * r;
	  
	  return perimetro;
  }
  
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
    
   float area = 0, perimetro = 0;
   float r = 0;
   float diametro = 0;
   const float PI = 3.14159;
   
   cout<<"-->calculando área e perimetro do circulo<--"<<endl;
   cout<<"\ninforme o valor do diametro do circulo: "<<endl;
   cin>>diametro;
   r = diametro / 2;
   FcAreaCirculo(r);
   FcPerimetroCirculo(r);
  
   cout<<"a área do circulo é: "<<FcAreaCirculo(r)<<endl;
   cout<<"o perímetro do círculo é: "<<FcPerimetroCirculo(r)<<endl;
 

	return 0;
}