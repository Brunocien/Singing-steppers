#include <Tone.h>

Tone tone1;
Tone tone2;
Tone tone3;
 int t0 = 1250;
  int t1 = 625;
  int t2 = 317;
  int t3 = 156;

void setup()
{
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
   tone1.begin(2);
  tone2.begin(3);
  tone3.begin(4);
  int t0 = 1250;
  int t1 = 625;
  int t2 = 317;
  int t3 = 156;
}

void loop()
{

  tone1.play(NOTE_E2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t0);
   tone3.play(NOTE_B3,t0);
  }
 tone2.stop();
 tone3.stop();
 
 tone1.play(NOTE_FS2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t0);
   tone3.play(NOTE_B3,t0);
  }
 tone2.stop();
 tone3.stop();
  
 tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();
   
 tone1.play(NOTE_B2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();
   
 tone1.play(NOTE_A2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();
    
 tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();

    
 tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();
  tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();

 // repete

 tone1.play(NOTE_E2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t0);
   tone3.play(NOTE_B3,t0);
  }
 tone2.stop();
 tone3.stop();
 
 tone1.play(NOTE_FS2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t0);
   tone3.play(NOTE_B3,t0);
  }
 tone2.stop();
 tone3.stop();
  
 tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();
   
 tone1.play(NOTE_B2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();
   
 tone1.play(NOTE_A2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();
    
 tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();

    
 tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();
  tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();

 // Melodia

  tone1.play(NOTE_E2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t0);
   tone3.play(NOTE_B3,t0);
  }
 tone2.stop();
 tone3.stop();

  tone1.play(NOTE_FS2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t1);
   tone3.play(NOTE_A4,t1);
  }
 tone2.stop();
 tone3.stop();
   tone1.play(NOTE_FS2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_G3,t1);
   tone3.play(NOTE_B4,t1);
  }
 tone2.stop();
 tone3.stop();

 tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();

    
 tone1.play(NOTE_B2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t1);
   tone3.play(NOTE_FS4,t1);
  }
 tone2.stop();
 tone3.stop();
 
  tone1.play(NOTE_B2,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t2);
   tone3.play(NOTE_D4,t2);
  }
 tone2.stop();
 tone3.stop();

  tone1.play(NOTE_B2,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A3,t2);
   tone3.play(NOTE_E4,t2);
  }
 tone2.stop();
 tone3.stop();
   
 tone1.play(NOTE_A2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();

  tone1.play(NOTE_G2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t1);
   tone3.play(NOTE_CS4,t1);
  }
 tone2.stop();
 tone3.stop();

   tone1.play(NOTE_G2,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t2);
   tone3.play(NOTE_FS4,t2);
  }
 tone2.stop();
 tone3.stop();

   tone1.play(NOTE_G2,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t2);
   tone3.play(NOTE_A4,t2);
  }
 tone2.stop();
 tone3.stop();

    tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();
     tone1.play(NOTE_D2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();

 

 //fim primeira parte

      tone1.play(NOTE_E2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_E3,t1);
   tone3.play(NOTE_B4,t1);
  }
 tone2.stop();
 tone3.stop();

       tone1.play(NOTE_E2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_B4,t1);
   tone3.play(NOTE_D5,t1);
  }
 tone2.stop();
 tone3.stop();

        tone1.play(NOTE_FS2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_B4,t1);
   tone3.play(NOTE_B5,t1);
  }
 tone2.stop();
 tone3.stop();

        tone1.play(NOTE_FS2,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_B4,t1);
   tone3.play(NOTE_A5,t1);
  }
 tone2.stop();
 tone3.stop();

       tone1.play(NOTE_G2,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_FS4,t0);
  }
 tone2.stop();
 tone3.stop();


 
        tone1.play(NOTE_B3,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t1);
   tone3.play(NOTE_FS4,t1);
  }
 tone2.stop();
 tone3.stop();


       tone1.play(NOTE_B3,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t2);
   tone3.play(NOTE_D4,t2);
  }
 tone2.stop();
 tone3.stop();

        tone1.play(NOTE_B2,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t2);
   tone3.play(NOTE_E4,t2);
  }
 tone2.stop();
 tone3.stop();

        tone1.play(NOTE_A3,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t0);
   tone3.play(NOTE_CS4,t0);
  }
 tone2.stop();
 tone3.stop();

         tone1.play(NOTE_G3,t1);
 while(tone1.isPlaying()){
   tone2.play(NOTE_FS3,t1);
   tone3.play(NOTE_CS4,t1);
  }
 tone2.stop();
 tone3.stop();

         tone1.play(NOTE_G3,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t2);
   tone3.play(NOTE_A5,t2);
  }
 tone2.stop();
 tone3.stop();

          tone1.play(NOTE_G3,t2);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t2);
   tone3.play(NOTE_FS4,t2);
  }
 tone2.stop();
 tone3.stop();
 

         tone1.play(NOTE_D3,t0);
 while(tone1.isPlaying()){
   tone2.play(NOTE_A4,t0);
   tone3.play(NOTE_E4,t0);
  }
 tone2.stop();
 tone3.stop();

 digitalWrite(8,HIGH);

delay(1000);
}
