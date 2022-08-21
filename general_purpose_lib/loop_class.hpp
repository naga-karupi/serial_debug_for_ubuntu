#include <chrono>

//class definition
class loop_c{
    const int loop_sec;
    std::chrono::system_clock::time_point pre_time;

public:
    loop_c() = delete;
    loop_c(int _loop_sec);

    void operator()();
};