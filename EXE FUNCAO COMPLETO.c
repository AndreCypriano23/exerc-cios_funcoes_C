#define ex11
#include <stdio.h>


#ifdef ex1
#define pi 3.1415
//1.	Crie a fun��o Esfera que receba da fun��o main o valor do
//raio e calcule o volume da esfera o seu volume (v = 4/3*Pi*R3).
//Exiba o resultado obtido no interior da fun��o main.


float esfera(float raio){
float volume;

volume = (4.0/3) * pi * raio * raio * raio;
return volume;
}
main(){
float raio;
printf("\n Digite o valor do raio:");
scanf("%f",&raio);

printf("\n O volume da esfera e %.2f ",esfera(raio));
return 0;
getch();
}
#endif



#ifdef ex2
//2.	Crie a fun��o Verifica que receba da fun��o main um valor do tipo inteiro e declarado localmente na fun��o main.
//Na fun��o verifica  verifique e exiba se o valor � positivo ou negativo ouzero


void verifica(int valor){

if(valor==0)
printf("O valor e igual a zero");
else
if(valor<0)
printf("numero negativo");
else
printf("numero positivo");

}
int main(){
int valor;
printf("Digite um valor inteiro: ");
scanf("%d",&valor);
verifica(valor);
}
#endif






#ifdef ex3
//3.Crie a fun��o Divis�o que receba da fun��o main dois n�meros que possibilitem
// o c�lculo da divis�o do primeiro pelo segundo.
// Exiba na fun��o main os n�meros e o resultado obtido na fun��o Divis�o.

float divisao(float N1,float N2){
float divisao,resultado;
resultado=N1/N2;

//printf("AAAAA divisao e %f ",resultado);
return resultado;
}

main(){
float N1,N2;

do{


printf("Digite o primeiro numero : ");
scanf("%f",&N1);

printf("Digite o segundo numero : ");
scanf("%f",&N2);
if(N2==0)
printf("Digite um numero maior que 0");
}while(N2==0);


printf("\n A divisao e %f ",divisao(N1,N2));
}

#endif


#ifdef ex4

//4.Crie a fun��o ReajSalNovo que receba da fun��o main o valor do sal�rio e efetue o c�lculo do reajuste de sal�rio cada funcion�rio. Considere que o funcion�rio deve receber um reajuste de 15% caso
// seu sal�rio seja menor que 800 reais.
// Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na fun��o main o sal�rio antigo e novo sal�rio obtido na fun��o.


float ReajuSalNovo(float SAL){
float SALNOVO=0;


if(SAL<800){
SALNOVO=SAL+(SAL*0.15);
}
else
if(SAL<=1000){
SALNOVO=SAL+(SAL*0.10);
}
else{
SALNOVO=SAL+(SAL*0.05);
}


return SALNOVO;

}

main(){
float SAL=0;

printf("Digite o valor do salario : ");
scanf("%f",&SAL);

//printando o resultado dos cauculos feitos na outra funcao
printf("\n O salario antigo era de : %f",SAL);
printf("\n O salario novo com  o reajuste e de : %f",ReajuSalNovo(SAL));

}
#endif


#ifdef ex5
//5.Crie a fun��o ParImpar que receba da fun��o
//main um valor do tipo inteiro e maior que zero
// que verifique  se o n�mero � para ou �mpar.
//Exiba na fun��o main o n�mero e o resultado obtido na fun��o ParImpar.


int ParImpar(int N){


if(N%2==0){
printf(" %d : NUMERO PAR \n",N);}
else{
printf("%d : NUMERO IMPAR \n",N);
}
return N;
}



main(){
int N=0;

do{
printf("Digite um valor inteiro e maior que zero ");
scanf("%d",&N);
if(N<=0)
printf("\n Digite um numero maior do que zero ");
}while(N<=0);

ParImpar(N);


}
getch();




#endif




#ifdef ex6


