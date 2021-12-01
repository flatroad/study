include <stdio.h>
define MAX 1000002

int count[MAX];

int ad[MAX];
int op = -1;

void pu(int M)
{
    op = op + 1;
    ad[op] = M;
}

void po(void)
{
    op = op - 1;
}

int stack[MAX];
int top = -1;

void push(int M)
{
    top = top + 1;
    stack[top] = M;
}

void pop(void)
{
    top = top - 1;
}

int main()
{
    int N = 0;

    scanf("%d", &N);

    int arr[N];
    int ans[N];
    int arr_tn[N];
    int i = 0;
    while (i < N)
    {
        count[i] = 0;
        i++;
    }
    i = 0;
    while (i < N)
    {
        scanf("%d", &arr[i]);
        count[arr[i]] = count[arr[i]] + 1;
        i++;
    }

    i = 0;
    while (i < N)
    {
        arr_tn[i] = count[arr[i]];
        i++;
    }



    int k = N - 1;
    push(arr_tn[k]);
    pu(k);


    ans[k] = -1;

    k--;

    while (k>=0)
    {   
        while (top >= 0)
        {
            if (arr_tn[k] < stack[top])
            {
                ans[k] = arr[ad[op]];             
                break;
            }
            else if (arr_tn[k] >= stack[top])
            {
                pop();
                po();
            }

        }
        if (top == -1)
            {
            ans[k] = -1;
            }
        push(arr_tn[k]);
        pu(k);
        k--;
    }
    k++;
    
        while (k < N)
        {
            printf("%d ", ans[k]);
            k++;
        }
    
    return 0;
}
