#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int round;
    cin >> round;
    for (size_t i = 0; i < round; i++){
        int x1,y1,r1,x2,y2,r2,distance,cond1,cond2;
        int positions[6];
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        distance = (x2-x1) * (x2-x1) + (y2-y1) * (y2 - y1);
        cond1 = (r1 - r2) * (r1 - r2);//원이 내접하는 경우
        cond2 = (r1 + r2) * (r1 + r2);//원이 외접하는 경우
        //동심원인 경우
        if(distance == 0){
            if(r1 == r2) {
                cout << -1 << endl;
            }
            //몬가 잘못댐
            else {
                cout << 0 << endl;
            }
        }
        else if(distance == cond1 || distance == cond2){
            cout << 1 << endl;
        }
        else if(cond1 < distance && distance < cond2){
            cout << 2 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}