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
    const int n = 100;
    int mas[16] {45,14,45,13,7,1,7,89,4,743,1,65,823,2,7,0};

    /*for(int i = 0; i < 15; i++)
    {
        for(int j = i; j < 16; j++)
        {
            if(mas[i] > mas[j])
                std::swap(mas[i], mas[j]); 
        }
    }*/

   QuickSort(0, 15, mas);

    for(int i = 0; i < 16; i++)
        std::cout << mas[i] << ' ';

    return 0;
}