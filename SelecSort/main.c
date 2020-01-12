#include <stdio.h>
#include <stdlib.h>
void selecsort(int array[],int n);
void cetakArr(int array[],int n);

int main()
{
    int Arr[10]={3,4,6,2,5,8,7,9,1,10};
    selecsort(Arr,10);
    cetakArr(Arr,10);
    return 0;
}

void selecsort(int array[],int n)
{
    int i,j,idx,temp;
    for(i=0;i<n-1;i++)
    {
        idx=i;
        for(j=i;j<n;j++)
        {
            if(array[j]<array[idx])
            {
                idx=j;
            }
        }
        temp=array[i];
        array[i]=array[idx];
        array[idx]=temp;
    }
}

void cetakArr(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("nilai array ke %d adalah %d\n",i,array[i]);
    }
}
