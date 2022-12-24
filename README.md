# Ecriture en cours...

# DISCLAIMER ⚠️ 
Ceci n'est pas un dispositif de sécurité normé. Il n'as passé aucun test sur le long terme concernant la sécurité de sa batterie ou sa fiabilité, ni sa resistance et sa réaction au feu.

# BAES
Il s'agit d'un BAES (Bloc Autonome d'Éclairage de Sécurité) type "Anti-panique" 🔦.  Il permet de fournir un éclairage suffisant pour se repérer dans une pièce qui viens de passer de "tout éclairé" au noir complet.

<img src="https://srv.fbr.ninja/index.php/s/59d8HRRpZ4zLcMe/preview"  width="30%" height="15%"> <img src="https://srv.fbr.ninja/index.php/s/zcdn7r4cgrpo3cX/preview"  width="30%" height="15%">



## <img src="https://srv.fbr.ninja/index.php/s/rXEXdGnkEeQiBBR/preview"  width="5%" height="5%"> Electronique

Système basé sur un accu 18650 et un module de charge TC4056A. On retrouve également en entrée un module step up/down XL6019 pour convertir le 18v DC d'un transformateur à 5V DC stabilisé.

<img src="https://srv.fbr.ninja/index.php/s/oPbzgWSaoQbBTHt/preview"  width="30%" height="15%">

Désolé pour la colle chaude, mais... ça marche.

<img src="https://srv.fbr.ninja/index.php/s/TRLnHRSpKrjxmqy/preview"  width="30%" height="15%">


Schémas :

<img src="https://srv.fbr.ninja/index.php/s/P3365ieYoo4LRiH/preview"  width="30%" height="15%"> <img src="https://srv.fbr.ninja/index.php/s/5raf2N2GmDrsXnN/preview"  width="30%" height="15%"> 

## <img src="https://srv.fbr.ninja/index.php/s/gdH2jfg5edNjQZP/preview"  width="5%" height="5%"> Code
Ajouter la plateforme Attiny dans votre IDE Arduino :

🖥️ [Tutoriel](https://go.fbr.ninja/progattiny)

▶️ Sélectionnez dans Tool > Boards > Attiny > Attiny25/45/85

▶️ Clock > Internal 1Mhz

▶️ Processor > Attiny85

💾 [Le code](https://github.com/Florian1548/BAES/blob/main/Code/BAES/BAES.ino)


## <img src="https://srv.fbr.ninja/index.php/s/BGzJTQcok5CJMzX/preview"  width="5%" height="5%"> Impression 3D

[Fichiers STL](https://github.com/Florian1548/BAES/tree/main/STL)

Réglages:

Boite: 15% infill

Façe avant: 5% infill
