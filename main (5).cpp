/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int sayi = 44;
    unsigned long long result = 1;
    
while (sayi > 1) {
    result *= sayi;
    sayi--;
}

 std::cout << "44 faktoriyeli: " << result << std::endl;

    return 0;
}
