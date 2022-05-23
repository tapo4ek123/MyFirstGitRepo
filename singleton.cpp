class Singleton {
 private:
  int counter = 0;
 public:
  static Singleton& GetInstance() {
    static Singleton instance;
 	  
    return instance;
  }
  
 public:
  
  void Increment() {
    counter++;
  }
  int GetCounter() {
   return counter; 
  }
};
