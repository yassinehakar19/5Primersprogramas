/************************************************************************
**                                                                     **
**                             TITOL: Regulador                        **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 07/12/2016  **
************************************************************************/

//****************************INCLUDE ***********************************

   

//*************************** VARIABLES *********************************
 int led1 = 5;
 int led2 = 6;
 int led3 = 7;
 int led4 = 8;
 int led5 = 9;
 int led6 = 10;
 int led7 = 11;




//**************************** SERUP ************************************


void setup() {                      //configura el fianl de salida 

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT); 
  
}

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama 
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 delay(500);


 
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
 delay(500);






//****************************** FUNCIONES ******************************
}
