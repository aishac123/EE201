void setup() {
  // put your setup code here, to run once:
   pinMode(2, OUTPUT); //e
   pinMode(3, OUTPUT);//d
   pinMode(4, OUTPUT);//c
   pinMode(5, OUTPUT);//dot
   pinMode(6, OUTPUT); //g
   pinMode(7, OUTPUT);//f
   pinMode(8, OUTPUT); //a
   pinMode(9, OUTPUT); //b
}

void loop() {
  //9
  digitalWrite(8, LOW);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, HIGH);//e
  digitalWrite(7, LOW);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500);
  //8

  digitalWrite(8, LOW);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, LOW);//e
  digitalWrite(7, LOW);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500);
  //7
  digitalWrite(8, LOW);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, HIGH);//d
  digitalWrite(2, HIGH);//e
  digitalWrite(7, HIGH);//f
  digitalWrite(6, HIGH);//g
  digitalWrite(5, HIGH);//dot
  delay(1500); 
  //6
  digitalWrite(8, LOW);//a
  digitalWrite(9, HIGH);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, LOW);//e
  digitalWrite(7, LOW);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500);
  //5
  digitalWrite(8, LOW);//a
  digitalWrite(9, HIGH);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, HIGH);//e
  digitalWrite(7, LOW);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500); 
  //4
  digitalWrite(8, HIGH);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, HIGH);//d
  digitalWrite(2, HIGH);//e
  digitalWrite(7, LOW);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500); 
  //3
  digitalWrite(8, LOW);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, LOW);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, HIGH);//e
  digitalWrite(7, HIGH);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500); 
  //2
  digitalWrite(8, LOW);//a
  digitalWrite(9, LOW);//b
  digitalWrite(4, HIGH);//c
  digitalWrite(3, LOW);//d
  digitalWrite(2, LOW);//e
  digitalWrite(7, HIGH);//f
  digitalWrite(6, LOW);//g
  digitalWrite(5, HIGH);//dot
  delay(1500);
  //1
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(1500);
  
}


