/******************************************************************
**                                                               **
**                          El_Nombre                            **      
**                                                               **
**                                                               ** 
**  BALTES MARIUS                            DATA: 19 /02/2018   **            
*******************************************************************/
//**************************** INCLUDE ****************************


//*************************** VARIABLES ***************************
const int ledA = 5;          // donar nom al pin 5 de l’Arduino
const int ledB = 6;          // donar nom al pin 6 de l’Arduino
const int ledC = 7;          // donar nom al pin 7 de l’Arduino
const int ledD = 8;          // donar nom al pin 8 de l’Arduino
const int ledE = 9;          // donar nom al pin 9 de l’Arduino
const int ledF = 10;         // donar nom al pin 10 de l’Arduino
const int ledG = 11;         // donar nom al pin 11 de l’Arduino

//***************************** SETUP *****************************


void setup(){ 
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);     
  pinMode(ledD, OUTPUT);     
  pinMode(ledE, OUTPUT);     
  pinMode(ledF, OUTPUT);     
  pinMode(ledG, OUTPUT);     
 
    
  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  digitalWrite(ledA, LOW);     
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, LOW);     
  digitalWrite(ledG, LOW);     
          
  }

//******************************* LOOP ****************************
  
void loop() { 
  digitalWrite(ledA, HIGH);
  digitalWrite(ledC, HIGH); 
  digitalWrite(ledE, HIGH);
  delay(500);
  digitalWrite(ledA, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledE, LOW);
  delay(500);

  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);        
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledA, LOW);     
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);          
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, LOW);     
  digitalWrite(ledG, LOW);
  delay(500);
    
  digitalWrite(ledC, HIGH);      
  digitalWrite(ledE, HIGH);        
  digitalWrite(ledG, HIGH);
  delay(500);
 
  digitalWrite(ledC, LOW);         
  digitalWrite(ledE, LOW);         
  digitalWrite(ledG, LOW);
  delay(500);

  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  delay(500);

  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
   delay(500);
   
     
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  delay(500); 

  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, LOW); 
  delay(500);    

  digitalWrite(ledA, HIGH);     
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);        
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledA, LOW);     
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);        
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  delay(500);

     
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  delay(500);

  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);        
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledA, LOW);     
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);          
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, LOW);     
  digitalWrite(ledG, LOW);
  delay(500);

    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  delay(500);

  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);
  delay(500);

         
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  delay(500);

  digitalWrite(ledA, HIGH);       
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledA, LOW);       
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  delay(500);

digitalWrite(ledA, HIGH);     
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);        
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  delay(500);

  digitalWrite(ledA, LOW);     
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);        
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  delay(500);
  

  
}

//******************************FUNCIONS***************************
