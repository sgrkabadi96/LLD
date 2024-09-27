#include <bits/stdc++.h>

using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    Singleton() {}

public:
    static Singleton *getInstance()
    {
        if (instance == NULL)
        {
            instance = new Singleton();
        }
        return instance;
    }

    void someMethod()
    {
        cout << "Singleton Class " << endl;
    }
};

Singleton *Singleton::instance = NULL;

int main()
{

    Singleton *instance = Singleton ::getInstance();
    instance->someMethod();

    Singleton *instance2 = Singleton ::getInstance();
    instance->someMethod();

    if (instance2 == instance)
    {
        cout << 1 << endl;
    }
}
