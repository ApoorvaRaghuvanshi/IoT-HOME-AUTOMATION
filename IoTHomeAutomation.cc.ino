String readString;
void setup(){
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);

}
void loop(){
  while(Serial.available()){
  delay(3);
  char c=Serial.read();
  readString+=c;

  }
  if(readString.length()>0){
    Serial.println(readString);
    if(readString=="1")            // turn ON light
    {digitalWrite(6,HIGH);}
    else if(readString=="2")       // turn OFF light
    {digitalWrite(6,LOW);}
    else if(readString=="3")       // turn ON fan
    {digitalWrite(5,HIGH);}
    else if(readString=="4")       // turn OFF fan
    {digitalWrite(5,LOW);}
    else if(readString=="5")       // turn ON both light and fan
    {digitalWrite(6,HIGH);
     digitalWrite(5,HIGH);}
    else if(readString=="6")       // turn OFF both light and fan
    {digitalWrite(6,LOW);
    digitalWrite(5,LOW);}
    readString="";


  }
}


