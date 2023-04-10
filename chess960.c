#include <stdio.h>
int main(void){
    char S[8];
    int i = 0;
    int b_flag0 = 0;
    int b_flag = 0;
    int r_flag0 = 0;
    int r_flag = 0;
    int k_flag = 0;

    for (i = 0; i < 8; i++)
    {
        if(scanf("%c", &S[i]) != 1){
            return 0;
        }
        // printf("%s\n", &S[i]);
    }

    for (i = 0; i < 8; i++){
        // printf("%s\n", &S[i]);
        if (S[i] == 'B' && b_flag0 == 0)
        {
            // printf("1\n");
            b_flag0 = i;
        }
        else if(S[i] == 'B' && b_flag0 != 0){
            // printf("2\n");

            if (b_flag0 % 2 != i % 2){
                b_flag = 1;
            }
        }

        if (S[i] == 'R' && r_flag0 == 0){
            // printf("!\n");
            r_flag0 = 1;
        }else if (S[i] == 'R' && r_flag0 != 0){
            // printf("r\n");

            r_flag = 1;
        }

        if (S[i] =='K' && r_flag0 != 0){
            // printf("k\n");
            
            k_flag = 1;

        }
    }

    // printf("%d\n", b_flag);
    // printf("%d\n", r_flag);
    // printf("%d\n", k_flag);


    if (k_flag != 0 && r_flag != 0 && b_flag != 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}