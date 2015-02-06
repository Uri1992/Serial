 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

long drive_Gb = 100;
long drive_Mb;

 //*******  Setup  ********************************************************
 void setup()
 {
    Serial.begin(9600); 
   
    Serial.print("Your HD is "); 
    Serial.print(drive_Gb);
    Serial.println("Gb large.");

    drive_Mb = 1024 * drive_Gb;
    
    Serial.print("It can store "); 
    Serial.print(drive_Mb);      
    Serial.println("Megabytes!");
 }


 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
