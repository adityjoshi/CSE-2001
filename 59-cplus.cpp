#include <iostream>

template <class X>
void swap(X &a, X &b)
{
    X temp = a;
    a = b;
    b = temp;
}

template <class T>
void bsort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; i < j; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

int main()
{
    int x[5] = {10, 50, 30, 60, 40};
    float y[5] = {3.2, 71.5, 17.3, 45.9, 92.7};

    bsort(x, 5);
    bsort(y, 5);

    std::cout << "Sorted X-Array:";
    for (int i = 0; i < 5; i++)
    {
        std::cout << " " << x[i];
    }
    std::cout << std::endl;

    std::cout << "Sorted Y-Array:";
    for (int j = 0; j < 5; j++)
    {
        std::cout << " " << y[j];
    }
    std::cout << std::endl;

    return 0;
}

