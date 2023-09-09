// my own soltuion-----------------------------------------------------
#include <iostream>
using namespace std;
int past(int h, int m, int s){
	int result = h * 3600000 + m * 60000 + s * 1000;
	return result;
}
int main(){
	cout<<past(0, 1, 1);
}


// clever soltuion ---------------------------------------------

int past(int h, int m, int s) {

  //1second == 1000ms
  //1minute == 60s == 60000ms
  //1h == 60m === 3600s == 3600000ms

  const int oneSec = 1000;
  const int oneMin = 60000;
  const int oneHr = 3600000;
  
  return (s * oneSec) + (m * oneMin) + (h * oneHr);

}

// clever soltuion ---------------------------------------------

int past(int h, int m, int s) {
  return 1000*(s + m*60 + h*60*60);
}

// clever soltuion ---------------------------------------------


#include <chrono>

int past(int h, int m, int s) {
  std::chrono::milliseconds millis{0};
  millis += std::chrono::hours{h};
  millis += std::chrono::minutes{m};
  millis += std::chrono::seconds{s};
  return millis.count();
}