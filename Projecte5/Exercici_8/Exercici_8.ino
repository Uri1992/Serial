/*************************************************************************
**                                                                      **
**                 Descripció programa                                  **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

int numPrograma;
float r1, r2;           
float rSerie, rParalel;
int valor;           
int xifres;
int resultat;
int hores;
int eurosPerH = 20;
int eurosDeMesPerH = 30;
int horesDeMes;
int resultatN;
int resultatDeMes;
float resultatBrut;
float resultatFinal;
int cm;

//*******  Setup  ********************************************************
 void setup()
 { 
   Serial.begin(9600);
   Serial.println("Escull el numero de programa que es vol executar");  
 }
//******  Loop  **********************************************************
 void loop ()
 {
 
  
   switch (numPrograma)
     {
     case 0:
        while (Serial.available() > 0)
        {
           numPrograma = Serial.parseInt();
           
        }
        break;
     case 1:
       {
       Serial.println("Entra el valor de R1 i R2 (separats per una coma)");
       numPrograma = 7;
       break;
       }
     
     case 2:
       {
       Serial.print("Entrar un numero, ");
       programa2();
       break;
       }
     
     case 3:
       {
       Serial.println("Entrar un numero");
       programa3();
       break;
       }
     
     case 4:
       {
       Serial.println("Quantes hores de treball?");
       programa4();
       break;
       }
     
     case 5:
       {
       Serial.println("Quina mida en cm?");
       programa5();
       break;
       }
     case 7:
       programa1();
       break;
     default:
       {
       Serial.println("No correspon a cap programa");
       }
     }
   }

  
  void programa1()
  {
    while (Serial.available() > 0)
    {
    r1 = Serial.parseInt();
    Serial.print("R1 = ");  
    Serial.print(r1);  
    
    r2 = Serial.parseInt();
    Serial.print("  R2 = "); 
    Serial.println(r2);  
    
      { 
      rSerie = r1 + r2;
      rParalel = 1/((1/r1)+(1/r2));
      }
    Serial.print("Serie = ");
    Serial.print(rSerie);
    Serial.print("  Paralel = ");
    Serial.println(rParalel);
    Serial.println("");
    Serial.println("Escull el numero de programa que es vol executar");  
    numPrograma = 0;
    }
  }
  
void programa2()
  {
    valor = Serial.parseFloat(); 
    Serial.print(valor);
    if (valor % 2 == 0)
      {
      Serial.println(" es parell");  
      }
    
    else 
      { 
      Serial.println(" es senar");
      }
  
  }
  
void programa3()
  {
    while (Serial.available() > 0) {  
    valor = Serial.parseInt(); 
    
    Serial.print("El numero "); 
    Serial.print(valor);  
    Serial.print(" te ");
    
    resultat = valor;
    
    for  (xifres = 0; resultat != 0; xifres++)
      {
      resultat = valor / 10 ;
      valor = valor / 10;
      }
    
    Serial.print(xifres);
    Serial.println(" xifres");
    
    Serial.read() == '\n';
    Serial.println("");
    }
  }
  
void programa4()
  {
    while (Serial.available() > 0)
    {  
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
    }
  }
  
void programa5()
  {
    while (Serial.available() > 0)
    {  
    cm = Serial.parseInt(); 
    Serial.print("El cargol amb mida de ");
    Serial.print(cm);
    Serial.print(" cm es ");
    
    if (cm < 3 && cm > 0)
      {
      Serial.print("petit");
      }
      
    else if (cm < 5 && cm > 2)
      {
      Serial.print("mitja");
      } 
     
    else if (cm < 8 && cm > 4) 
      {
      Serial.print("gran");
      }  
        
    else if (cm < 11 && cm > 7)
      {
      Serial.print("molt gran");
      }
    
    else
      {
      Serial.print("incorrecte"); 
      } 
    
    Serial.read() == '\n';
    Serial.println("");
    }
  }
