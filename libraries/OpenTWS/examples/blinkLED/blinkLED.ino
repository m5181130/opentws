#include <OpenTWS.h>

void setup() {
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);  
}

void loop(){
  digitalWrite(led1, !digitalRead(led1));

  delay(300);

  digitalWrite(led2, !digitalRead(led2));
}
