#define leds 14
#define botoes 13

int est=0;
int estAnt=0;
int saidas=0;

void setup(){
  
  pinMode(leds,OUTPUT);
  pinMode(botoes,INPUT_PULLUP);
  
  digitalWrite(leds,LOW);
}
  
void loop(){
   est=digitalRead(botoes); //lê o botão

  if ( est==0 && estAnt==0)   // só mudará o estado do led na transição do botão de não apertado para apertado 

  {  //troca o turno
    saidas=1-saidas; //inverte o estado do led
    delay(20);  //de-bouncing
  }

  estAnt=1-est; //armazena o estado anterior do botão

  if( saidas==1)

  {
    digitalWrite(leds, HIGH); // led on

  }

  else{
    digitalWrite(leds,LOW); // led off


  }}
