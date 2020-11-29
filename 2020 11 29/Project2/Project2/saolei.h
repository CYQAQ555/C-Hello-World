
#define MINE_NUM 20
#define ROW 9
#define COL 9

char** creatMat(int row, int col);

void intMat(char** Mat, int row, int col, char ch);

void setMine(char** Mat, int row, int col);

void showMat(char** Mat, int row, int col);

int getMineNum(char** Mat, int row, int col, int x, int y);

void game(char** mineMat, char** mineInfo, int row, int col);
