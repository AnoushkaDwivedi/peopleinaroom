int a1=5,a2=6,led=7;
int max=5,n=0;
int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(a1,INPUT);
  pinMode(a2,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(n<=max)
  {
    if(digitalRead(a1==HIGH))
    {
      delay(1000);
      while(digitalRead(a2==LOW))
      {
        n++;
        Serial.println("there are ");
        Serial.print(n);
        Serial.println("people in the room at this moment");
        i=255/(max+1-n);
        analogWrite(led,i);
       }
      
     }
     if(digitalRead(a2==HIGH))
     {
      delay(1000);
      while(digitalRead(a1==LOW))
      {
        n--;
        Serial.println("there are");
        Serial.print(n);
        Serial.println("people in the room.");
        i=255/(max+1-n);
        analogWrite(led,i);
        }
     }
   }
}
