#include <iostream>
using namespace std;

bool isConnect(int a, int b){
    return false;
}

int main(void){
    int n = 0;
    int score = 0;
    cin >> n;
    if(n != 0){
        int toshi[n];
        bool load[n][n];
        for (int i = 0; i < n; i++)
        {
            toshi[n] = -1;
            for (int j = 0; j < n; j++){
                load[i][j] = false;
            }
        }
    }

    for (int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        load[a][b] = true;
    }

    // 追加する道について総当たり
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(!load[i][j]){
                bool route = load;
                route[i][j] = true;

            }
        }
    }



    return 0;
}

// vector型使った方が色々と便利そう？
// 最大経路を探すにはある頂点から一番離れた頂点を探索する。
// 幅優先探索をして一番離れた頂点を探し、そのあとにそこからの最短経路を探す。
