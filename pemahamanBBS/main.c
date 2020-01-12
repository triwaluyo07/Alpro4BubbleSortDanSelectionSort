#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Kelas : A11.4203
///Nim : A11.2017.10097

void inputArr(int Arr[], int n);
void outputArr(int Arr[], int n);
void bublesort(int Arr[], int n);

int main()
{   int Array[6];

    printf("Soal Pemahaman Selasa 14.10\n");
    printf("isikan array anda \n");
    inputArr(Array, 6);
    outputArr(Array, 6);
    bublesort(Array, 6);
    puts("\n");
    printf("Array setelah di shorting\n");
    outputArr(Array, 6);

    return 0;
}

void inputArr(int Arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("masukan Array ke [%d] : ",i);
        scanf("%d",&Arr[i]);
    }
}



void outputArr(int Arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("nilai Array ke %d adalah %d\n",i,Arr[i]);
    }
}

void bublesort(int Arr[], int n)
{
    int i;
    int j;
    int wadah=0;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
                if(Arr[i]<Arr[i+1])
            {
                wadah=Arr[i];
                Arr[i]=Arr[i+1];
                Arr[i+1]=wadah;
            }
        }

    }
}
