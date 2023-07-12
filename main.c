#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// credits             : Theo GACHET & Kawtar EL MAMOUN

// remarque pratique   : il est nécesaire d'exécuter gcc -o main main.c -lm via la console pour implémenter pow() et sqrt()
// remarque esthétique : il est recommandé d'utiliser Visual Studio Code plutôt que gedit pour visualiser ce code en raison des
//                       nombreuses fonctions qui peuvent être "réduites" et évitent ainsi les gros blocs de codes rébarbatifs

// dans la suite, on modélisera une série temporelle (i.e. une colonne du fichier "resultat.csv") par une liste chaînée
// ainsi, puisque l'on souhaite exploiter 19 colonnes, on va travailler sur 19 listes chaînées

// chaque Element d'une telle liste chaînée aura la structure suivante :
typedef struct Element Element;
struct Element
{
    double data;
    Element *suivant;
};

// cette structure Liste contient un pointeur vers le premier élément de la liste
typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

// on initialise ensuite le premier élément de chaque liste (ici on s'intéresse à la série temporelle "USAGE_OF_BACKING_FILM")
Liste *init_USAGE_OF_BACKING_FILM()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste)); // on alloue de la mémoire de manière dynamique avec la fonction malloc()
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL) // on controle ici l'allocation dynamique
        exit(EXIT_FAILURE);

    element->data = 9302.5;  // la première ligne du dataset nous donne USAGE_OF_BACKING_FILM = 9302.5
    element->suivant = NULL; // suivant pointe vers NULL car le 1er élément est aussi le dernier pour le moment
    liste->premier = element;

    return liste;
}

// les fonctions d'initialisation ci-dessous fonctionnent de la même manière pour les 18 autres séries temporelles
Liste *init_USAGE_OF_DRESSER()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 534.074074074;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_USAGE_OF_POLISHING_TABLE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 292.592592593;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_USAGE_OF_DRESSER_TABLE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 2666.25;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_PRESSURIZED_CHAMBER_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 67.1428571429;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_MAIN_OUTER_AIR_BAG_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 346.8;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_CENTER_AIR_BAG_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 101.875;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_RETAINER_RING_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 1739.4;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_RIPPLE_AIR_BAG_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 15.2272727273;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_USAGE_OF_MEMBRANE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 110.306324111;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_USAGE_OF_PRESSURIZED_SHEET()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 2790.75;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_SLURRY_FLOW_LINE_A()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 2.22222222222;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_SLURRY_FLOW_LINE_B()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 0.909090909091;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_SLURRY_FLOW_LINE_C()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 565.6;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_WAFER_ROTATION()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 34.6511627907;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_STAGE_ROTATION()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 0.0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_HEAD_ROTATION()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 156.8;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_DRESSING_WATER_STATUS()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 1.0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
Liste *init_EDGE_AIR_BAG_PRESSURE()
{
    Liste *liste = (Liste *)malloc(sizeof(Liste));
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL)
        exit(EXIT_FAILURE);

    element->data = 60.9090909091;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}

// insertion() permet d'insérer un élément en paramètre au début d'une liste chaînée
void insertion(Liste *liste, double new_data)
{
    Element *nouveau = (Element *)malloc(sizeof(Element)); // on commence par créer ce nouvel élément et lui allouer de la mémoire

    if (liste == NULL)
        exit(EXIT_FAILURE);

    nouveau->data = new_data;          // on attribue la valeur que l'on souhaite ajouter à un élément
    nouveau->suivant = liste->premier; // puis, on insère l'élément au début de la liste chaînée via les pointeurs
    liste->premier = nouveau;
}

// supprimer_premier_element() permet de supprimer le premier élément d'une liste chaînée
void supprimer_premier_element(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    if (liste->premier != NULL) // on s'assure que la liste n'est pas initialement vide
    {
        Element *aSupprimer = liste->premier;     // le premier élément est stocké afin d'être supprimé plus tard
        liste->premier = liste->premier->suivant; // le deuxième élément de la liste devient le premier
        free(aSupprimer);                         // on supprime l'élément correspondant au pointeur aSupprimer
    }
}

// supprimer_element() permet de supprimer la première occurence d'une donnée dans une liste chaînée
int supprimer_element(Liste *liste, double value)
{
    Element *precedent, *actuel; // il est ici nécessaire de stocker la valeur précédent celle que l'on veut supprimer puisque
                                 // l'élément à supprimer peut être situé en milieu de liste et on va devoir "l'ignorer"
    if (liste == NULL)
        exit(EXIT_FAILURE);

    precedent = liste->premier;

    if (precedent->data == value) // cas spécial : on vérifie si l'élément à supprimer est le premier de la liste
    {
        supprimer_premier_element(liste); // dans ce cas, on utilise la fonction définie précédemment
        return 0;
    }

    actuel = precedent->suivant; // dans le cas contraire, on poursuit le parcours de notre liste chaînée

    while (actuel != NULL)
    {
        if (actuel->data == value) // cette condition permet de "trouver" l'élément à supprimer
        {
            precedent->suivant = actuel->suivant; // en utilisant les pointeurs, on ignore (on "saute") l'élément à supprimer
            free(actuel);                         // puis on le supprime en libérant son espace mémoire
            break;
        }
        precedent = actuel;       // on stocke l'élément précédent en mémoire
        actuel = actuel->suivant; // on examine l'élément suivant
    }

    return 0;
}

