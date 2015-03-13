 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int hores;
int eurosPerH = 20;
int eurosDeMesPerH = 30;
int horesDeMes;
int resultatN;
int resultatDeMes;
float resultatBrut;
float resultatFinal;

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
    Serial.print(hores);
    Serial.println(" hores de treball");
    if (hores <38)
    {
      resultatBrut = eurosPerH * hores;
    }
    else
    {
      horesDeMes = hores - 37;
      resultatN = eurosPerH * 37;
      resultatDeMes= eurosDeMesPerH * horesDeMes; 
      resultatBrut = resultatN + resultatDeMes;
    }
    
    if (resultatBrut <= 800)
    {
      resultatFinal = resultatBrut - resultatBrut * 0.05;
    }
    else
    {
      resultatFinal = resultatBrut - resultatBrut * 0.1;  
    }
    
    Serial.print(resultatFinal);
    Serial.println(" euros");

    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Quantes hores de treball?");
  }
 }
  
  
