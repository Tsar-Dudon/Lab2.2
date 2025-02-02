#include <iostream>

void QuickSort(int a, int b, int* mas)
{
    if(a >= b)
        return;

    int mid = mas[(a+b)/2];

    int left = a - 1;
    int right = b + 1;
    while(1)
    {
        do left++; while(mas[left] < mid);
        do right--; while(mas[right] > mid);
        if(left >= right)
            break;
        std::swap(mas[left], mas[right]);
    }
    left = right;
    right++;

    QuickSort(a, left, mas);
    QuickSort(right, b, mas);
}

int main()
{	
    const int n = 100000;
    int mas[n] {45,14,45,13,7,1,7,89,4,743,1,65,823,2,7,0};

    /* for(int i = 0; i < n - 1; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(mas[i] > mas[j])
                std::swap(mas[i], mas[j]); 
        }
    }*/

   QuickSort(0, n - 1, mas);

    for(int i = 100000 - 16; i < n; i++)
        std::cout << mas[i] << ' ';

    return 0;
}