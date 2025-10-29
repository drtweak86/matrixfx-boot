#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "MatrixFX boot placeholder running..." << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Tick " << i + 1 << "..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "MatrixFX boot finished!" << std::endl;
    return 0;
}
