#include <Wire.h>
void setup()
{
  Wire.begin(6); // Khởi tạo thư viện i2c địa chỉ 
  Wire.onReceive(receiveEvent); // khởi tạo chế độ nhận tín hiệu từ boad ch
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}
 
void loop()
{
}
void receiveEvent(){
    while(Wire.available())
  {
    char c = Wire.read();
    Serial.println(c);
    
  }
}