/*6.Crie a fun��o ReajSalNovo que receba da fun��o main o valor do sal�rio e efetue o c�lculo do
reajuste de sal�rio cada funcion�rio. Considere que o funcion�rio deve receber um reajuste de 15% caso seu
sal�rio seja menor que 800 reais. Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste
ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na fun��o main o sal�rio antigo e novo
sal�rio obtido na fun��o de K n�meros definido pelo usu�rio.
Essa quantidade K dever� ser maior que zero e menor ou igual a 10.
*/

ReajuSalNovo(float SAL){
float SALNOVO=0;

if(SAL<800){
SALNOVO=SAL+(SAL*0.15);
}
else
if(SAL<=1000){
SALNOVO=SAL+(SAL*0.10);
}
else{
SALNOVO=SAL+(SAL*0.05);
}


return SALNOVO;

}







main(){
float SAL=0;

do{
printf("Digite o seu salario : \n");
scanf("%f",&SAL);
if(SAL<=0)
printf("Digite um numero maior do que 0 \n");
}while(SAL<=0);

printf("O salario atual e %f ",SAL);
printf("O salario novo e %f \n",ReajuSalNovo(SAL));


}


#endif // ex6




#ifdef ex7


/*7.	Crie a fun��o M�diaFibonacci que receba da fun��o main um valor do tipo inteiro e maior que zero que  represente a quantidade de termos da seq��ncia e calcule a m�dia dos termos da seq��ncia. Exiba na fun��o main o resultado obtido na fun��o M�diaFibonacci.
         Seq��ncia de Fibonacci:
	0  1  1  2   3   5   8  13  21....*/


main(){
int K,A=0,B=1,C=0,cont=0;
float MEDIA=0, SOMA=0;

do{
printf("\n Digite uma quantidade K de numeros quaisquer: ");
scanf("%d",&K);
if(K<=0)
printf("\n Digite um numero maior do que 0");
}while(K<=0);


printf("1");


for(cont=0;cont<K;cont++){
C=A+B;
A=B;
B=C;
printf(" %d",C);
SOMA=SOMA+C;

}
SOMA=SOMA+1;
MEDIA=SOMA/(K+1);
printf("A soma dos numeros dessa sequencia e : %f",SOMA);
printf("\n A media dos numeros dessa sequencia e : %f",MEDIA);





}

#endif // ex7






#ifdef ex8
/*8.	Crie a fun��o Delta que receba da fun��o main tr�s n�meros reais que garantem a exist�ncia de uma equa��o do segundo grau.
Verifique e exiba dentro da fun��o main se h� ra�zes reais e os seus respectivos valores. Caso contr�rio informe ao usu�rio.
	Observa��es:
a.	Condi��o de exist�ncia de uma equa��o do segundo grau: o coeficiente que acompanha o x2 dever� ser um n�mero diferente de zero.
b.	Delta maior que zero: a equa��o possui duas ra�zes reais e distintas.
c.	Delta igual � zero: a equa��o possui duas ra�zes iguais.
d.	Delta menor que zero: a equa��o n�o apresenta ra�zes reais.*/
#include<math.h>

float fdelta(float a,float b,float c)
{
    float delta = 0;

    delta = b*b-4*a*c;

printf("delta*** %f\n",delta);
    return delta;
}

 raizes(float delta, float a, float b)
{
 float x1 , x2;

    x1 = (-b+sqrt(delta))/(2*a);

    x2 =( -b-sqrt(delta))/(2*a);

    printf("x1 = %f e x2 = %f",x1,x2);

}

main()
{
    float a=0, b=0, c=0, delta=0;

    printf("Digite o valor a");
    scanf("%f", &a);

     printf("Digite o valor b");
    scanf("%f", &b);

     printf("Digite o valor c");
    scanf("%f", &c);

    delta=fdelta(a,b,c);
    if(delta < 0){
        printf("Delta negativo, conta invalida");
    }else{
    raizes(delta,a,b);
    }



}