// afficherListe() permet de visualiser sur le terminal les éléments d'une liste
void afficherListe(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    while (actuel != NULL) // on parcourt la liste entièrement
    {
        printf(" -> ");
        printf("%lf ", actuel->data); // à chaque fois, on affiche l'élément rencontré
        actuel = actuel->suivant;     // puis on passe au suivant
    }

    printf("-> NULL\n");
}

// init() permet d'initialiser une liste chaînée par un double, cette fonction sera utilisée pour la question 4 (agrégation par wafer selon la moyenne)
Liste *init(double debut)
{
    Liste *liste = (Liste *)malloc(sizeof(Liste)); // on alloue de la mémoire de manière dynamique avec la fonction malloc()
    Element *element = (Element *)malloc(sizeof(Element));

    if (liste == NULL) // on controle ici l'allocation dynamique
        exit(EXIT_FAILURE);

    element->data = debut;  // la première ligne du dataset nous donne USAGE_OF_BACKING_FILM = 9302.5
    element->suivant = NULL; // suivant pointe vers NULL car le 1er élément est aussi le dernier pour le moment
    liste->premier = element;

    return liste;
}

// tronquer() permet de tronquer une liste chaînée de l'élément d'indice a à celui d'indice b (inclus et a<b)
Liste *tronquer(Liste *liste, int a, int b)
{
    int i = 1;
    int indice_min = a;
    int indice_max = b;

    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;
    Liste *crop;
    while (actuel != NULL)
    {
        if (i == indice_min)
        {
            double prim = actuel->data;
            crop = init(prim);
            while (i < indice_max)
            {
                actuel = actuel->suivant;
                double bis = actuel->data;
                insertion(crop,bis);
                i++;
            }
        }
        actuel = actuel->suivant;
        i++;
    }
    return (crop);
}

// moyenne() calcule la moyenne des valeurs prises par les éléments d'une liste composée de structures à un élément
double moyenne(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    double moy = 0.0; // on initialise la moyenne à 0 en respectant les types
    int nb_ligne = 0; // on sauvegarde le nombre de ligne car il sera utile plus loin dans le calcul

    while (actuel != NULL) // on parcourt la liste entièrement
    {
        moy += actuel->data; // on augmente la moyenne à chaque nouvel élément rencontré
        actuel = actuel->suivant;
        nb_ligne++; // et on itère le nombre de valeurs lues
    }

    return (moy / nb_ligne); // on retourne enfin la moyenne de toutes les valeurs rencontrées
}

// minimum() renvoie le plus petit élément d'une liste chaînée de double
double minimum(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    double min = actuel->data; // on prend par défaut le premier élément de la liste comme minimum

    while (actuel != NULL)
    {
        if (actuel->data < min) // puis on le change dès que l'on trouve plus petit que lui
            min = actuel->data;
        actuel = actuel->suivant;
    }

    return (min); // on retourne enfin le minimum de tous les éléments de la liste
}

// maximum() renvoie le plus grand élément d'une liste chaînée de double
double maximum(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    double max = actuel->data; // on prend par défaut le premier élément de la liste comme maximum

    while (actuel != NULL)
    {
        if (actuel->data > max) // puis on le change dès que l'on trouve plus grand que lui
            max = actuel->data;
        actuel = actuel->suivant;
    }

    return (max); // on retourne enfin le maximum de tous les éléments de la liste
}

// ecart_type() renvoie l'écart-type d'un échantillon représenté par une liste chaînée
double ecart_type(Liste *liste)
{
    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    double moy = moyenne(liste); // on récupère d'abord la moyenne de l'échantillon

    actuel = liste->premier;
    double ecart_type = 0.0; // on initialise l'écart-type à 0

    int nb_ligne = 0; // on garde en mémoire le nombre d'éléments lus

    while (actuel != NULL)
    {
        ecart_type += pow(actuel->data - moy, 2); // on applique la formule de l'écart-type
        actuel = actuel->suivant;
        nb_ligne++;
    }

    ecart_type = sqrt(ecart_type / nb_ligne); // on normalise la valeur obtenue
    return (ecart_type);                      // et on retourne l'écart-type de l'échantillon considéré
}

// la fonction de stockage stock_USAGE_OF_BACKING_FILM() lit la colonne correspondant à la série temporelle voulue
// et va stocker les données lues dans une liste chaînée (ici on s'intéresse à la série temporelle "USAGE_OF_BACKING_FILM")
int stock_USAGE_OF_BACKING_FILM(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1;   // dans les fonctions d'initialisation, on a défini la première valeur de la liste, donc i = 1
    char *ligne; // ainsi, on ignorera la première ligne du premier fichier .csv
    int linesize = 250;

    int new_MACHINE_ID;   // nous définissons ensuite toutes les séries temporelles
    int new_MACHINE_DATA; // ici, on en utilise une seule (USAGE_OF_BACKING_FILM)
    double new_TIMESTAMP; // mais les autres sont indispensables car le code va tout de même les lire
    double new_WAFER_ID;  // cependant, on peut les ignorer et les considérer comme des "variables poubelles"
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;

    int parcours = 0; // parcours représente le nombre d'éléments lus, donc il est nul initialement

    ligne = (char *)malloc(linesize * sizeof(char)); // on alloue dynamiquement de la mémoire à la ligne que l'on va lire
    fichier = fopen(training, "r");                  // on ouvre le fichier contenant nos données

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier)) // on éxécute le code ci-dessous tant qu'il reste des lignes à lire
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            // chaque ligne est composée de 25 séries temporelles, il faut donc obligatoirement toutes les lire

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_BACKING_FILM); // mais on ne va insérer à notre liste que la donnée utile (USAGE_OF_BACKING_FILM)
                i++;
            }
        }
    }
    free(ligne);     // on libère la mémoire allouée dynamiquement
    fclose(fichier); // on ferme le fichier
    return i;        // on renvoie le nombre de lignes lues
}

