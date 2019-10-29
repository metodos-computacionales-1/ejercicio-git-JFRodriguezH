#include<iostream>
#include<cmath>

int main()
{
    int a;
    int b;
    int c;
    std::cout<<"Escriba los tres lados del triangulo: \n";
    std::cin>>a>>b>>c;
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    {
        std::cout<<"El triangulo es rectangulo."<<std::endl;
    }
    else
    {
        std::cout<<"El triangulo no es rectangulo."<<std::endl;
    }
    return 0;
}