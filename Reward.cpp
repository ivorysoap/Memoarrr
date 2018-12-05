//#define TEST_REWARD
#include <iostream>
#include "Reward.h"

#ifdef TEST_REWARD
class Reward;

class TestReward{
    public: 
    Reward *test;
    TestReward(){
    Reward r(Rubies::TWO);
    test = &r;
}
    Reward& getTest(){return *test;}
};
int main(){
    TestReward rd;
    cout << rd.getTest();
}
#endif
