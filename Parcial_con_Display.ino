//Declaramos todos los Pines para el Display
int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinE=6;
int pinF=7;
int pinG=8;

//Declaramos la variable para almacenar nuestro dato
int dato;

 
void setup() {

  Serial.begin(9600); //Iniciamos Puerto Serial
  
  for (int x=0;x<=8;x++){ //Declaramos los pines del 1 al 8 como Salida
    pinMode(x, OUTPUT);
  }
  
    for (int x=0;x<=8;x++){ //Declaramos los pines en estado bajo
    digitalWrite(x, LOW);
  }
  
}

void loop(){
 
  if (Serial.available()){  //Leemos dato ingresado del Monitor Serial
    dato = Serial.parseInt(); //Guardamos el Dato Recibido
    Serial.println(dato);  //Mostramos que dato hay en la Variable

    //Nota: Si se ingresa una letra, se el display tendrá como resultado un 0

  if(dato == 0){ 
  //Número 0
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(500);
 }

  if(dato == 1){
  //Número 1
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  if(dato == 2){
  //Número 2
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 3){
  //Número 3
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);
  }
  
  if(dato == 4){
  //Número 4
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 5){
  //Número 5
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  } 

  if(dato == 6){
  //Número 6
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 7){
  //Número 7
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  if(dato == 8){
  //Número 8
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 9){
  //Número 9
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 10){
  //Letra A
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }  

  if(dato == 11){
  //Letra B
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }  

  if(dato == 12){
  //Letra C
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(500);
  }  

  if(dato == 13){
  //Letra D
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 14){
  //Letra E
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == 15){
  //Letra F
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato >= 16){
  //Intermitencia 7 y 8
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }
  
 }
}
