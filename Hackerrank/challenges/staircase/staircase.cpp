#include <iostream>

int main(int argc, char const *argv[])
{
    int n,i,j,k;
    std::cin >> n;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            std::cout<<" ";
        }
        for(k=n;k>=i;k--)
        {
            std::cout<<"#";
        }
        std::cout<<std::endl;
    }   
    return 0;
}
