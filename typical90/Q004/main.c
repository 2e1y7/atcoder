#include <stdio.h>
// #define MAX 2000
int main(void){
    int H = 0;
    int W = 0;
    int i = 0;
    int j = 0;

    if(1 != scanf("%d", &H)){
        printf("!\n");
        return 0;
    }

    if(1 != scanf("%d", &W)){
        printf("!\n");
        return 0;
    }

    int A[H][W];
    int ans[H][W];
    int H_sum[H];
    int W_sum[W];

    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++){
            if(1 != scanf("%d", &A[i][j])){
                return 0;
            }
            else{
                ans[i][j] = 0;
            }
        }
    }

    for(i = 0; i < H; i++){
        H_sum[i] = 0;
        for(j = 0; j < W; j++){
            H_sum[i] = H_sum[i] + A[i][j];
        }
    }

    for(i = 0; i < H; i++){
        W_sum[i] = 0;
        for(j = 0; j < W; j++){
            W_sum[i] = W_sum[i] + A[i][j];
        }
    }

    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++){
            ans[i][j] = H_sum[i] + W_sum[j] - A[i][j];
        }
    }

    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++){
            printf("%d ", ans[i][j]);
            // ans[i][j] = H_sum[i] + W_sum[j] - A[i][j];
        }
        printf("\n");
    }
    return 0;

    
}