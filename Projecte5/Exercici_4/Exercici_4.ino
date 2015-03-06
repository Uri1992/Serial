 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int hores;
int eurosPerH = 20;
int resultatBrut;
int resultatFinal;

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);  
  Serial.println("Quantes hores de treball?");
 }
 //******  Loop  **********************************************************
 void loop ()
 {
   while (Serial.available() > 0) {  
    hores = Serial.parseInt(); 
    if (hores <38)
    {
    resultatBrut = eurosPerH * hores;
    }
    else
    {
    resultatBrut = eurosPerH * 1.5 * hores;
    }
    
    
    Serial.println(resultatBrut);

    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Quantes hores de treball?");
  }
 }
  
  
