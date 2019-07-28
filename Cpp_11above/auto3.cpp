#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <initializer_list>

using namespace std;

template<class T>
class Vector {
public:
    Vector(initializer_list<T> other) {
        for( auto elem: other ) {
            vec.push_back(elem);
        }
    }

    auto echo() -> decltype(auto) {
        for(auto elem: vec) {
            for(auto subelem: elem) {
                cout << subelem << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
private:
    vector<T> vec;
};

int main()
{
    
    Vector<std::string> v({"Olympiakos", "PAOK", "AEK", "Panathinaikos"});
    v.echo();

    return 0;
}
