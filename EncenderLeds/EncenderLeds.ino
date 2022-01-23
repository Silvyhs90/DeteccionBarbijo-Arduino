// Práctica encender y apagar un LED
//int buzzerPin=8;
const int LED=34;
const int LED2=35;
const int LED3=36;
const int LED4=37;
const int LED5=38;
const int LED6=39;
const int LED7=42;
const int LED8=43;
int option;

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);
    pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
    pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
    pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
}

void loop()
{
  if(Serial.available() > 0){
    option = Serial.read();
    Serial.println(option);
    if(option == 'P'){
     digitalWrite(LED, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
     digitalWrite(LED4, HIGH);
     digitalWrite(LED5, HIGH);
     digitalWrite(LED6, HIGH);
     digitalWrite(LED7, HIGH);
     digitalWrite(LED8, HIGH);

    }
    if(option == 'N'){
     digitalWrite(LED, LOW);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
     digitalWrite(LED4, LOW);
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
     digitalWrite(LED7, LOW);
     digitalWrite(LED8, LOW);
    }
  }
}
