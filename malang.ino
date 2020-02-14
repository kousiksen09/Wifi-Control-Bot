
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

WiFiServer server(80);

char auth[] = "B2_nfcrFSP0kWqhhODYomt7XwajtbIGI";


char ssid[] = "Kousik";
char pass[] = "PASSWORD8768";





// SETUP
void setup()
{
Serial.begin(115200);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D7, OUTPUT);
    
  pinMode(D4, OUTPUT);
  pinMode(D3, OUTPUT);


  
Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid,pass);

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(10);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi Connected");

  //Start Server
  server.begin();
  Serial.println("Server Started");

  //Print IP Address
  Serial.print("Use This URL to Connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");

  // Connect Blynk
  Blynk.begin(auth, ssid, pass);
}


// FORWARD
BLYNK_WRITE(V0) {
  int button = param.asInt(); // read button
  if (button == 1) {
    Serial.println("Moving forward");
      digitalWrite(D8,LOW);
      digitalWrite(D7,HIGH);
      digitalWrite(D5,HIGH);
      digitalWrite(D4,LOW);
    digitalWrite(D3,HIGH);
    digitalWrite(D6,HIGH);
  }
  else {
    Serial.println("Stop");
     digitalWrite(D5,LOW);

    digitalWrite(D8,LOW);
    digitalWrite(D7,LOW);

    digitalWrite(D6,LOW);

    digitalWrite(D4,LOW);
    digitalWrite(D3,LOW);
  }
}
// LEFT
BLYNK_WRITE(V1) {
  int button = param.asInt(); // read button
  if (button == 1) {
    Serial.println("Moving Left");
      digitalWrite(D8,LOW);
      digitalWrite(D7,HIGH);
      digitalWrite(D5,HIGH);
      digitalWrite(D4,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D6,LOW);
  }
  else {
    Serial.println("Stop");
     digitalWrite(D5,LOW);

    digitalWrite(D8,LOW);
    digitalWrite(D7,LOW);

    digitalWrite(D6,LOW);

    digitalWrite(D4,LOW);
    digitalWrite(D3,LOW);
  }
}
// RIGHT
BLYNK_WRITE(V2) {
  int button = param.asInt(); // read button
  if (button == 1) {
    Serial.println("Moving Right");
      digitalWrite(D8,LOW);
      digitalWrite(D7,LOW);
      digitalWrite(D5,LOW);
      digitalWrite(D4,LOW);
    digitalWrite(D3,HIGH);
    digitalWrite(D6,HIGH);
  }
  else {
    Serial.println("Stop");
     digitalWrite(D5,LOW);

    digitalWrite(D8,LOW);
    digitalWrite(D7,LOW);

    digitalWrite(D6,LOW);

    digitalWrite(D4,LOW);
    digitalWrite(D3,LOW);
  }
}

// BACKWARD
BLYNK_WRITE(V4) {
  int button = param.asInt(); // read button
  if (button == 1) {
    Serial.println("Moving backward");
    digitalWrite(D8,HIGH);
    digitalWrite(D7,LOW);
    digitalWrite(D5,HIGH);


    digitalWrite(D4,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D6,HIGH);
  }
  else {
    Serial.println("Stop");
    digitalWrite(D5,LOW);
    digitalWrite(D8,LOW);
    digitalWrite(D7,LOW);
    digitalWrite(D6,LOW);

    digitalWrite(D4,LOW); 
    digitalWrite(D3,LOW);
  }
}

// MAIN CODE
void loop()
{
  Blynk.run();
}

    
        
