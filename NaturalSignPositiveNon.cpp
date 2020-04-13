// NaturalSignPositiveNon.cpp

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Define_variables
    const int num = 0;
    const int N = 5;

    //Main_cycle
    for (int i = 0; i < N; i++){
        std::cout << i * 2 <<" ";
        std::cout << i * 2 + 1 << " ";
        std::cout << sin(i) << " ";
        std::cout << cos(i) << " ";
        std::cout << tan(i) << " ";
        std::cout << asin(i) << " ";
        std::cout << acos(i) << " ";
        std::cout << atan(i) << "\n";
    }
}
