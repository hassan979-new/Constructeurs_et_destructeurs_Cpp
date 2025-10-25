
# 🧮 **Héritage**

## 📘 Description

Ce document regroupe deux projets C++ illustrant des concepts fondamentaux de la programmation orientée objet :

- Utilisation des constructeurs (par défaut, paramétré, copie)

- Encapsulation des données

- Gestion manuelle de la mémoire dynamique

- Affichage structuré et suivi du cycle de vie des objets
## 📂 Project Structure
````
projets
├── CompteBancaire/
│   └── compte.cpp
├── Buffer/
│   └── buffer.cpp
└── README.md
````


## ⚙️ Features

### **1.** Compte Bancaire – Constructeurs et cycle de vie
Classe CompteBancaire avec :

- Attributs privés : titulaire, sold

Trois constructeurs :

- Par défaut → initialise à "Inconnu" et 0.0

- Paramétré → initialise avec des valeurs données

- Par copie → duplique un objet existant

Méthode afficher() pour visualiser les données

Destructeur avec message de destruction
### **2.** Buffer – Allocation dynamique et copie profonde
Classe Buffer avec :

- Attributs privés : size, data (tableau dynamique)

Trois constructeurs :

- Par défaut → buffer vide

- Paramétré → allocation et initialisation à 0

- Par copie → duplication du contenu avec affichage hexadécimal

Méthodes :

- fill(unsigned char) → remplit le buffer

- printHex() → affiche le contenu en hexadécimal

- getSize() → retourne la taille

- Destructeur → libère la mémoire et affiche un message

## 🖥️ Example Execution

### Gestion d'un Compte Bancaire :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/4f0a45a1-8f9f-40a4-ab4e-fb50ba400b04" />
### Gestion d’un Buffer Dynamique : 
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/fea7914d-4b2c-4e34-8bad-ea394cd8a9ce" />
## 💡 Concepts Practiced

- L’utilisation des constructeurs pour initialiser les objets

- La copie profonde pour éviter les conflits mémoire

- La gestion manuelle des ressources avec new et delete

- Le suivi du cycle de vie des objets avec des messages explicites

## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Fondamentaux et Concepts Avancés de la Programmation Java – TP1
- 🎓 Instructor	Mr.LACHGAR
- 📅 25	October 2025
