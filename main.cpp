#include <iostream>

int main() {
  Singleton singleton = Singleton::GetInstance();
  singleton.Increment();
  std::cout << singleton.GetCounter();
}

