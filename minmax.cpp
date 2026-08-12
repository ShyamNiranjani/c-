#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int n, min, max;

    cout << "Enter a number: ";
    cin >> n;

    if (n == -999)
    {
        cout << "No numbers entered.";
        getch();
        return;
    }

    min = max = n;

    while (n != -999)
    {
        cout << "Enter a number: ";
        cin >> n;

        if (n != -999)
        {
            if (n < min)
                min = n;

            if (n > max)
                max = n;
        }
    }

    cout << "\nMinimum = " << min;
    cout << "\nMaximum = " << max;

    getch();
}