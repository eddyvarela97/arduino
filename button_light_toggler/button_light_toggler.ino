int pinBtn = 2;//Variable de tipo entero que contiene el numero del pin al cual conectamos la señal de un botón
int pinLed = 13;//Variable de tipo entero que contiene el numero del pin al cual conectamos la señal de un led

void setup() {
  
  Serial.begin(9600);//Iniciamos la comunicación serial
  pinMode(pinBtn, INPUT);//Configuramos el pin del boton como entrada
  pinMode(pinLed, OUTPUT);//Configuramos el pin del led como salida
  
}

void loop() {
  
  if( digitalRead(pinBtn) ==0 ){//Si la lectura al pin del botón regresa un cero entramos al if y ejecutamos el código, si no, nos saltamos el código del if
    digitalWrite( pinLed, !digitalRead(pinLed) );//Obtenemos la lectura del pin del Led para escribir en el mismo pin el valor opuesto 0->1 1->0
    Serial.println( "El estado del led ha cambiado" );//Imprimimos en el monitor serie
    delay(300);//Esperamos 0.3 segundos antes de salir del if para evitar que un solo botonazo cause varios cambios de estado en el pin del led  
  }
  
}
