# Projet EL MAMOUN-GACHET - 2022

Ce projet est un travail collaboratif entre Kawtar El Mamoun et Théo Gachet. Notre objectif était de développer une application en C, permettant de prétraiter les séries temporelles fournies pour prédire et mieux expliquer l'évolution de la caractéristique cible (c'est-à-dire le taux moyen d'élimination de matière en surface) à l'aide des données historiques. Ce projet ayant été codé en une nuit, merci de ne pas tenir compte des quelques erreurs d'optimisation quant au code.

## Documents du projet:
- **Report EL MAMOUN-GACHET.pdf**: Rapport complet du projet en réponse à l'énoncé fourni.
- **Presentation EL MAMOUN-GACHET**: Support de présentation utilisé lors de la soutenance devant le corps enseignant.
- **Sujet.pdf**: Énoncé initial distribué lors du cours d'Algorithmique et Programmation.

## Répertoires:
- **data_trié**: Contient 19 fichiers `.csv` représentant les données des 19 séries temporelles triées.
- **dataset**: Rassemble l'ensemble des fichiers `.csv` fournis par l'énoncé (par exemple, CMP-training-0xx.csv).
- **histogrammes_tracés**: Dossier dédié aux histogrammes générés pour la question 3, associés aux 19 séries temporelles.

## Fichiers:
- **agregation_unique.csv**: Liste des WAFER_ID uniques. Les occurrences répétées sont consolidées en un tableau.
- **agregation.csv**: Liste des WAFER_ID, incluant les répétitions.
- **CMP-training-removalrate.csv**: Fichier spécifique fourni pour traiter la question 5.
- **concat.c**: Code en C permettant de fusionner tous les fichiers texte du dataset en un seul (`resultat.csv`).
- **histogram.py**: Script Python pour visualiser les histogrammes mentionnés à la question 3 (voir rapport PDF pour plus de détails).
- **histogrammes.txt**: Sortie console après exécution du code pour la question 3, pour chaque série temporelle.
- **histogrammes ksigma.txt**: Même sortie que précédemment, mais après application de la règle du ksigma, discutée à la question 2.
- **main.c**: Code source principal du projet.
- **README.txt**: Ce fichier contenant les informations générales et descriptives du projet.
- **resultats.csv**: Compilation de tous les fichiers du dataset.
- **saut_ligne.csv**: Fichier nécessaire pour assurer le bon fonctionnement de `concat.c`.
- **statistiques descriptives.txt**: Sortie console suite à l'exécution du code de la question 1.
- **statistiques descriptives ksigma.txt**: Sortie similaire à la précédente, mais post-application de la règle du ksigma (question 2).

---

Pour toutes questions ou clarifications supplémentaires concernant le projet, veuillez vous référer au rapport ou contacter les auteurs directement.
