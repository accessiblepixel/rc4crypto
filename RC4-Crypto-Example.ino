/*
    Accessible Pixel - Encryption Module
    Original RC4-Arduino code by https://github.com/shirokuade/RC4-Arduino
    Modified by Accessible Pixel
    Version 1.45
*/
#include <rc4.h>
rc4 rc4(true);

// Setup
void setup() {
  Serial.begin(9600);
}
// Main Loop
void loop() {
  char key[] = "Hello";
  char data[] = "this is data source!";
  size_t length = strlen(data);
  Serial.print("original data: "); Serial.println(data);

  rc4.rc4crypt(key, data, length);
  length = strlen(data);
  Serial.print("encrypted data: ");
  for (int i = 0; i < length;) {
    Serial.print((int)data[i] & 0xFF);
    Serial.print(" ");
    i++;
  }
  Serial.println();
  rc4.rc4crypt(key, data, length);
  length = strlen(data);
  Serial.print("decrypted data: "); Serial.println(data);

  delay(1000);
}
