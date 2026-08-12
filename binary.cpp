#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a[10], n, key;
    int low, high, mid;
    int found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            cout << "Element found at position " << mid + 1;
            found = 1;
            break;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    getch();
}