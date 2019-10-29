#include<iostream>

int main()
{
    int N;
    std::cout<<"Escriba N:\n";
    std::cin>>N;
    int a=0;
    for(int i=0; i<=N; i++)
    {
        a+=i;
        std::cout<<a<<std::endl;
    }
    
    return 0;
}