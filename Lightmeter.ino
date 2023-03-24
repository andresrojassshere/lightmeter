// C++ code
//reservamos que pin vamos a utilzar. Ponemos el numero del pin que se quiere configurar, el numero que esta escrito en la tarjeta Arduino.
const int pinLED1 = 2;
const int pinLED2 = 3;
const int pinLED3 = 4;
const int pinLED4 = 5;
const int pinLED5 = 6;
int pinPhoto = A0;
int photoresistorValue = 0;

//en setup vamos a poner todo lo que corre una sola vez
void setup()
{
  // inicializamos el pin digital como OUTPUT 
  pinMode(pinLED1, OUTPUT); //ponemos el nombre del pin y el modo (este caso OUTPUT)
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  Serial.begin(9600); //abrimos el puerto serie y especificamos la velocida de transmisión, la velocidad estandar es de 9600
}

//en loop vamos a poner todo lo que se ejecuta un número infinito de veces
void loop()
{
  photoresistorValue = analogRead(pinPhoto); // el photovalue se utiliza para leer un valor de un pin de entrada analógica.
  
  //Hacemos un if para decir que si
  if( photoresistorValue > 200){  //dentro del parentesis ponemos la condicion
    digitalWrite(pinLED1, HIGH); //ponemos el nombre del pin y el estado (este caso HIGH es es el nivel del voltaje)
    // con el delay hacemos que espere, en este caso un segundo
  } else {
    digitalWrite(pinLED1, LOW); // el LED se apaga haciendo que el voltaje baje (LOW)
   
  }
  
  if( photoresistorValue > 300){
    digitalWrite(pinLED2, HIGH);
    
  } else {
    digitalWrite(pinLED2, LOW);
    
  }
  
  if( photoresistorValue > 400){
    digitalWrite(pinLED3, HIGH);
  
  } else {
    digitalWrite(pinLED3, LOW);
    
  }
  
  if( photoresistorValue > 500){
    digitalWrite(pinLED4, HIGH);
    
  } else {
    digitalWrite(pinLED4, LOW);
    
  }
  
  if( photoresistorValue > 600){
    digitalWrite(pinLED5, HIGH);
    
  } else {
    digitalWrite(pinLED5, LOW);  
  }
  
}