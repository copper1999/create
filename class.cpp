#include <iostream>
#include <String>

class Creature
{
    private:
    std::string m_name;
    char m_symbol;
    int m_blood;

    public:

    void getName(std::string name)
    {
        name=m_name;
    }
    


    
};

class Player
{

};

class Monster
{

};



class Fruit
{
    public:
    virtual void name()
    {
        std::cout<<"is Fruit ...\n";
    }
    virtual void color()=0;
};

class Apple: public Fruit
{
    public:
    void name() override
    {
        std::cout<<"this is a apple\n";
    }
    void color() override
    {
        std::cout<<"Red\n";
    }
};

int main()
{
    Apple USA;
    USA.name();
    return 0;
}