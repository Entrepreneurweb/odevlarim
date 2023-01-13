#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 5
#define N 6
int main(int argc, char *argv[]) {
	
	// Création de la matrice f de dimensions MxN avec des valeurs aléatoires
int f[M][N];
srand(time(NULL)); // Initialisation de la fonction rand()
for (int i = 0; i < M; i++)
{
for (int j = 0; j < N; j++)
{
f[i][j] = rand() % 256; // Valeurs aléatoires entre 0 et 255
}
}
	
	
	
	
	// Affichage de la matrice f
printf("Matrix f :\n");
for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("%d ", f[i][j]);
    }
    printf("\n");
}

// Création du filtre v 3x3
int v[3][3] = {{1, 2, 1}, {2, 4, 2}, {1, 2, 1}};

// Appliquer le filtre v à tous les éléments de la matrice f, sauf aux bords
int g[M][N]; // Matrice résultat
for (int i = 1; i < M - 1; i++)
{
    for (int j = 1; j < N - 1; j++)
    {
        g[i][j] = (v[0][0] * f[i-1][j-1] + v[0][1] * f[i-1][j] + v[0][2] * f[i-1][j+1]
                 + v[1][0] * f[i][j-1] + v[1][1] * f[i][j] + v[1][2] * f[i][j+1]
                 + v[2][0] * f[i+1][j-1] + v[2][1] * f[i+1][j] + v[2][2] * f[i+1][j+1]) / 16;
    }
}

// Affichage de la matrice g
printf("\nMatriX g :\n");
for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("%d ", g[i][j]);
    }
    printf("\n");
}



	
	
	
	
	
	
	
	
	return 0;
}