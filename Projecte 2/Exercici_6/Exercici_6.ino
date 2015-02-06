 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int test = 32767;


 //*******  Setup  ********************************************************
 void setup()
 {
    Serial.begin(9600); 
   
    Serial.print("Your HD is "); 
    Serial.print(drive_Gb);
    Serial.println("Gb large.");

    drive_Mb = drive_Gb;
    drive_Mb = 1024 * drive_Mb;
    
    Serial.print("It can store "); 
    Serial.print(drive_Mb);      
    Serial.println("Megabytes!");
 }


 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
