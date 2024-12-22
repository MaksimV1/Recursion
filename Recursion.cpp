#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;


float solve(int n, float x)
{
    if (n == 1)
        return cos(x);
    else 
        return solve(n - 1, x) + (cos((2 * n - 1) * x) / pow(2 * n - 1, 2));
}


int main()
{
    setlocale(LC_ALL,"Russian");
    float x;
    int n;
    cout << "S=cos(x)+cos(3x)/3^2+⋯+cos((2n-1)x)/(2n-1)^2" << endl;
    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите значение x: ";
    cin >> x;
    float sum = solve(n, x);
    cout << "Сумма n членов последовательности равна: " << sum;
    return 0;
}