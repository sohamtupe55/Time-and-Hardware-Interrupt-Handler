#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
// user-defined signal handler for time-intrrupt.
void alarm_handler(int signo){
  if(signo == SIGALRM){
    printf ("Alarm\n");
  }
}

// user-defined signal handler for hardware-intrrupt by CTRL+C
void intrrupt_handler(int signo){
  if(signo == SIGINT){
    printf ("CTRL+C pressed!\n");
  }
}

// user-defined signal handler for hardware-intrrupt by CTRL+Z
void stop_handler(int signo){
  if(signo == SIGTSTP){
    printf ("CTRL+Z pressed!\n");
    exit(1);
  }
}
int main (void){
// register the all the user-defined signal handler
  if(signal(SIGALRM, alarm_handler) == SIG_ERR){
    printf ("failed to register alarm handler.");
    exit (1);
  }

  if(signal(SIGINT, intrrupt_handler) == SIG_ERR){
    printf ("failed to register intrrupt handler.");
    exit (1);
  }
  if(signal(SIGTSTP, stop_handler) == SIG_ERR){
    printf ("failed to register stop handler.");
    exit (1);
  }
  
  while(1){
    alarm(2) ; //generate SIGALRM 
    sleep(20); //always greater than alarm or the program will enter infinite loop!
  }
}
