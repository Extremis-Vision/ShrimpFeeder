# Distributeur Automatique de Crevettes

---

## 💡 **Améliorations Futures**

Les prochaines améliorations du projet incluent les fonctionnalités suivantes :

- [ ] **Mini caisson pour ESP32** : Créer un caisson pour insérer l'ESP32 dans l'impression, afin de le protéger et de réduire le coût en filament.
- [ ] **Mini caisson pour ESP32 CAM** : Ajouter une version du caisson pour accueillir un ESP32 CAM.
- [ ] **Connexion à Home Assistant** : Modification du code pour permettre la connexion du distributeur à **Home Assistant**, pour un contrôle via l'interface de domotique.
- [ ] **Capteur DHT11** : Intégration d'un capteur DHT11 pour mesurer la température et l'humidité de l'environnement.

---

## 🧰 **Composants Utilisés**

- **Servo SG90 (modifié)** : Le servo moteur SG90 a été modifié en soudant directement les fils + et - sur le moteur pour une gestion de l'alimentation plus efficace.
- **Driver L298N** : Pour contrôler la vis sans fin.
- **ESP32** : Le microcontrôleur utilisé pour gérer l'ensemble du système.
- **Alimentation 12V** : Pour alimenter le moteur et l'ESP32.
- **Vis sans fin** : Utilisée pour distribuer les crevettes. À imprimer en 3D.
- **Aimants Néodyme (10mm diamètre, 5mm épaisseur)** : Deux espaces sont prévus pour insérer des aimants néodyme.
- **Capteur DHT11** : Un capteur de température et d'humidité sera ajouté pour mesurer l'environnement.

---

## 🗂️ **Structure du Dépôt**

Le projet est organisé en plusieurs dossiers pour faciliter la gestion des fichiers 3D, du code, et des circuits.

### 1. **3D-Files/**
Ce dossier contient les fichiers relatifs à la modélisation 3D du projet. Il est divisé en deux sous-dossiers :
- **Fusion360/** : Contient les fichiers `.f3d` qui peuvent être ouverts et modifiés avec Fusion 360.
- **STEP/** : Contient les fichiers `.step` qui peuvent être modifiés avec la plupart des logiciels de CAO et utilisés pour l'impression 3D.

Les fichiers STL pour imprimer la vis sans fin sont également inclus.

### 2. **Code/**
Le dossier **Code/** contient les fichiers nécessaires pour programmer l'ESP32 et faire fonctionner le distributeur. Le fichier principal est très simple, mais il sera mis à jour pour inclure la gestion du capteur DHT11 et l'intégration à Home Assistant.

### 3. **Circuit/**
Le dossier **Circuit/** contient un fichier `.png` du schéma de câblage du circuit ainsi qu'un fichier pour **Circuit Designer** (logiciel de conception de circuits).

### 4. **Images/**
Le dossier **Images/** contient des captures d'écran et des photos du projet fini. Cela vous donnera une idée de ce à quoi ressemble l'assemblage complet une fois tout monté.

---

## ⚙️ **Instructions**

### 1. **Assemblage du Distributeur**
- Imprimez les pièces 3D à l'aide des fichiers `.stl` ou modifiez les fichiers `.step` si vous avez besoin d'ajuster la conception.
- Utilisez le schéma électronique pour connecter les composants.
- Assurez-vous que le servo SG90 est correctement connecté et modifié selon les instructions.

### 2. **Programmation**
- Ouvrez le fichier de code dans votre IDE (par exemple, Arduino IDE).
- Téléversez le code sur l'ESP32.
- Actuellement, le code contrôle le moteur via l'ESP32 pour faire tourner la vis sans fin et distribuer les crevettes.
- Les mises à jour futures permettront d'ajouter un capteur DHT11 et de connecter le système à **Home Assistant**.

### 3. **Modifications futures**
- Vous pouvez ajouter un capteur de température et d'humidité (DHT11) et modifier le code pour lire les données de ce capteur.
- Le modèle 3D sera modifié pour inclure un espace pour ranger l'ESP32, et des améliorations seront apportées pour réduire le coût en filament.

---

## ✅ **Conclusion**

Ce projet offre une solution pratique pour créer un distributeur automatique de crevettes. Il est modulaire, facile à assembler, et personnalisable. Vous pouvez ajouter des capteurs et des fonctionnalités supplémentaires, ainsi que modifier les fichiers 3D pour répondre à vos besoins spécifiques.
