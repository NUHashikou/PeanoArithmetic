#include <stdlib.h>
#include <iostream>
#include <math.h>

int lambda(int x);

int main(void)
{
    int n;
    int *seq;
    std::cin >> n; //nへ入力結果を代入
    seq = new int[lambda(n)] ; //nの長さ分のメモリ確保
    int temp = (n+1)-pow(2,lambda(n));

    for (int i = 0; i < lambda(n); i++){
        seq[lambda(n)-i-1] = temp % 2 ;
        temp = temp / 2 ;
        }
    
   
    // 出力
    if (lambda(n)==0){
        std::cout << "empty" <<"\n";
    }
    for (int i = 0; i < lambda(n) ; i++){
        std::cout << seq[i] << " ";
    }
        std::cout <<"\n";
    delete [] seq ;

return 0;
}

// nの高さを返す再帰的関数 λ : N → N 
int lambda(int x){
    for (int y = 0 ; y < x+100; y++)
    {
        if ( pow(2,y) <= x+1  &&  x+1 < pow(2,y+1)){
            return y;
        } 
    }
    return 1; // x = 0 なら 1を返す
}