#ifndef JOHNCHI_H
#define JOHNCHI_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>

#define ROW 9
#define COLUMN 9
#define RECORD 500
#define S 1

struct match{
    int bx,by,ax,ay;
    char chess;
    struct match *next , *pre;
};
typedef struct match Match;
Match *first,*current,*previous,*space;
int i,j;
char tempX;
int selectX,selectY,targetX=5,targetY=5;
char temp;
char chessboard[ROW][COLUMN];
int count;
FILE *fptr;
extern char *optarg;
extern int optind,opterr,optopt;

void chessSetup();
void chessprint();
void chessinput();
void inputcheck();
void input_sl_again();
void input_tg_again();
void roundjudge();
void chessmove();
int moverule();
int movecheck();
void chesseat();
int winlose();
void regret_save();
void roundmove();

#endif