#include <iostream.h>
#include <conio.h>

void main()
{
    int n, square, temp, divisor = 1;

    clrscr();

    cout << "Enter an integer: ";
    cin >> n;

    square = n * n;
    temp = n;

    // Count digits and create divisor
    while (temp != 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    // Check Murphy (Automorphic) number
    if (square % divisor == n)
        cout << n << " is a Murphy number.";
    else
        cout << n << " is not a Murphy number.";

    getch();
}