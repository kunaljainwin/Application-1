# Snips
![image](https://user-images.githubusercontent.com/72144717/227871088-5d7b0bd5-41c3-4c55-bea8-0704ebe21a0d.png)
![image](https://user-images.githubusercontent.com/72144717/227871105-6eb10a72-685f-4e85-880f-8865434884ad.png)
![image](https://user-images.githubusercontent.com/72144717/227871118-b9d66e16-468b-40d2-bafa-d43dd3342c53.png)

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
