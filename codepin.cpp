/*Code by Nitsugua38*/
#include <Keypad.h> // Vous devez ajouter la librairie «Keypad» à votre Arduino disponible sur mon GitHub

#define L1 9
#define L2 8
#define L3 7
#define L4 6
#define C1 5
#define C2 4
#define C3 3
#define C4 2

const byte lignes = 4;
const byte colonnes = 4;

char code[lignes][colonnes] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte broches_lignes[lignes] = {L1, L2, L3, L4};
byte broches_colonnes[colonnes] = {C1, C2, C3, C4};

Keypad clavier = Keypad( makeKeymap(code), broches_lignes, broches_colonnes, lignes, colonnes);

int green = 12;
int red = 11;
int compteur = 0;
char codepin[5];
String result = "69C#";


void setup(){
{
  Serial.begin(9600);
  Serial.println("Code by Nitsugua38");
}
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
}


void loop(){
 if (compteur < 4) {
    char touche = clavier.getKey();
    if (touche != NO_KEY)
    {
      codepin[compteur++] = touche;
      Serial.println(codepin);
    }
  } else {
    codepin[compteur] = '\0';
    if (result.equals(codepin)) {
      Serial.println("Code bon");
      digitalWrite(green, HIGH);
      delay(3000);
      digitalWrite(green, LOW);
    } else {
      Serial.println("Code faux");
      digitalWrite(red, HIGH);
      delay(3000);
      digitalWrite(red, LOW);
    }
    delay(5000);
      exit(0);
  }
}
