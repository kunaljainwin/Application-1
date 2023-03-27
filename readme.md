
main.cpp 
line 93
updated way of file read

```c
#include <chrono>
#include <iostream>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    // code to be measured
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;
    return 0;
}
```