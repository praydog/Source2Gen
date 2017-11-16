#include <thread>

#include "Source2Gen.hpp"

using namespace std;

void StartupThread() {
    Source2Gen generator(SOURCE2_OUTPUT);
    generator.GenerateHeaders();
}

int __stdcall DllMain(void* instance, unsigned int reason, void* reserved) {
    if (reason == 1) {
        thread t(StartupThread);
        t.detach();
    }

    return 1;
}