class Singleton {
 private:
  int counter = 0;
 public:
  void Increment() {
    counter++;
  }
  int GetCounter() {
   return counter; 
  }
};
