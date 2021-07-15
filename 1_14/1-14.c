void cargarArch1( int mat[F][C],char name_arch[] )
{
    FILE* archi;
    archi= fopen(name_arch, "r");

    int f;
    int c = 0;
    int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,q20,q21,q22,q23,q24,q25,q26,q27,q28,q29,q30,q31;

    if (archi == NULL)
       return -1;
    int s;
    s = fscanf(archi,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", &q1,&q2,&q3,&q4,&q5,&q6,&q7,&q8,&q9,&q10,&q11,&q12,&q13,&q14,&q15,&q16,&q17,&q18,&q19,&q20,&q21,&q22,&q23,&q24,&q25,&q26,&q27,&q28,&q29,&q30,&q31);
    //int i = 0;
   // int s1[];
    /*int s[0] = q1;
    int s[1]= q2;
    int s[2]= q3;
    int s1[3]=q4,s1[4]=q5,s1[5]=q6,s1[6]=q7,s1[7]=q8,s1[8]=q9,s1[9]=q10,s1[10]=q11,s1[11]=q12,s1[12]=q13,s1[13]=q14,s1[14]=q15,s1[15]=q16,s1[16]=q17,s1[17]=q18,s1[18]=q19,s1[19]=q20,s1[20]=q21,s1[21]=q22,s1[22]=q23,s1[23]=q24,s1[24]=q25,s1[25]=q26,s1[26]=q27,s1[27]=q28,s1[28]=q29,s1[29]=q30,s1[30]=q31;

  */
    for ( c = 0 ;c < C; c++ )
    {
       mat[0][c]=q1;
       mat[1][c]=q2;
       mat[2][c]=q3;
       mat[3][c]=q4;
       mat[4][c]=q5;
       mat[5][c]=q6;
       mat[6][c]=q7;
       mat[7][c]=q8;
       mat[8][c]=q9;
       mat[9][c]=q10;
       mat[10][c]=q11;
       mat[11][c]=q12;
       mat[12][c]=q13;
       mat[13][c]=q14;
       mat[14][c]=q15;
       mat[15][c]= q16;
       mat[16][c]= q17;
       mat[17][c]=q18;
       mat[18][c]=q19;
       mat[19][c]=q20;
       mat[20][c]=q21;
       mat[21][c]=q22;
       mat[22][c]=q23;
       mat[23][c]=q24;
       mat[24][c]=q25;
       mat[25][c]=q26;
       mat[26][c]=q27;
       mat[27][c]=q28;
       mat[28][c]=q29;
       mat[29][c]=q30;
       mat[30][c]=q31;
       s = fscanf(archi,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", &q1,&q2,&q3,&q4,&q5,&q6,&q7,&q8,&q9,&q10,&q11,&q12,&q13,&q14,&q15,&q16,&q17,&q18,&q19,&q20,&q21,&q22,&q23,&q24,&q25,&q26,&q27,&q28,&q29,&q30,&q31);
    }
    fclose(archi);
    }

void imprimirMatI(int
                  mat[F][C]){
	int f = 0, c = 0;
	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("  %2d",mat[f][c]);
		}
		printf("\n");
	}
}

int main()
{
    char name_arch[] = "tempe.txt";
    char nom[] = "diasmedidos.txt";
    int mat [F][C];
    cargarArch1 (mat,name_arch);
    imprimirMatI(mat);
    printf("\n");
    tempMinMax(mat);
    cantDias(nom);
    promMen(mat);
    return 0;
}
