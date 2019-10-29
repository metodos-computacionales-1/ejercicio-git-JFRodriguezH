#include<iostream>
#include<cmath>

int main()
{
    int a;
    int b;
    int c;
    std::cout<<"Escriba los tres lados del triangulo: \n";
    std::cin>>a>>b>>c;
    if(a*a+b*b==c*c)
    {
        std::cout<<"El triangulo es rectangulo."<<std::endl;
    }
    return 0;
}