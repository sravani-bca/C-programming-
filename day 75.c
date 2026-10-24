
#include <iostream>
using namespace std;

int main()
{
    int arrElement[50], num, i, j, temp;

    cout << "Enter the size of array: ";
    cin >> num;

    cout << "Enter the array elements: ";

    for (i = 0; i < num; ++i)
    {
        cin >> arrElement[i];
    }

    for (i = 1; i < num; ++i)
    {
        for (j = 0; j < num - i; ++j)
        {
            if (arrElement[j] > arrElement[j + 1])
            {
                temp = arrElement[j];
                arrElement[j] = arrElement[j + 1];
                arrElement[j + 1] = temp;
            }
        }
    }

    cout << "Array after bubble sort: ";

    for (i = 0; i < num; ++i)
    {
        cout << " " << arrElement[i];
    }

    return 0;
}
