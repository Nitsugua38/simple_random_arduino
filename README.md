# Arduino
Tout mes projets Arduino sont là.

### Capteurs_ultrasons
Toutes les 2 secondes le capteur mesure la distance le séparant de l'obstacle :
si elle est inférieure à 20 la led verte sallume avec une sirène longue ;
si elle est comprise entre 20 et 40 la led bleu sallume avec 2 sirène courtes ;
si elle set comprise entre 40 et 60 la led jaune sallume avec un tic tac ;
si elle est supérieure à 60 la led rouge s'allume avec 2 tic tac.

### Code PIN
Tapez sur le clavier un code faux et la led rouge s'allume avec un message sur le moniteur série.
Tapez le bon code : 69C# et la led verte s'allume avec un message sur le moniteur série.

### Chrono

Un simple chronomètre qui débute lorsque vous alimentez votre carte. Afficheur 7 segemnts **4 digits** ; utilise la librairie SevSeg (Seven Segment) disponible dans le dossier.
