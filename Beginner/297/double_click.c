#include <stdio.h>
int main(){
    int N = 0;
    int D = 0;
    int T[100];
    int i = 0;
    int check = 0;

    if(1 != scanf("%d", &N)){
        printf("%d\n", -1);

        return 0;
    }
    if (1 != scanf("%d", &D)){
        printf("%d\n", -1);

        return 0;
    }

    for (i = 0; i < 100; i++){
        T[i] = 0;
    }

    for (i = 0; i < N; i++)
    {
        if(1 != scanf("%d", &T[i])){
        printf("%d\n", -1);

            return 0;
        }
    }

    for (i = 0; i < N - 1; i++){
        // printf("%d\n", i);
        if (T[i + 1] - T[i] <= D)
        {
            printf("%d\n", T[i + 1]);
            return 0;
        }
    }
    printf("%d\n", -1);
    
    return 0;
}