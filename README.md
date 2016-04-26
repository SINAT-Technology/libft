# Libft
My own library of useful functions in C.

# Functions list

- memset
- bzero
- memcpy
- memccpy
- memmove
- [memalloc] (#ft_memalloc)
- [memdel] (#ft_memdel)
- memchr
- memcmp
- [strdel] (#ft_strdel)
- strlen
- strdup
- [strclr] (#ft_strclr)
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- [strnew] (#ft_strnew)
- strchr
- strrchr
- [striter] (#ft_striter)
- [striteri] (#ft_striteri)
- strstr
- strnstr
- strcmp
- strncmp
- [strmap] (#ft_strmap)
- [strmapi] (#ft_strmapi)
- [strnequ] (#ft_strnequ)
- [strsub] (#ft_strsub)
- [strjoin] (#ft_strjoin)
- [strtrim] (#ft_strtrim)
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

# Details

| Function       	|  <a name="ft_memalloc">ft_memalloc</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void * ft_memalloc(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.  	|
| Param. #1      	|  La taille de la zone de mémoire à allouer.  	|
| Retour         	| La zone de mémoire allouée.  	|
| Fonctions libc 	| malloc(3) 	|

----------

| Function       	|  <a name="ft_memdel">ft_memdel</a> 	|
|----------------	|-----------------------------------	|
| Prototype      	| void ft_memdel(void **ap);  	|
| Description    	| Prend en paramètre l’adresse d’un pointeur dont la zone pointée doit être libérée avec free(3), puis le pointeur est mis à NULL.  	|
| Param. #1      	|  L’adresse d’un pointeur dont il faut libérer la mémoire puis le mettre à NULL.  	|
| Retour         	| Rien.  	|
| Fonctions libc 	| free(3) 	|

----------

| Function       	|  <a name="ft_strnew">ft_strnew</a> 	|
|----------------	|-----------------------------------	|
| Prototype      	| char * ft_strnew(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une chaine de caractère “fraiche” terminée par un ’\0’. Chaque caractère de la chaine est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.  	|
| Param. #1      	|  La taille de la chaine de caractères à allouer.  	|
| Retour         	| La chaine de caractères allouée et initialisée à 0.  	|
| Fonctions libc 	| malloc(3) 	|

----------

| Function       	|   <a name="ft_strdel">ft_strdel</a> 	|
|----------------	|-------------------------------------	|
| Prototype      	| void ft_strdel(char **as);  	|
| Description    	| Prend en paramètre l’adresse d’une chaine de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.  	|
| Param. #1      	|  L’adresse de la chaine de caractère dont il faut libérer la mémoire et mettre le pointeur à NULL.  	|
| Retour         	| Rien.  	|
| Fonctions libc 	| free(3) 	|

----------

| Function       	|  <a name="ft_strclr">ft_strclr</a> 	|
|----------------	|-----------	|
| Prototype      	| void ft_strclr(char *s);  |
| Description    	| Assigne la valeur ’\0’ à tous les caractères de la chaine passée en paramètre.  |
| Param. #1      	| La chaine de caractères à clearer.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|

----------

| Function       	|  <a name="ft_striter">ft_striter</a> 	|
|----------------	|-------------------------------------	|
| Prototype      	| void ft_striter(char *s, void (*f)(char *));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécéssaire.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|

----------

| Function       	|  <a name="ft_striteri">ft_striteri</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void ft_striteri(char *s, void (*f)(unsigned int, char *));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre en précisant son index en premier argument. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécéssaire.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s et son index.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|

----------

| Function       	|  <a name="ft_strmap">ft_strmap</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| char * ft_strmap(char const *s, char (*f)(char));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre pour créer une nouvelle chaine “fraiche” (avec malloc(3)) résultant des applications successives de f.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s.  |
| Retour         	| La chaine “fraiche” résultant des applications successives de f.	|
| Fonctions libc 	| malloc(3)	|

----------

| Function       	|  <a name="ft_strmapi">ft_strmapi</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| char * ft_strmapi(char const *s, char (*f)(unsigned int, char));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre en précisant son index pour créer une nouvelle chaine “fraiche” (avec malloc(3)) résultant des applications successives de f.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s en précisant son index.  |
| Retour         	| La chaine “fraiche” résultant des applications successives de f.	|
| Fonctions libc 	| malloc(3)	|

----------

| Function       	|  <a name="ft_strnequ">ft_strnequ</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| int ft_strnequ(char const *s1, char const *s2, size_t n);  |
| Description    	| Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux chaines sont égales, la fonction retourne 1, ou 0 sinon.  |
| Param. #1      	|  La première des deux chaines à comparer.  |
| Param. #2      	|  La seconde des deux chaines à comparer.  |
| Param. #3      	| Le nombre de caractères à comparer au maximum.  |
| Retour         	| 1 ou 0 selon que les deux chaines sont égales ou non. |
| Fonctions libc 	| Aucune.	|

----------

| Function       	|  <a name="ft_strsub">ft_strsub</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| char * ft_strsub(char const *s, unsigned int start, size_t len); |
| Description    	| Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un tronçon de la chaine de caractères passée en paramètre. Le tronçon commence à l’index start et à pour longueur len. Si start et len ne désignent pas un tronçon de chaine valide, le comportement est indéterminé. Si l’allocation échoue, la fonction renvoie NULL. |
| Param. #1      	| La chaine de caractères dans laquelle chercher le tronçon à copier. |
| Param. #2      	| L’index dans la chaine de caractères où débute le tronçon à copier. |
| Param. #3      	| La longueur du tronçon à copier. |
| Retour         	| Le tronçon. |
| Fonctions libc 	| malloc(3)	|

----------

| Function       	|  <a name="ft_strjoin">ft_strjoin</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| char * ft_strjoin(char const *s1, char const *s2); |
| Description    	| Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche” terminée par un ’\0’ résultant de la concaténation de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL. |
| Param. #1      	| La chaine de caractères préfixe. |
| Param. #2      	| La chaine de caractères suffixe. |
| Retour         	| La chaine de caractère “fraiche” résultant de la concaténation des deux chaines. |
| Fonctions libc 	| malloc(3)	|

----------

| Function       	|  <a name="ft_strtrim">ft_strtrim</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| char * ft_strtrim(char const *s); |
| Description    	| Alloue (avec malloc(3)) et retourne une copie de la chaine passée en paramètre sans les espaces blancs au debut et à la fin de cette chaine. On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL. |
| Param. #1      	| La chaine de caractères à trimmer. |
| Retour         	| La chaine de caractère “fraiche” trimmée ou bien une copie de s sinon. |
| Fonctions libc 	| malloc(3)	|