// les fonctions de stockage ci-dessous fonctionnent de la même manière pour les 18 autres séries temporelles
int stock_USAGE_OF_DRESSER(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_DRESSER); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_USAGE_OF_POLISHING_TABLE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_POLISHING_TABLE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_USAGE_OF_DRESSER_TABLE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_DRESSER_TABLE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_PRESSURIZED_CHAMBER_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_PRESSURIZED_CHAMBER_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_MAIN_OUTER_AIR_BAG_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_MAIN_OUTER_AIR_BAG_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_CENTER_AIR_BAG_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_CENTER_AIR_BAG_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_RETAINER_RING_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_RETAINER_RING_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_RIPPLE_AIR_BAG_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_RIPPLE_AIR_BAG_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_USAGE_OF_MEMBRANE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_MEMBRANE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_USAGE_OF_PRESSURIZED_SHEET(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_PRESSURIZED_SHEET); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_SLURRY_FLOW_LINE_A(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_SLURRY_FLOW_LINE_A); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_SLURRY_FLOW_LINE_B(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_SLURRY_FLOW_LINE_B); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_SLURRY_FLOW_LINE_C(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_SLURRY_FLOW_LINE_C); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_WAFER_ROTATION(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_USAGE_OF_BACKING_FILM); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_STAGE_ROTATION(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_STAGE_ROTATION); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_HEAD_ROTATION(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_HEAD_ROTATION); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_DRESSING_WATER_STATUS(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_DRESSING_WATER_STATUS); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}
int stock_EDGE_AIR_BAG_PRESSURE(char *training, Liste *liste)
{
    FILE *fichier;

    int i = 1; // on a déjà initialisé par la première ligne (ATTENTION : on la supprime alors dans resultat.csv)
    char *ligne;
    int linesize = 250; // source d'erreur à controler

    int new_MACHINE_ID;
    int new_MACHINE_DATA;
    double new_TIMESTAMP;
    double new_WAFER_ID;
    char new_STAGE;
    double new_CHAMBER;
    double new_USAGE_OF_BACKING_FILM;
    double new_USAGE_OF_DRESSER;
    double new_USAGE_OF_POLISHING_TABLE;
    double new_USAGE_OF_DRESSER_TABLE;
    double new_PRESSURIZED_CHAMBER_PRESSURE;
    double new_MAIN_OUTER_AIR_BAG_PRESSURE;
    double new_CENTER_AIR_BAG_PRESSURE;
    double new_RETAINER_RING_PRESSURE;
    double new_RIPPLE_AIR_BAG_PRESSURE;
    double new_USAGE_OF_MEMBRANE;
    double new_USAGE_OF_PRESSURIZED_SHEET;
    double new_SLURRY_FLOW_LINE_A;
    double new_SLURRY_FLOW_LINE_B;
    double new_SLURRY_FLOW_LINE_C;
    double new_WAFER_ROTATION;
    double new_STAGE_ROTATION;
    double new_HEAD_ROTATION;
    double new_DRESSING_WATER_STATUS;
    double new_EDGE_AIR_BAG_PRESSURE;
    int parcours = 0;

    ligne = (char *)malloc(linesize * sizeof(char));

    fichier = fopen(training, "r");

    if (fichier == NULL)
        printf("Erreur d'ouverture du fichier");

    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier) != NULL && !feof(fichier))
        {
            parcours = fscanf(fichier, "%d	%d	%lf	%lf	%s	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf	%lf",
                              &new_MACHINE_ID, &new_MACHINE_DATA, &new_TIMESTAMP, &new_WAFER_ID, &new_STAGE,
                              &new_CHAMBER, &new_USAGE_OF_BACKING_FILM, &new_USAGE_OF_DRESSER,
                              &new_USAGE_OF_POLISHING_TABLE, &new_USAGE_OF_DRESSER_TABLE, &new_PRESSURIZED_CHAMBER_PRESSURE,
                              &new_MAIN_OUTER_AIR_BAG_PRESSURE, &new_CENTER_AIR_BAG_PRESSURE, &new_RETAINER_RING_PRESSURE,
                              &new_RIPPLE_AIR_BAG_PRESSURE, &new_USAGE_OF_MEMBRANE, &new_USAGE_OF_PRESSURIZED_SHEET,
                              &new_SLURRY_FLOW_LINE_A, &new_SLURRY_FLOW_LINE_B, &new_SLURRY_FLOW_LINE_C, &new_WAFER_ROTATION,
                              &new_STAGE_ROTATION, &new_HEAD_ROTATION, &new_DRESSING_WATER_STATUS, &new_EDGE_AIR_BAG_PRESSURE);

            if (parcours > 0)
            {
                insertion(liste, new_EDGE_AIR_BAG_PRESSURE); // ici, data = new_USAGE_OF_BACKING_FILM
                i++;
            }
        }
    }
    free(ligne);
    fclose(fichier);
    return i;
}

