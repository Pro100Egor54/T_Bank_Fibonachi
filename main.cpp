#include <iostream>
// #include <string>
using namespace std;

struct Range {
    int low, high;
    bool notTypeidAnthg = true;

    bool InRangePrint(int a) {
        bool out = (low <= a && a <= high);
        if (out) {
            std::cout << a << " ";
            this->notTypeidAnthg = false;
        }
        return out;
    }
};


void fibon(Range& range) {
    int fn_1 = 1;
    int fn_2 = 0;
    range.InRangePrint(fn_2);
    while (fn_1 < range.high) {
        range.InRangePrint(fn_1);
        int tmp = fn_1;
        fn_1 = fn_1 + fn_2;
        fn_2 = tmp;
    }
}

int main() {
    Range range;
    std::cin >> range.low >> range.high;
    fibon(range);
    if (range.notTypeidAnthg) {std::cout << "В заданном диапазоне нет чисел Фибоначчи" << std::endl;}
    else {std::cout << endl;}
    return 0;
}
