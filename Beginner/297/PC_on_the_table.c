#include <stdio.h>
int main(void){
    int H = 0;
    int W = 0;
    int i = 0;
    char S[100];

    if (scanf("%d", &H) != 1)
    {
        return 0;
    }

    if (scanf("%d", &W) != 1)
    {
        return 0;
    }


    for (i = 0; i < H; i++){
        if (scanf("%s", &S[i]) != 1){
            return 0;
        }
        printf("%s\n", &S[i]);

        for (i = 0; i < W-1; i++){
            if(S[i] == 'T' && S[i+1] == 'T'){
                S[i] = 'P';
                S[i + 1] = 'C';
            }
        }

        // for (i = 0; i < W; i++){
        //     printf("%s", &S[i]);
        // }
        printf("\n");

        // for (i = 0; i < 100; i++){
        //     S[i] = ' ';
        // }
    }
    return 0;
}