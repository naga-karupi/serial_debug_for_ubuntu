#include "loop_class.hpp"

using namespace std;

loop_c::loop_c(int _loop_sec): loop_sec(_loop_sec){
    pre_time = chrono::system_clock::now();
}

void loop_c::operator()(){
    auto now_time = chrono::system_clock::now();
    auto time = now_time - pre_time;

    while(chrono::duration_cast<chrono::milliseconds>(time).count() <= loop_sec){
        now_time = chrono::system_clock::now();
        time = now_time - pre_time;
    }
}