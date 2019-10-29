#include<iostream>
#include<cmath>

int main()
{
    float R;
    std::cout<<"Escriba el radio R:\n";
    std::cin>>R;
    float pi=2.0*asin(1.0);
    std::cout<<"El diametro es: "<<2.0*R<<std::endl;
    std::cout<<"El perimetro es: "<<2.0*pi*R<<std::endl;
    
    return 0;
}