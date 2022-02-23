#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=n; i>=4; i--){
        int number=i;
        bool flag = true;   // true로 지정해 놓고
                            // 조건이 맞지 않으면 false로 지정

        while(number!=0){
            if(number%10==4||number%10==7){ // 1의 자리 숫자가 4또는 7이라면 
                number/=10;                 // 10으로 나누고 그 숫자가 위로 올라간다.
            }
            else{
                flag=false;                 // !(4 or 7)이라면 false 
                break;
            }
        }

        if(flag){                           // 4 또는 7인것만 출력
            cout<<i;
            return 0;
        }
    }
    return 0;
}

// n보다 작거나 같은 수에서 4 또는 7로 이루어진 가장 큰 값을 구하는 코드
// ex) 100 -> 77 | 75 -> 74 