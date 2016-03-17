#include <iostream>
#define LEN 10

using namespace std;

void Print_Result(int A[],int N)
{
    for(int i=0; i<N; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void Bubble_Sort(int A[],int N)
{
    int flag = 0;
    for(int i=N-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    cout<<"Bubble_Sort: ";
    Print_Result(A,N);
}

int main()
{
    int A[LEN] = {3,5,1,2,0,8,6,4,7,9};
    Bubble_Sort(A,LEN);

    return 0;
}
