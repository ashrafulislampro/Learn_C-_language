#include <iostream>

using namespace std;

class Enemy{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
       virtual void attack(){};
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "Ninja ! -- "<< attackPower <<endl;
        }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout << "Monster "<< attackPower << endl;
        }
};

int main(){
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;


    e1->setAttackPower(20);
    e2->setAttackPower(40);

    // n.attack();
    // m.attack();
    e1->attack();
    e2->attack();

    return 0;
}