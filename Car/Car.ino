void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

int income=0;
void loop()
{
  
 income=Serial.read();
  
 switch(income)
 {
   case 'f':
      forward();
      break;
    case 'b':
      backward();
      break;
    case 'l':
      left();
      break;
    case 'r':
      right();
      break;
    default:break;
 }
}
void forward()
 {
  digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW); 
 }
  void backward()
 {
  digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);  
 }
  void left()
 {
  digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);   
 }
  void right()
 {
  digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);  
 }
