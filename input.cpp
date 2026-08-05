#include <iostream.h>
#include <conio.h>

void main()
{
    int s1, s2, s3;

    clrscr();

    cout << "Enter marks of Subject 1: ";
    cin >> s1;

    cout << "Enter marks of Subject 2: ";
    cin >> s2;

    cout << "Enter marks of Subject 3: ";
    cin >> s3;

    if (s1 >= 35 && s2 >= 35 && s3 >= 35)
        cout << "\nResult : PASS";

    if ((s1 < 35 && s2 >= 35 && s3 >= 35) ||
        (s1 >= 35 && s2 < 35 && s3 >= 35) ||
        (s1 >= 35 && s2 >= 35 && s3 < 35))
        cout << "\nResult : ATKT";

    if ((s1 < 35 && s2 < 35) ||
        (s2 < 35 && s3 < 35) ||
        (s1 < 35 && s3 < 35))
        cout << "\nResult : FAIL";

    getch();
}