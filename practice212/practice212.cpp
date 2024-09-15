using  namespace std;
#include <iostream>

int main()
{

        /*srand(time(0));*/
        //int size1;
        //cout << "Enter size1 -> ";
        //cin >> size1;
        //int* ptr1 = new int[size1];

        //// инициализация массива
        //for (int i = 0; i < size1; i++)
        //{
        //    ptr1[i] = rand() % 40;// [0 - 39]  
        //}
        //// вывод массива
        //for (int i = 0; i < size1; i++)
        //{
        //    cout << ptr1[i] << "\t";
        //}
        //cout << endl;

        //// количество нечетных элементов

        //int size2 = 0;
        //for (int i = 0; i < size1; i++)
        //{
        //    if (ptr1[i] % 2 != 0)
        //    {
        //        size2++;
        //    }
        //}
        //int* ptr2 = nullptr;
        //if (size2 > 0)
        //{
        //    ptr2 = new int[size2];
        //}

        //// копирование с проверкой 

        //for (int i = 0, j = 0; i < size1; i++)
        //{
        //    if (ptr1[i] % 2 != 0)
        //    {
        //        ptr2[j] = ptr1[i];
        //        j++;
        //    }
        //}
        //delete[] ptr1;// удаляем первый массив

        //// вывод второго массива.
        //cout << "\nSize2 = " << size2 << endl;
        //for (int i = 0; i < size2; i++)
        //{
        //    cout << ptr2[i] << "\t";
        //}
        //cout << endl;

        //delete[] ptr2;

        //1
        srand(time(0));
        int size;
        cout << "Enter size: ";
        cin >> size;
        int* ptr = new int[size];
        for (int i = 0; i < size; i++){
            ptr[i] = rand() % 41-20;
            cout << ptr[i] << "\t";
        }
        cout << endl;
        //2 positive
        int size2 = 0, size3 = 0, size4=0;
        for (int i = 0; i < size; i++){
            if (ptr[i] > 0)
            {
                size2++;
            }
            else if (ptr[i] < 0)
            {
                size3++;
            }
            else {
                size4++;
            }
        }
        int* ptr2 = nullptr;
        int* ptr3 = nullptr;
        int* ptr4 = nullptr;
        if (size2 > 0)
        {
            ptr2 = new int[size2];
        }
        if (size3 > 0)
        {
            ptr3 = new int[size3];
        }
        if (size4 > 0)
        {
            ptr4 = new int[size4];
        }
        for (int i = 0, j = 0; i < size; i++)
        {
            if (ptr[i]>0)
            {
                ptr2[j] = ptr[i];
                j++;
            }
        }
        for (int i = 0, j = 0; i < size; i++)
        {
            if (ptr[i] < 0)
            {
                ptr3[j] = ptr[i];
                j++;
            }
        }
        for (int i = 0, j = 0; i < size; i++)
        {
            if (ptr[i] == 0)
            {
                ptr4[j] = ptr[i];
                j++;
            }
        }
        cout << endl;
        for (int i = 0; i < size2; i++)
        {
            cout << ptr2[i] << "\t";
        }
        cout << endl << endl;
        for (int i = 0; i < size3; i++)
        {
            cout << ptr3[i] << "\t";
        }
        cout << endl << endl;
        for (int i = 0; i < size4; i++)
        {
            cout << ptr4[i] << "\t";
        }
        cout << endl;
        delete[] ptr2;
        delete[] ptr3;
        delete[] ptr4;
}


