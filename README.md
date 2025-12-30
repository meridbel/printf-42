# ft_printf

## 📌 Description
`ft_printf` est une réimplémentation de la fonction standard `printf` du langage C.  
Ce projet fait partie du cursus de **42 School** et a pour objectif de renforcer la compréhension :
- des **fonctions variadiques**
- de la **gestion de format**
- de l’**écriture robuste en C**
- de la **gestion de la mémoire**

## 🎯 Objectifs
- Reproduire le comportement de `printf`
- Gérer plusieurs spécificateurs de format
- Respecter les normes de 42 (Norminette)
- Produire une librairie réutilisable (`libftprintf.a`)

## ⚙️ Spécificateurs gérés
| Spécificateur | Description |
|--------------|-------------|
| `%c` | Caractère |
| `%s` | Chaîne de caractères |
| `%p` | Adresse mémoire |
| `%d` | Entier décimal |
| `%i` | Entier |
| `%u` | Entier non signé |
| `%x` | Hexadécimal (minuscule) |
| `%X` | Hexadécimal (majuscule) |
| `%%` | Signe pourcentage |

## 🛠️ Compilation
Pour compiler la librairie :

```bash
make
