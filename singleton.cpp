#include <iostream>
using namespace std;

class Singleton {
    private:
        // Here will be the instance stored.
        static Singleton* instance;

        // Private constructor to prevent instancing.
        Singleton();

    public:
        // Static access method.
        static Singleton* getInstance() {
            if (instance == NULL) {
                instance = new Singleton();
            }
            return instance;
        }
};

//Null, because instance will be initialized on demand.
Singleton* Singleton::instance = NULL;

Singleton::Singleton() {}

int main() {
    new Singleton();     // Won't work
    // Singleton* s = Singleton::getInstance();   // Ok
    // Singleton* r = Singleton::getInstance();   // same instance
    //
    // // The addresses will be the same.
    // cout << s << endl;
    // cout << r << endl;
}
