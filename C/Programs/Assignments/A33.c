#include<stdio.h>

// 1. WAP to find sum of two matrices of size 3X3.
// int main()
// {
//     int i, j, sum=0;
//     int a[3][3], b[3][3], c[3][3];
    
//     printf("Enter elements of Array1: \n");
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 scanf("%d", &a[i][j]);
//             }

//     printf("Enter elements of Array2: \n");
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 scanf("%d", &b[i][j]);
//             }
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 {
//                     c[i][j] = a[i][j] + b[i][j];
//                     printf("%d ", c[i][j]);
//                 }
//             printf("\n");
//     }
//     return 0;
// }

// 2. WAP to find product of two matrices of size 3X3.
// int main()
// {
//     int i, j;
//     int a[3][3], b[3][3], c[3][3];
    
//     printf("Enter elements of Array1: \n");
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 scanf("%d", &a[i][j]);
//             }

//     printf("Enter elements of Array2: \n");
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 scanf("%d", &b[i][j]);
//             }
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 {
//                     c[i][j] = a[i][j] * b[i][j];
//                     printf("%d ", c[i][j]);
//                 }
//             printf("\n");
//     }
//     return 0;
// }

// 3. WAP to find product of two matrices of size 3X3.
// int main()
// {
//     int i, j;
//     int a[3][3], c[3][3];
    
//     printf("Enter elements of Array1: \n");
//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 scanf("%d", &a[i][j]);
//             }

//     for (i=0;i<3;i++)
//         {
//             for (j=0;j<3;j++)
//                 {
//                     c[i][j] = a[j][i];
//                     printf("%d ", c[i][j]);
//                 }
//             printf("\n");
//     }
//     return 0;
// }

/* Q.4: 4 players are playing a tournament of Chess with round robin method. 
    Each win has 2 points, draw has 1 point and loose has 0 points. 
Declare score_board two dimension array to store scores of players against each other

*/

void score_board(int p1[], int p2[], int p3[], int p4[], int n)
{
    int sb[n][n], i, j;
    for (i=0;i<n;i++)
        {
            sb[0][i] = p1[i];
            sb[1][i] = p2[i];
            sb[2][i] = p3[i];
            sb[3][i] = p4[i];
        }
}

// Q. 5: Define a function to update score board after each match result

void update_score_board(int p1[], int p2[], int p3[], int p4[], int n, int pl1[], int pl2[], int score[2])
{
    int sb[n][n], i, j;
    score_board(p1, p2, p3, p4, n);
    printf("Give the latest match result: ");
    if (pl1==p1 && pl2==p2)
        {
            sb[0][1] += score[0];
            sb[1][0] += score[1];
        }
    else if (pl1==p1 && pl2==p3)
    {
        sb[0][2] += score[0];
        sb[2][0] += score[1];
    }
    else if (pl1==p1 && pl2==p4)
    {
        sb[0][3] += score[0];
        sb[3][0] += score[1];
    }
    else if (pl1==p2 && pl2==p3)
    {
        sb[1][2] += score[0];
        sb[2][1] += score[1];
    }
    else if (pl1==p2 && pl2==p4)
    {
        sb[1][3] += score[0];
        sb[3][1] += score[1];
    }
    else if (pl1==p3 && pl2==p4)
    {
        sb[2][3] += score[0];
        sb[3][2] += score[1];
    }
}

// Q. 6: Define a function to display score board.

void display_score_board(int p1[], int p2[], int p3[], int p4[], int n)
{
    int sb[n][n], i, j;
    for (i=0;i<n;i++)
        {
            sb[0][i] = p1[i];
            sb[1][i] = p2[i];
            sb[2][i] = p3[i];
            sb[3][i] = p4[i];
        }

    printf("Updated Score Board is as Below: \n");
    for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
                printf("%d ", sb[i][j]);
            printf("\n");
        }
}

// Q. 6: Define a function to display score of specific player.

void player_score_board(int p1[], int p2[], int p3[], int p4[], int n, int pl[])
{
    int sb[n][n], i, j;
    for (i=0;i<n;i++)
        {
            if (pl==p1)
                {
                    sb[0][i] = p1[i];
                    printf("%d ", sb[0][i]);
                }
            else if (pl==p2)
                {
                    sb[1][i] = p2[i];
                    printf("%d ", sb[1][i]);
                }    
            else if (pl==p3)
                {
                    sb[2][i] = p3[i];
                    printf("%d ", sb[2][i]);
                } 
            else
                {
                    sb[3][i] = p4[i];
                    printf("%d ", sb[3][i]);
                } 
        }        
}

// Q.8 Define a function to find winner of tournament.
void get_winner(int p1[], int p2[], int p3[], int p4[], int n)
{
    int score[4]={}, max=0;
    int sb[n][n], i, j, winner;
    for (i=0;i<n;i++)
        {
            sb[0][i] = p1[i];
            score[0] += p1[i];
            sb[1][i] = p2[i];
            score[1] += p2[i];
            sb[2][i] = p3[i];
            score[2] += p3[i];
            sb[3][i] = p4[i];
            score[3] += p4[i];
        }
    max=score[0];
    winner = 1;
    for (i=1;i<n;i++)
        {
            if (score[i]>max)
                max = score[i];
                winner = i;
        }
    printf("Winner is Player %d with score of %d ", winner + 1, score[winner]);
    
}

// Q.8 Define a function to display Rank of Players.

void CopyArray(int a[], int n, int b[])
    {
        int i, j, c;
        for (i=0; i<n;i++)
            b[i] = a[i];
    }


void Sort2DArray(int r[][], int n)
{   
    int i, round, t;
    for (round=1;round<n;round++)
        for (i=1;i<n;i++)
            {
                if (r[1][i-1] < r[1][i])
                    {
                        t = r[i];
                        a[i] = a[i+1];
                        a[i+1] = t;
                    }
            }
}

// void MaxScore(int a[], int n)
// {
//     int i, j, max;
//     int score[4][2]={};
//     max=score[0][1];
//     for (i=1;i<n;i++)
//         {
//             if (score[i][1]>max)
//                 {
//                     max = score[i][1];
//                 }
//         }
//     for (i=0;i<n;i++)
//         {
//             {
//             for (j=0;j<n;j++)
//             printf("%d ", score[i][j]);
//         }
//         printf("\n");
//     }
// }

void get_player_ranks(int p1[], int p2[], int p3[], int p4[], int n)
{
    int score[4]={}, max=0, rank[4][2]={};
    int players[4]={};
    int sb[n][n], i, j, winner;
    for (i=0;i<n;i++)
        {
            sb[0][i] = p1[i];
            score[0] += p1[i];
            sb[1][i] = p2[i];
            score[1] += p2[i];
            sb[2][i] = p3[i];
            score[2] += p3[i];
            sb[3][i] = p4[i];
            score[3] += p4[i];
        }
    max=score[0];
    for (i=1;i<n;i++)
        {
            if (score[i]>max)
                {
                    max = score[i];
                }
        }

    SortArray(score, n);
    printf("Rank of all the Players is: \n");
    for (i=0;i<n;i++)
        {
            rank[i][0] = score[i];
            rank[0][i] = i+1; 
            printf("Rank: %d = Player %d\n", rank[0][i], score[i]);
        }
    
}



int main()
{
    int n=4; 
    int p1[4]={0, 1, 2, 0}, p2[4] = {1, 0, 2, 2}, p3[4] = {0, 0, 0, 2}, p4[4]={2, 2, 0, 0};
    int i, score[2]= {2,0}; 
    // printf("Enter scores of Player: 1\n");
    // for (i=0;i<n;i++)
    //     scanf("%d",&p1[i]);
    // printf("Enter scores of Player: 2\n");
    // for (i=0;i<n;i++)
    //     scanf("%d",&p2[i]);
    // printf("Enter scores of Player: 3\n");
    // for (i=0;i<n;i++)
    //     scanf("%d",&p3[i]);
    // printf("Enter scores of Player: 4\n");
    // for (i=0;i<n;i++)
    //     scanf("%d",&p4[i]);

    // update_score_board(p1, p2, p3, p4,n, p3, p2, score);
    get_player_ranks(p1, p2, p3, p4, n);
    return 0;
}