// tri() va tout simplement trier par ordre croissant les éléments d'une liste chaînée
// nous avons codé un tri fusion plus efficace mais son implémentation dans le code causait des erreurs de segmentation
Liste *tri(Liste *liste)
{
    double store;
    Element *elt1, *elt2;
    elt1 = liste->premier;

    while (elt1 != NULL && elt1->suivant != NULL)
    {
        elt2 = elt1->suivant;
        while (elt2 != NULL)
        {
            if (elt1->data > elt2->data)
            {
                store = elt1->data;
                elt1->data = elt2->data;
                elt2->data = store;
            }
            elt2 = elt2->suivant;
        }
        elt1 = elt1->suivant;
    }
    return (liste);
}

// decompte_liste permet d'obtenir le nombre d'éléments que contient une liste chaînée
int decompte_liste(Liste *liste)
{
    int i = 0;
    while (liste->premier != NULL)
    {
        liste->premier = liste->premier->suivant;
        i++;
    }
    return i;
}

// get_index() permet de déterminer l'élément situé à l'indice k dans une liste chaînée
double get_index(Liste *liste, int k)
{
    int i = 1;
    int indice = k;

    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        if (i == indice)
        {
            double tmp = actuel->data;
            return (tmp);
            break;
        }
        actuel = actuel->suivant;
        i++;
    }
}

// list_to_file() va écrire tous les éléments d'une liste chaînée dans un fichier texte (1 élément par ligne) -> utile pour stocker les listes triées
void list_to_file(Liste *liste, char *filename)
{
    FILE *fichier;
    Element *actuel = liste->premier;

    fichier = fopen(filename, "w");

    while (actuel != NULL)
    {
        fprintf(fichier, "%lf\n", actuel->data);
        actuel = actuel->suivant;
    }
    fclose(fichier);
}

// frequence() renvoie la fréquence d'apparition des éléments d'une liste dans l'intervalle [min;max]
int frequence(Liste *liste, double min, double max)
{
    int occ = 0;

    if (liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        if ((actuel->data <= max) && (actuel->data >= min)) // notons que les intervalles sont fermés dans le cas des histogrammes
            occ++;                                          // on compte le nombre d'éléments dans l'intervalle
        actuel = actuel->suivant;
    }
    return (occ);
}

// histogramme() affiche les statistiques d'une série temporelle, en plus de séparer son étendue en un nombre "bins" d'intervalles dont on calcule la fréquence
void histogramme(Liste *liste, int bins)
{
    printf("\nMaximum = %lf", maximum(liste));
    printf("\nMinimum = %lf", minimum(liste));
    double intervalle = maximum(liste) - minimum(liste); // l'étendue se calcule comme max - min
    double pas = intervalle / bins;                      // on divise l'étendue en "bins" intervalles de même taille "pas"
    printf("\nPas     = %lf", pas);

    printf("\n\nOn obtient les bins suivants :");
    double parcours = minimum(liste);
    while (parcours < maximum(liste))
    {
        printf("\n[%lf;%lf] de fréquence %d / %d", parcours, parcours + pas, frequence(liste, parcours, parcours + pas), 202084); // 202 084 = effectif ante-sigma*k
        parcours += pas;
    }
}

// (Q2) index_of_data() renvoie la position de la valeur atypique dans le fichier .csv afin de supprimer la ligne correspondante
int index_of_data(Liste *liste, double value)
{
    Element *actuel = liste->premier;
    int index = 1;

    while (actuel != NULL && actuel->data != value)
    {
        index++; // on incrémente l'indice lorsque l'on avance dans la liste
        actuel = actuel->suivant;
    }

    if (index == 1 && liste->premier->data != value)
        return -1;

    return index + 1;
}

// supprimer_index()
void supprimer_index(Liste *liste, int index)
{
    Element *actuel = liste->premier;
    int parcours = 0;

    while (parcours < index)
    {
        actuel = actuel->suivant;
        parcours++; // "parcours" représente l'indice de l'élement que l'on examine
    }
    if (parcours == index) // si on a trouvé l'élément à supprimer, on s'en débarasse via supprimer_element()
        supprimer_element(liste, actuel->data);
}

// (Q2) is_valeur_atypique_solo() détecte et supprime l'observation atypique suivant la règle de k*sigma dans chaque liste
Liste *is_valeur_atypique_solo(Liste *liste)
{
    int k = 3;
    double sigma = ecart_type(liste);
    int index = 1;

    Element *actuel;

    for (actuel = liste->premier; actuel != NULL; actuel = actuel->suivant)
    {
        if (fabs(actuel->data) > (k * sigma)) // condition de la loi statistique du k*sigma
        {
            index = index_of_data(liste, actuel->data);
            actuel = actuel->suivant;
            supprimer_element(liste, actuel->data);
        }
    }
    return liste;
}

// (Q4) regrouper_wafer1() créé un fichier avec les WAFER_ID redondants pour retrouver les redondances et les répétitions
void regrouper_wafer1(char *filename, char *file2)
{
    FILE *fichier = fopen(filename, "r");
    FILE *fichier2 = fopen(file2, "w");

    double wafer = 0.0;
    char *ligne;
    int linesize = 250;
    int i = 0;

    ligne = (char *) malloc(linesize * sizeof(char));

    
    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier))
        {

            fscanf(fichier, "%*d	%*d	%*lf	%lf	%*s	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf	%*lf",
                          &wafer);
                          
            fprintf(fichier2, "%lf \n", wafer);

            i++;
            
        }
    }
    free (ligne);
    fclose(fichier);
}