// 1 -5 6 =






#endif // ex8

#ifdef ex9

/*9.	Crie a fun��o Fatorial que receba da fun��o main um n�mero inteiro maior ou igual a
zero e calcule o fatorial desse n�mero. Exiba na fun��o main o n�mero e o seu respectivo
 fatorial obtido na fun��o Fatorial.
 */


 fatorial(int NUM){
 int FAT;

for(FAT=1;NUM>1;NUM=NUM-1){

FAT=FAT*NUM;}




return FAT;
 }



 main(){
int NUM,FAT;

do{
printf("Digite um numero maior ou igual a zero : ");
scanf("%d",&NUM);
if(NUM<0)
printf("Digite um numero igual ou maior do que zero \n") ;
}while(NUM<0);



printf("O fatorial desse numero e %d",fatorial(NUM));





 }

#endif // ex9




#ifdef ex10
// ex10
/*10.	Crie a fun��o TipoTriangulo que receba da fun��o main tr�s n�meros reais que representam  um triangulo j� definido no interior da fun��o main. Exiba no interior dessa fun��o o tipo do triangulo baseado nas condi��es abaixo.
Observa��es:
a.	Garantir que cada lado � menor que a soma dos outros dois lados.
b.	O tri�ngulo � eq�il�tero quando todos os lados s�o iguais.
c.	O tri�ngulo � is�sceles quando apenas dois lados s�o iguais.
d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes.*/


void TIPOTRIANGULO(float A, float B, float C){


if(A==B && B==C)
printf("\n O triangulo eh Equilatero ");
else
if(A==B || B==C || A==C)
printf("\n O triangulo e Isoceles ");
else
printf("\n O triangulo e Escaleno");


}
main(){
float A,B,C;



do{
printf("\nDigite o primeiro numero do trangulo: ");
scanf("%d",&A);
printf("\nDigite o segundo numero do trangulo: ");
scanf("%d",&B);
printf("\nDigite o terceiro numero do trangulo: ");
scanf("%d",&C);
if(A>=B+C && B>=A+C && C>=A+B)
printf("\nDigite novos dados");
}while(A>=B+C && B>=A+C && C>=A+B);

TIPOTRIANGULO(A,B,C);

}
#endif
#ifdef ex11


/*11.	Crie a fun��o Categoria que receba da fun��o main um valor do tipo inteiro e
 maior que zero que representa a idade e que verifique a categoria  baseada na  tabela abaixo.
 Exiba na fun��o main o n�mero e a categoria de um grupo de K n�meros definido pelo usu�rio e
 armazenado no vetor Idades.
 Essa quantidade K dever� ser maior ou igual a 3 e menor ou igual a 10*/
categoria(int IDADE){


if(IDADE>=5 && IDADE<=7){
printf("\n INFANTIL  A");
}
else
if (IDADE >=8 && IDADE<=10 ){
printf("\n INFANTIL  B");
}
else
if(IDADE >=11 && IDADE<=13){
    printf("\n JUVENIL A ");
}
else
if(IDADE >=14 && IDADE<=17){
    printf("\n JUVENIL B ");
}
else
if(IDADE>18){
printf("\n ADULTO");
}



}






main(){

int IDADE,VETORIDADE[10],K=0,cont;


do{
printf("\n Digite uma quantidade K de idades de pessoas : ");
scanf("%d",&K);
if(K<3 || K>10)
printf("\n Digite novos dados");
}while(K<3 || K>10);




for(cont=0;cont<K;cont++){

do{
printf("\n Digite a %d idade ",cont+1);
scanf("%d",&VETORIDADE[cont]);
if(VETORIDADE[cont]<=0)
printf("Digite uma idade maior do que zero ");
}while(VETORIDADE[cont]<= 0);
IDADE=VETORIDADE[cont];
categoria(VETORIDADE[cont]);

}







}
#endif // ex10


