#include <iostream>
using namespace std;

int number_of_paths(int n)
{
    if (n < 0) // no steps to climb
        return 0;

    if (n == 0) // Already reached the top
        return 1;

    return number_of_paths(n - 1) + number_of_paths(n - 2) + number_of_paths(n - 3);
}

int main()
{

    cout << "number of paths =  " << number_of_paths(4);
    return 0;
}