// (Q4) regrouper_wafer2() renvoie un fichier contenant des WAFER_ID uniques ainsi qu'un tableau contenant le nombre d'occurences de chaque ID dans le fichier concaténé
void regrouper_wafer2(char *filename, char *file2, int tab[426])
{
    FILE *fichier = fopen(filename, "r");
    FILE *fichier2 = fopen(file2, "w");

    double wafer = 0.0;
    char *ligne;
    int linesize = 25;
    double controle = 371447024.000000; //initialisation du premier élement du fichier agregation
    int i = 0;
    int cpt = 0;
    int j = 0;


    ligne = (char *) malloc(linesize * sizeof(char));

    
    if (fichier != NULL)
    {
        while (fgets(ligne, linesize, fichier))
        {
            fscanf(fichier, "%lf", &wafer);
            
            if (wafer == controle)                      //on contrôle si le fichier "agregation.csv" contient des répétitions
            {                                           // si c'est le cas, on incrémente le compteur, qui nous permettre ensuite de déduire les 
                                                        // données utiles pour le calcul des moyennes d'une série temporelle par wafer
                cpt++;
                i++;
                continue;
            }

            fprintf(fichier2, "%lf \n", controle);

            if (wafer != controle)                      //sinon , on change la valeur de contrôle et on remet le compteur à zéro
            {
                controle = wafer;
                tab[j] = cpt;
                j++;
                cpt = 0;
            }

            i++;
        }
    }
    free (ligne);
    fclose(fichier);
} // en sortie de cette fonction, on aura un fichier contenant tous les WAFER_ID de manière unique, ainsi qu'un tableau contenant les occurences de chacun

