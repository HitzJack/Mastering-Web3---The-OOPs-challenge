#include <iostream>
using namespace std;
class car{
    public:
    string make;
    string model;
    int year;
    int speedx;
    int speedy;
    int x;
    int y;
    

    void accelerate_in_x(int speedx){
        (this->speedx)=(this->speedx)+ speedx;
    }
    void accelerate_in_y(int speedy){
        this->speedy+=speedy;
    }
    void move(int time){
        (this->x)+=((this->speedx)*time);
        this->y+=((this->speedy)*time);
    }
    
    
};
int detect_collision(car test1, car test2){
        float car1_x= test1.x;
        float car1_y= test1.y;

        if((test2.x=car1_x)&&(test2.y=car1_y)){
            return 1;
        }
        else 
        return 0;
        
    }
    void time_to_collision(car test1, car test2){
        float time;
        float timex;
        float timey;
        float car1_x= test1.x;
        float car1_y= test1.y;
        float car2_x= test2.x;
        float car2_y= test2.y;
        float y=detect_collision(test1,test2);
            if(y==0){
            
                timex=(car1_x-car2_x)/(test2.speedx-test1.speedx);
                timey=(car1_y-car2_y)/(test2.speedy-test1.speedy);
                 if(timex==timey){
                    time=timex;
                    cout<<time<<"hours"<<endl;
                    return;
                }
                else{
                    cout<<"They would not collide!!!"<<endl;
                    return;
                }

            
            }

           else if(y==1){
            cout<<"Already collided!!!"<<endl;
             return;
        } 
    } 
    

int main(){
    car test1,test2;
    test1.x=0;
    test1.y=0;
    test2.x=6;
    test2.y=4;
    test1.accelerate_in_x(2);
    test2.accelerate_in_x(1);
    test1.accelerate_in_y(2);
    test2.accelerate_in_y(1);
    test1.move(3);
    test2.move(2);
    if(detect_collision(test1,test2)==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    time_to_collision(test1,test2);
    return 0;
}