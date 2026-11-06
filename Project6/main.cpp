
#include <iostream>
using namespace std;

//Завдання 1
//void Rectangle(int n, int k)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < k; j++)
//        {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int n, k;
//
//    cout << "Enter height: ";
//    cin >> n;
//
//    cout << "Enter width: ";
//    cin >> k;
//
//    Rectangle(n, k);
//}
//Завдання 2
//int Factorial(int n)
//{
//    int result = 1;
//
//    for (int i = 1; i <= n; i++)
//    {
//        result *= i;
//    }
//
//    return result;
//}
//
//int main()
//{
//    int n;
//
//    cout << "Enter number: ";
//    cin >> n;
//
//    cout << "Faktorial: " << Factorial(n) << endl;
//}
//Завдання 3
//bool IsSimple(int n)
//{
//    if (n < 2)
//        return false;
//
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//            return false;
//    }
//
//    return true;
//}
//
//int main()
//{
//    int n;
//
//    cout << "Enter number: ";
//    cin >> n;
//
//    if (IsSimple(n))
//        cout << "Number is simple" << endl;
//    else
//        cout << "Number is not simple" << endl;
//}
//Завдання 4
//void InitArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        *(arr + i) = rand() % 50;
//    }
//}
//
//void ShowArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//
//void FindMinMax(int* arr, int size)
//{
//    int* min = &arr[0];
//    int* max = &arr[0];
//
//    int minIndex = 0;
//    int maxIndex = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (*(arr + i) < *min)
//        {
//            min = arr + i;
//            minIndex = i;
//        }
//
//        if (*(arr + i) > *max)
//        {
//            max = arr + i;
//            maxIndex = i;
//        }
//    }
//
//    cout << "Min: " << *min << endl;
//    cout << "Min index: " << minIndex << endl;
//
//    cout << "Max: " << *max << endl;
//    cout << "Max index: " << maxIndex << endl;
//}
//
//int main()
//{
//    srand(time(0));
//
//    const int size = 10;
//    int arr[size];
//
//    InitArray(arr, size);
//
//    ShowArray(arr, size);
//
//    FindMinMax(arr, size);
//}
//Завдання 5
//int Cube(int n)
//{
//    return n * n * n;
//}
//
//int main()
//{
//    int n;
//
//    cout << "Enter number: ";
//    cin >> n;
//
//    cout << "Cube: " << Cube(n) << endl;
//}
//Завдання 6
bool IsPositive(int n)
{
    if (n > 0)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (IsPositive(n))
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;
}