int main()      // voici différents exemples d'utilisation du code pour les questions 1 à 6
                // vous pouvez retirer les commentaires (/* ... */) pour tester telle ou telle partie du code
{

    /* // STATISTIQUES POUR CHAQUE SERIE TEMPORELLE APRES LA REGLE DU K*SIGMA (peut être décliné pour chaque série temporelle)

    Liste *data_USAGE_OF_BACKING_FILM = init_USAGE_OF_BACKING_FILM();
    int count_USAGE_OF_BACKING_FILM = stock_USAGE_OF_BACKING_FILM("resultat.csv", data_USAGE_OF_BACKING_FILM);
    data_USAGE_OF_BACKING_FILM = is_valeur_atypique_solo(data_USAGE_OF_BACKING_FILM);
    printf("\n\nStatistiques descriptives pour USAGE_OF_BACKING_FILM");
    printf("\nEffectif   : 190 638"); // obtenu grace à decompte_liste()
    printf("\nMoyenne    : %lf", moyenne(data_USAGE_OF_BACKING_FILM));
    printf("\nMinimum    : %lf", minimum(data_USAGE_OF_BACKING_FILM));
    printf("\nMaximum    : %lf", maximum(data_USAGE_OF_BACKING_FILM));
    printf("\nEcart-type : %lf", ecart_type(data_USAGE_OF_BACKING_FILM));
    Liste *data_USAGE_OF_BACKING_FILM_tri = tri(data_USAGE_OF_BACKING_FILM);
    printf("\nQuartile 1 : %lf", (get_index(data_USAGE_OF_BACKING_FILM_tri, 47659) + get_index(data_USAGE_OF_BACKING_FILM_tri, 47660)) / 2);    // quartile 1 : moyenne entre 47659 et 47660
    printf("\nMédiane    : %lf", (get_index(data_USAGE_OF_BACKING_FILM_tri, 95319) + get_index(data_USAGE_OF_BACKING_FILM_tri, 95320)) / 2);    // quartile 2 : moyenne entre 95319 et 95320 (=médiane)
    printf("\nQuartile 3 : %lf", (get_index(data_USAGE_OF_BACKING_FILM_tri, 142978) + get_index(data_USAGE_OF_BACKING_FILM_tri, 151564)) / 2);  // quartile 3 : moyenne entre 142978 et 142978
    printf("\n");
    */


    /* // HISTOGRAMMES POUR CHAQUE SERIE TEMPORELLE AVANT LA REGLE DU K*SIGMA (peut être décliné pour chaque série temporelle)

    Liste *data_USAGE_OF_BACKING_FILM = init_USAGE_OF_BACKING_FILM();
    int count_USAGE_OF_BACKING_FILM = stock_USAGE_OF_BACKING_FILM("resultat.csv", data_USAGE_OF_BACKING_FILM);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_BACKING_FILM");
    histogramme(data_USAGE_OF_BACKING_FILM, 5); // on prend 5 arbitrairement
    */


    /* // HISTOGRAMMES POUR CHAQUE SERIE TEMPORELLE APRES LA REGLE DU K*SIGMA (peut être décliné pour chaque série temporelle)

    Liste *data_USAGE_OF_BACKING_FILM = init_USAGE_OF_BACKING_FILM();
    int count_USAGE_OF_BACKING_FILM = stock_USAGE_OF_BACKING_FILM("resultat.csv", data_USAGE_OF_BACKING_FILM);
    data_USAGE_OF_BACKING_FILM = is_valeur_atypique_solo(data_USAGE_OF_BACKING_FILM);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_BACKING_FILM");
    histogramme(data_USAGE_OF_BACKING_FILM, 5); // on prend 5 arbitrairement
    */


    /* // HISTOGRAMMES AVANT LA REGLE DU K*SIGMA (complet et fonctionne pour chaque série temporelle)

    Liste *data_USAGE_OF_BACKING_FILM = init_USAGE_OF_BACKING_FILM();
    int count_USAGE_OF_BACKING_FILM = stock_USAGE_OF_BACKING_FILM("resultat.csv", data_USAGE_OF_BACKING_FILM);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_BACKING_FILM");
    histogramme(data_USAGE_OF_BACKING_FILM, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_DRESSER = init_USAGE_OF_DRESSER();
    int count_USAGE_OF_DRESSER = stock_USAGE_OF_DRESSER("resultat.csv", data_USAGE_OF_DRESSER);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_DRESSER");
    histogramme(data_USAGE_OF_DRESSER, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_POLISHING_TABLE = init_USAGE_OF_POLISHING_TABLE();
    int count_USAGE_OF_POLISHING_TABLE = stock_USAGE_OF_POLISHING_TABLE("resultat.csv", data_USAGE_OF_POLISHING_TABLE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_POLISHING_TABLE");
    histogramme(data_USAGE_OF_POLISHING_TABLE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_DRESSER_TABLE = init_USAGE_OF_DRESSER_TABLE();
    int count_USAGE_OF_DRESSER_TABLE = stock_USAGE_OF_DRESSER_TABLE("resultat.csv", data_USAGE_OF_DRESSER_TABLE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_DRESSER_TABLE");
    histogramme(data_USAGE_OF_DRESSER_TABLE, 5); // on prend 5 arbitrairement

    Liste *data_PRESSURIZED_CHAMBER_PRESSURE = init_PRESSURIZED_CHAMBER_PRESSURE();
    int count_PRESSURIZED_CHAMBER_PRESSURE = stock_PRESSURIZED_CHAMBER_PRESSURE("resultat.csv", data_PRESSURIZED_CHAMBER_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "PRESSURIZED_CHAMBER_PRESSURE");
    histogramme(data_PRESSURIZED_CHAMBER_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_MAIN_OUTER_AIR_BAG_PRESSURE = init_MAIN_OUTER_AIR_BAG_PRESSURE();
    int count_MAIN_OUTER_AIR_BAG_PRESSURE = stock_MAIN_OUTER_AIR_BAG_PRESSURE("resultat.csv", data_MAIN_OUTER_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "MAIN_OUTER_AIR_BAG_PRESSURE");
    histogramme(data_MAIN_OUTER_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_CENTER_AIR_BAG_PRESSURE = init_CENTER_AIR_BAG_PRESSURE();
    int count_CENTER_AIR_BAG_PRESSURE = stock_CENTER_AIR_BAG_PRESSURE("resultat.csv", data_CENTER_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "CENTER_AIR_BAG_PRESSURE");
    histogramme(data_CENTER_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_RETAINER_RING_PRESSURE = init_RETAINER_RING_PRESSURE();
    int count_RETAINER_RING_PRESSURE = stock_RETAINER_RING_PRESSURE("resultat.csv", data_RETAINER_RING_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "RETAINER_RING_PRESSURE");
    histogramme(data_RETAINER_RING_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_RIPPLE_AIR_BAG_PRESSURE = init_RIPPLE_AIR_BAG_PRESSURE();
    int count_RIPPLE_AIR_BAG_PRESSURE = stock_RIPPLE_AIR_BAG_PRESSURE("resultat.csv", data_RIPPLE_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "RIPPLE_AIR_BAG_PRESSURE");
    histogramme(data_RIPPLE_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_MEMBRANE = init_USAGE_OF_MEMBRANE();
    int count_USAGE_OF_MEMBRANE = stock_USAGE_OF_MEMBRANE("resultat.csv", data_USAGE_OF_MEMBRANE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_MEMBRANE");
    histogramme(data_USAGE_OF_MEMBRANE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_PRESSURIZED_SHEET = init_USAGE_OF_PRESSURIZED_SHEET();
    int count_USAGE_OF_PRESSURIZED_SHEET = stock_USAGE_OF_PRESSURIZED_SHEET("resultat.csv", data_USAGE_OF_PRESSURIZED_SHEET);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_PRESSURIZED_SHEET");
    histogramme(data_USAGE_OF_PRESSURIZED_SHEET, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_A = init_SLURRY_FLOW_LINE_A();
    int count_SLURRY_FLOW_LINE_A = stock_SLURRY_FLOW_LINE_A("resultat.csv", data_SLURRY_FLOW_LINE_A);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_A");
    histogramme(data_SLURRY_FLOW_LINE_A, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_B = init_SLURRY_FLOW_LINE_B();
    int count_SLURRY_FLOW_LINE_B = stock_SLURRY_FLOW_LINE_B("resultat.csv", data_SLURRY_FLOW_LINE_B);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_B");
    histogramme(data_SLURRY_FLOW_LINE_B, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_C = init_SLURRY_FLOW_LINE_C();
    int count_SLURRY_FLOW_LINE_C = stock_SLURRY_FLOW_LINE_C("resultat.csv", data_SLURRY_FLOW_LINE_C);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_C");
    histogramme(data_SLURRY_FLOW_LINE_C, 5); // on prend 5 arbitrairement

    Liste *data_WAFER_ROTATION = init_WAFER_ROTATION();
    int count_WAFER_ROTATION = stock_WAFER_ROTATION("resultat.csv", data_WAFER_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "WAFER_ROTATION");
    histogramme(data_WAFER_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_STAGE_ROTATION = init_STAGE_ROTATION();
    int count_STAGE_ROTATION = stock_STAGE_ROTATION("resultat.csv", data_STAGE_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "STAGE_ROTATION");
    histogramme(data_STAGE_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_HEAD_ROTATION = init_HEAD_ROTATION();
    int count_HEAD_ROTATION = stock_HEAD_ROTATION("resultat.csv", data_HEAD_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "HEAD_ROTATION");
    histogramme(data_HEAD_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_DRESSING_WATER_STATUS = init_DRESSING_WATER_STATUS();
    int count_DRESSING_WATER_STATUS = stock_DRESSING_WATER_STATUS("resultat.csv", data_DRESSING_WATER_STATUS);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "DRESSING_WATER_STATUS");
    histogramme(data_DRESSING_WATER_STATUS, 5); // on prend 5 arbitrairement

    Liste *data_EDGE_AIR_BAG_PRESSURE = init_EDGE_AIR_BAG_PRESSURE();
    int count_EDGE_AIR_BAG_PRESSURE = stock_EDGE_AIR_BAG_PRESSURE("resultat.csv", data_EDGE_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "EDGE_AIR_BAG_PRESSURE");
    histogramme(data_EDGE_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement
    */


    /* // HISTOGRAMMES APRES LA REGLE DU K*SIGMA (complet et fonctionne pour chaque série temporelle)

    Liste *data_USAGE_OF_BACKING_FILM = init_USAGE_OF_BACKING_FILM();
    int count_USAGE_OF_BACKING_FILM = stock_USAGE_OF_BACKING_FILM("resultat.csv", data_USAGE_OF_BACKING_FILM);
    data_USAGE_OF_BACKING_FILM = is_valeur_atypique_solo(data_USAGE_OF_BACKING_FILM);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_BACKING_FILM");
    histogramme(data_USAGE_OF_BACKING_FILM, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_DRESSER = init_USAGE_OF_DRESSER();
    int count_USAGE_OF_DRESSER = stock_USAGE_OF_DRESSER("resultat.csv", data_USAGE_OF_DRESSER);
    data_USAGE_OF_DRESSER = is_valeur_atypique_solo(data_USAGE_OF_DRESSER);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_DRESSER");
    histogramme(data_USAGE_OF_DRESSER, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_POLISHING_TABLE = init_USAGE_OF_POLISHING_TABLE();
    int count_USAGE_OF_POLISHING_TABLE = stock_USAGE_OF_POLISHING_TABLE("resultat.csv", data_USAGE_OF_POLISHING_TABLE);
    data_USAGE_OF_POLISHING_TABLE = is_valeur_atypique_solo(data_USAGE_OF_POLISHING_TABLE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_POLISHING_TABLE");
    histogramme(data_USAGE_OF_POLISHING_TABLE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_DRESSER_TABLE = init_USAGE_OF_DRESSER_TABLE();
    int count_USAGE_OF_DRESSER_TABLE = stock_USAGE_OF_DRESSER_TABLE("resultat.csv", data_USAGE_OF_DRESSER_TABLE);
    data_USAGE_OF_DRESSER_TABLE = is_valeur_atypique_solo(data_USAGE_OF_DRESSER_TABLE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_DRESSER_TABLE");
    histogramme(data_USAGE_OF_DRESSER_TABLE, 5); // on prend 5 arbitrairement

    Liste *data_PRESSURIZED_CHAMBER_PRESSURE = init_PRESSURIZED_CHAMBER_PRESSURE();
    int count_PRESSURIZED_CHAMBER_PRESSURE = stock_PRESSURIZED_CHAMBER_PRESSURE("resultat.csv", data_PRESSURIZED_CHAMBER_PRESSURE);
    data_PRESSURIZED_CHAMBER_PRESSURE = is_valeur_atypique_solo(data_PRESSURIZED_CHAMBER_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "PRESSURIZED_CHAMBER_PRESSURE");
    histogramme(data_PRESSURIZED_CHAMBER_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_MAIN_OUTER_AIR_BAG_PRESSURE = init_MAIN_OUTER_AIR_BAG_PRESSURE();
    int count_MAIN_OUTER_AIR_BAG_PRESSURE = stock_MAIN_OUTER_AIR_BAG_PRESSURE("resultat.csv", data_MAIN_OUTER_AIR_BAG_PRESSURE);
    data_MAIN_OUTER_AIR_BAG_PRESSURE = is_valeur_atypique_solo(data_MAIN_OUTER_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "MAIN_OUTER_AIR_BAG_PRESSURE");
    histogramme(data_MAIN_OUTER_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_CENTER_AIR_BAG_PRESSURE = init_CENTER_AIR_BAG_PRESSURE();
    int count_CENTER_AIR_BAG_PRESSURE = stock_CENTER_AIR_BAG_PRESSURE("resultat.csv", data_CENTER_AIR_BAG_PRESSURE);
    data_CENTER_AIR_BAG_PRESSURE = is_valeur_atypique_solo(data_CENTER_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "CENTER_AIR_BAG_PRESSURE");
    histogramme(data_CENTER_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_RETAINER_RING_PRESSURE = init_RETAINER_RING_PRESSURE();
    int count_RETAINER_RING_PRESSURE = stock_RETAINER_RING_PRESSURE("resultat.csv", data_RETAINER_RING_PRESSURE);
    data_RETAINER_RING_PRESSURE = is_valeur_atypique_solo(data_RETAINER_RING_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "RETAINER_RING_PRESSURE");
    histogramme(data_RETAINER_RING_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_RIPPLE_AIR_BAG_PRESSURE = init_RIPPLE_AIR_BAG_PRESSURE();
    int count_RIPPLE_AIR_BAG_PRESSURE = stock_RIPPLE_AIR_BAG_PRESSURE("resultat.csv", data_RIPPLE_AIR_BAG_PRESSURE);
    data_RIPPLE_AIR_BAG_PRESSURE = is_valeur_atypique_solo(data_RIPPLE_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "RIPPLE_AIR_BAG_PRESSURE");
    histogramme(data_RIPPLE_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_MEMBRANE = init_USAGE_OF_MEMBRANE();
    int count_USAGE_OF_MEMBRANE = stock_USAGE_OF_MEMBRANE("resultat.csv", data_USAGE_OF_MEMBRANE);
    data_USAGE_OF_MEMBRANE = is_valeur_atypique_solo(data_USAGE_OF_MEMBRANE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_MEMBRANE");
    histogramme(data_USAGE_OF_MEMBRANE, 5); // on prend 5 arbitrairement

    Liste *data_USAGE_OF_PRESSURIZED_SHEET = init_USAGE_OF_PRESSURIZED_SHEET();
    int count_USAGE_OF_PRESSURIZED_SHEET = stock_USAGE_OF_PRESSURIZED_SHEET("resultat.csv", data_USAGE_OF_PRESSURIZED_SHEET);
    data_USAGE_OF_PRESSURIZED_SHEET = is_valeur_atypique_solo(data_USAGE_OF_PRESSURIZED_SHEET);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "USAGE_OF_PRESSURIZED_SHEET");
    histogramme(data_USAGE_OF_PRESSURIZED_SHEET, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_A = init_SLURRY_FLOW_LINE_A();
    int count_SLURRY_FLOW_LINE_A = stock_SLURRY_FLOW_LINE_A("resultat.csv", data_SLURRY_FLOW_LINE_A);
    data_SLURRY_FLOW_LINE_A = is_valeur_atypique_solo(data_SLURRY_FLOW_LINE_A);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_A");
    histogramme(data_SLURRY_FLOW_LINE_A, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_B = init_SLURRY_FLOW_LINE_B();
    int count_SLURRY_FLOW_LINE_B = stock_SLURRY_FLOW_LINE_B("resultat.csv", data_SLURRY_FLOW_LINE_B);
    data_SLURRY_FLOW_LINE_B = is_valeur_atypique_solo(data_SLURRY_FLOW_LINE_B);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_B");
    histogramme(data_SLURRY_FLOW_LINE_B, 5); // on prend 5 arbitrairement

    Liste *data_SLURRY_FLOW_LINE_C = init_SLURRY_FLOW_LINE_C();
    int count_SLURRY_FLOW_LINE_C = stock_SLURRY_FLOW_LINE_C("resultat.csv", data_SLURRY_FLOW_LINE_C);
    data_SLURRY_FLOW_LINE_C = is_valeur_atypique_solo(data_SLURRY_FLOW_LINE_C);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "SLURRY_FLOW_LINE_C");
    histogramme(data_SLURRY_FLOW_LINE_C, 5); // on prend 5 arbitrairement

    Liste *data_WAFER_ROTATION = init_WAFER_ROTATION();
    int count_WAFER_ROTATION = stock_WAFER_ROTATION("resultat.csv", data_WAFER_ROTATION);
    data_WAFER_ROTATION = is_valeur_atypique_solo(data_WAFER_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "WAFER_ROTATION");
    histogramme(data_WAFER_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_STAGE_ROTATION = init_STAGE_ROTATION();
    int count_STAGE_ROTATION = stock_STAGE_ROTATION("resultat.csv", data_STAGE_ROTATION);
    data_STAGE_ROTATION = is_valeur_atypique_solo(data_STAGE_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "STAGE_ROTATION");
    histogramme(data_STAGE_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_HEAD_ROTATION = init_HEAD_ROTATION();
    int count_HEAD_ROTATION = stock_HEAD_ROTATION("resultat.csv", data_HEAD_ROTATION);
    data_HEAD_ROTATION = is_valeur_atypique_solo(data_HEAD_ROTATION);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "HEAD_ROTATION");
    histogramme(data_HEAD_ROTATION, 5); // on prend 5 arbitrairement

    Liste *data_DRESSING_WATER_STATUS = init_DRESSING_WATER_STATUS();
    int count_DRESSING_WATER_STATUS = stock_DRESSING_WATER_STATUS("resultat.csv", data_DRESSING_WATER_STATUS);
    data_DRESSING_WATER_STATUS = is_valeur_atypique_solo(data_DRESSING_WATER_STATUS);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "DRESSING_WATER_STATUS");
    histogramme(data_DRESSING_WATER_STATUS, 5); // on prend 5 arbitrairement

    Liste *data_EDGE_AIR_BAG_PRESSURE = init_EDGE_AIR_BAG_PRESSURE();
    int count_EDGE_AIR_BAG_PRESSURE = stock_EDGE_AIR_BAG_PRESSURE("resultat.csv", data_EDGE_AIR_BAG_PRESSURE);
    data_EDGE_AIR_BAG_PRESSURE = is_valeur_atypique_solo(data_EDGE_AIR_BAG_PRESSURE);
    printf("\n\n--- Génération de l'histogramme : %s ---\n", "EDGE_AIR_BAG_PRESSURE");
    histogramme(data_EDGE_AIR_BAG_PRESSURE, 5); // on prend 5 arbitrairement
    */


   /* // QUESTION 4 : AGREGATION PAR WAFER SELON LA MOYENNE
    regrouper_wafer1("resultat.csv", "agregation.csv");
    regrouper_wafer2("agregation.csv","agregation_unique.csv");
   */

    return 0;
}
