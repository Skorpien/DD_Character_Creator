#include <iostream>

class C
{
public:
    C(int i):i(i)
    {
        std::cout<<i;
    }
    ~C()
    {
        std::cout<<i+5;
    }
private:
    int i;
};

int main()
{

    C(2);

}
