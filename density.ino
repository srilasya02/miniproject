#include <SPI.h> 
#include <MFRC522.h> 
#define SS_PIN 53 
#define RST_PIN 5 
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance. 
int a,b,c,d; 
int R[4]={3,4,8,13}; 
int G[4]={2,6,11,12}; 
void noambulance() 
{ 
if (digitalRead(30)==HIGH) 
{a++;} 
if(digitalRead(31)==HIGH) 
{a++;} 
if(digitalRead(32)==HIGH) 
{a++;} 
if(digitalRead(34)==HIGH) 
{b++;} 
if(digitalRead(35)==HIGH) 
{b++;} 
if(digitalRead(36)==HIGH) 
{b++;} 
if(digitalRead(40)==HIGH) 
{c++;} 
if(digitalRead(41)==HIGH) 
{c++;} 
if(digitalRead(42)==HIGH) 
{c++;} 
if(digitalRead(46)==HIGH) 
{d++;} 
if(digitalRead(47)==HIGH) 
{d++;} 
if(digitalRead(48)==HIGH) 
{d++;} 
if (a>d&&a>b&&a>c) 
{digitalWrite(G[0], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite(R[2], HIGH); 
digitalWrite(R[3], HIGH); 
delay(2000); 
digitalWrite(G[0], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
} 
else if (b>a&&b>d&&b>c) 
{digitalWrite(G[1], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[2], HIGH); 
digitalWrite(R[3], HIGH); 
delay(2000); 
digitalWrite(G[1], LOW); 
digitalWrite(R[0], LOW); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
} 
else if (c>a&&c>b&&c>d) 
{digitalWrite(G[2], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite(R[3], HIGH); 
delay(2000); 
digitalWrite(G[2], LOW); 
digitalWrite(R[0], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[3], LOW); 
} 
else if(d>a&&d>b&&d>c) 
{digitalWrite(G[3], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite(R[2], HIGH); 
delay(2000); 
digitalWrite(G[3], LOW); 
digitalWrite(R[0], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[2], LOW); 
}
else { 
digitalWrite(R[2], HIGH); 
digitalWrite(R[3], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite (R[0],HIGH); 
delay(1000); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[0],LOW); 
} 
a=0; 
b=0; 
c=0; 
d=0; 
} 
void yesambulance(int k) 
{ 
 if (digitalRead(30)==HIGH) 
{a++;} 
if(digitalRead(31)==HIGH) 
{a++;} 
if(digitalRead(32)==HIGH) 
{a++;} 
if(digitalRead(34)==HIGH) 
{b++;} 
if(digitalRead(35)==HIGH) 
{b++;} 
if(digitalRead(36)==HIGH) 
{b++;} 
if(digitalRead(40)==HIGH) 
{c++;} 
if(digitalRead(41)==HIGH) 
{c++;} 
if(digitalRead(42)==HIGH) 
{c++;} 
if(digitalRead(46)==HIGH) 
{d++;} 
if(digitalRead(47)==HIGH) 
{d++;} 
if(digitalRead(48)==HIGH) 
{d++;} 
if (a>d&&a>b&&a>c) 
{digitalWrite(G[0], HIGH); 
digitalWrite(R[2], HIGH); 
digitalWrite(R[3], HIGH); 
digitalWrite(R[1], HIGH); 
delay(2000); 
digitalWrite(G[0], LOW); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
digitalWrite(R[1], LOW); 
} 
else if (b>a&&b>d&&b>c) 
 {digitalWrite(G[1], HIGH); 
digitalWrite(R[2], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[3], HIGH); 
delay(2000); 
digitalWrite(G[1], LOW); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
digitalWrite(R[0], LOW); 
} 
else if (c>a&&c>b&&c>d) 
{digitalWrite(G[2], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite(R[3], HIGH); 
delay(2000); 
digitalWrite(G[2], LOW); 
digitalWrite(R[0], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[3], LOW); 
} 
else if (d>a&&d>b&&d>c) 
{ 
digitalWrite(G[3], HIGH); 
digitalWrite(R[2], HIGH); 
digitalWrite(R[0], HIGH); 
digitalWrite(R[1], HIGH); 
delay(2000); 
digitalWrite(G[3], LOW); 
digitalWrite(R[2], LOW); 
digitalWrite(R[0], LOW); 
digitalWrite(R[1], LOW); 
} 
else { 
digitalWrite(R[2], HIGH); 
digitalWrite(R[3], HIGH); 
digitalWrite(R[1], HIGH); 
digitalWrite (R[0],HIGH); 
delay(1000); 
digitalWrite(R[2], LOW); 
digitalWrite(R[3], LOW); 
digitalWrite(R[1], LOW); 
digitalWrite(R[4],LOW); 
} 
switch (k) 
{ case 0: 
{digitalWrite(G[0],HIGH); 
digitalWrite(R[1],HIGH); 
digitalWrite (R[2],HIGH); 
digitalWrite (R[3],HIGH); 
delay(4000); 
digitalWrite(G[0],LOW); 
digitalWrite(R[1],LOW); 
digitalWrite (R[2],LOW); 
digitalWrite (R[3],LOW); 
break; 
} 
case 1: 
{digitalWrite(G[1],HIGH); 
digitalWrite(R[0],HIGH); 
digitalWrite (R[2],HIGH); 
digitalWrite (R[3],HIGH); 
delay(4000); 
digitalWrite(G[1],LOW); 
digitalWrite(R[0],LOW); 
digitalWrite (R[2],LOW); 
digitalWrite (R[3],LOW); 
break;} 
case 2: 
{digitalWrite (G[2],HIGH); 
digitalWrite(R[0],HIGH); 
digitalWrite (R[1],HIGH); 
digitalWrite (R[3],HIGH); 
delay(4000); 
digitalWrite (G[2],LOW); 
digitalWrite(R[0],LOW); 
digitalWrite (R[1],LOW); 
digitalWrite (R[3],LOW); 
break;} 
default: 
{digitalWrite(G[3],HIGH); 
 digitalWrite(R[0],HIGH); 
digitalWrite (R[1],HIGH); 
digitalWrite (R[2],HIGH); 
delay(4000); 
digitalWrite(G[3],LOW); 
digitalWrite(R[0],LOW); 
digitalWrite (R[1],LOW); 
digitalWrite (R[2],LOW); 
break;}} 
a=0; 
b=0; 
c=0; 
d=0; 
} 
int sensor11=30; 
int sensor12=31; 
int sensor13=32; 
int sensor21=34; 
int sensor22=35; 
int sensor23=36; 
int sensor31=40; 
int sensor32=41; 
int sensor33=42; 
int sensor41=46; 
int sensor42=47; 
int sensor43=48; 
int k; 
 void setup()  
{ 
pinMode(G[1], OUTPUT); 
pinMode(G[2], OUTPUT); 
pinMode(G[3], OUTPUT);  
pinMode(G[0], OUTPUT);  
pinMode(R[1], OUTPUT);  
pinMode(R[2], OUTPUT);  
pinMode(R[3], OUTPUT); 
pinMode(R[0], OUTPUT); 
pinMode(30,INPUT); 
pinMode(31,INPUT); 
pinMode(32,INPUT); 
pinMode(34,INPUT); 
pinMode(35,INPUT); 
pinMode(36,INPUT); 
pinMode(40,INPUT); 
pinMode(41,INPUT); 
pinMode(42,INPUT); 
pinMode(46,INPUT); 
pinMode(47,INPUT); 
pinMode(48,INPUT); 
pinMode(15,INPUT); 
pinMode(16,INPUT); 
pinMode(18,INPUT); 
pinMode(19,INPUT); 
Serial.begin(9600);   // Initiate a serial communication 
SPI.begin();      // Initiate  SPI bus 
mfrc522.PCD_Init();   // Initiate MFRC522 
Serial.println("Put your card to the reader..."); 
Serial.println(); 
} 
void loop()  
{ if ( ! mfrc522.PICC_IsNewCardPresent())  
{ 
return; 
} 
if ( ! mfrc522.PICC_ReadCardSerial())  
{return; 
} 
Serial.print("UID tag :"); 
String content= ""; 
byte letter; 
for (byte i = 0; i < mfrc522.uid.size; i++)  
{Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "); 
Serial.print(mfrc522.uid.uidByte[i], HEX); 
content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ")); 
content.concat(String(mfrc522.uid.uidByte[i], HEX)); 
} 
Serial.println(); 
Serial.print("Message : "); 
content.toUpperCase(); 
if (content.substring(1) == "50 69 2D A5") 
{Serial.println("Authorized access"); 
 Serial.println(); 
k=1; 
yesambulance (k); 
} 
if  (content.substring(1) != "50 69 2D A5") 
noambulance(); 
} 
