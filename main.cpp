#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

GLfloat chute=-6;
GLfloat lados;
GLfloat rodar=0;
GLfloat altura=-2;
GLfloat auxAltura=-2;
GLfloat entrada = 0;
GLfloat campoMexe = -13;

int bloqueia = 0;
int animaSeta=0;
int pareRodar=0;
int i = 1;
float mapa1 = 0;
float mapa2 = 5;
float mapa3 = 10;

int teste = 2;
int teste1 = 0;
int teste2 = 0;

int a = 0;
float r = 0;
float g = 0;
float b = 0;
float r2 = 1;
float g2 = 1;
float b2 = 1;
int mapaselecionado = 0;
int tela = 0;

float r1=0;
float palavra = 9;

void telaInicial(void)
{
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void delay(float secs)
{
	Sleep(10);
}

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

void output(int x, int y,int z, int font, char *string)
{

    int len, i;
        glTranslatef(x,y,z);
        glScalef(0.02,0.02,0.02);
        glLineWidth(5);


    len = (int)strlen(string);

    for (i = 0; i < len; i++)
        {
        glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, string[i]);
        }
    glLoadIdentity();
}

void campos(int r, int g, int b, int r2, int g2, int b2)
{
    if(a == 0)
        {
            telaInicial();
        }
    if(a == 1)
        {

    glColor3f(0.9,0.9,0.9);

    glLineWidth(1);
    glPushMatrix();
        glTranslated(0.45,0.15,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.25,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.35,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.45,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.55,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.65,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.75,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.45,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.15,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.25,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.35,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.45,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.55,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.65,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.75,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.45,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.35,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.25,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.15,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.05,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.05,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.15,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.25,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.35,0.85,-1);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,0,0);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0.9,0.9,0.9);
    glPushMatrix();
        glTranslated(0.2,0,0);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,0);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,0);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,0);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0.9,0.9,0.9);

    glPushMatrix();
        glTranslated(0,0,0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(0.2,0,0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0.9,0.9,0.9);

    glPushMatrix();
        glTranslated(0,0,-0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(0.2,0,-0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,-0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,-0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,-0.2);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,0,0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,0,-0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,-0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,-0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,-0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,-0.4);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(0,0,-0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,-0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,-0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,-0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,-0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(0,0,0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,0.6);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,0,0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,0,-0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,-0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,-0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,-0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,-0.8);
        glutSolidCube(0.2);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(0,0,-1);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.2,0,-1);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.2,0,-1);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.4,0,-1);
        glutSolidCube(0.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.4,0,-1);
        glutSolidCube(0.2);
    glPopMatrix();

        glColor3f(r,g,b);

    glPushMatrix();
        glTranslated(-0.8,0,-0.2);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.8,0,-0.2);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.8,0,1);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.8,0,1);
        glutSolidCube(0.6);
    glPopMatrix();

    glColor3f(r2,g2,b2);

    glPushMatrix();
        glTranslated(-0.8,0,-0.8);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.8,0,-0.8);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.8,0,0.4);
        glutSolidCube(0.6);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.8,0,0.4);
        glutSolidCube(0.6);
    glPopMatrix();

    glColor3f(0.9,0.9,0.9);
    glBegin(GL_LINES);
        glVertex3f(0.30,0.8,-1);
        glVertex3f(0.30,0,-1.5);

        glVertex3f(0.10,0.8,-1);
        glVertex3f(0.10,0,-1.5);

        glVertex3f(-0.10,0.8,-1);
        glVertex3f(-0.10,0,-1.5);

        glVertex3f(-0.30,0.8,-1);
        glVertex3f(-0.30,0,-1.5);

        glVertex3f(0.45,0.7,-1.1);
        glVertex3f(-0.45,0.7,-1.1);

        glVertex3f(0.45,0.45,-1.2);
        glVertex3f(-0.45,0.45,-1.2);

        glVertex3f(0.45,0.2,-1.4);
        glVertex3f(-0.45,0.2,-1.4);

    glEnd();
        }
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,1,1);
    switch(tela)
    {
        case 0:

    glLineWidth(20);
    glLoadIdentity();
    glBegin(GL_LINES);
        glVertex3f(3,2,-10);
        glVertex3f(4,1,-10);

        glVertex3f(4,1,-10);
        glVertex3f(3,0,-10);

        glVertex3f(-3,2,-10);
        glVertex3f(-4,1,-10);

        glVertex3f(-4,1,-10);
        glVertex3f(-3,0,-10);
    glEnd();

    glLoadIdentity();
    glRotated(30,1,0,0);
    glTranslated(mapa1,-3,-6);
    glPushMatrix();
    glRotated(r1,0,1,0);
    r1+=0.2;
    campos(1,0,0,0,0,0);
    glPopMatrix();

    glLoadIdentity();
    glRotated(30,1,0,0);
    glTranslated(mapa2,-3,-6);
    glPushMatrix();
    glRotated(r1,0,1,0);
    r1+=0.2;
    campos(0,0,1,1,1,1);
    glPopMatrix();

    glLoadIdentity();
    glRotated(30,1,0,0);
    glTranslated(mapa3,-3,-6);
    glPushMatrix();
    glRotated(r1,0,1,0);
    r1+=0.2;
    campos(0,1,0,1,1,1);
    glPopMatrix();

    if(teste == 0)
    {
        mapa1 += 0.2;
        mapa2 += 0.2;
        mapa3 += 0.2;
        if(mapa2 >= 0 && teste1 == 0)
        {
            teste = 3;
            teste1 = 1;
        }
        if(mapa2 >= 5 && teste1 == 1)
        {
            teste = 3;
            teste1 = 0;
        }
    }
    if(teste == 1)
    {
        mapa1 -= 0.2;
        mapa2 -= 0.2;
        mapa3 -= 0.2;
        if(mapa2 <= 0 && teste1 == 0)
        {
            teste = 3;
            teste1 = 1;
        }
        if(mapa2 <= -5 && teste1 == 1)
        {
            teste = 3;
            teste1 = 0;
        }
    }
    if(a == 0)
    {
    glLoadIdentity();
    output(-45,20,-60,1,"DESENVOLVIDO POR DIOGO LIMA E LUCAS RAPHAEL");
    glLoadIdentity();
    output(-30,-2,-60,1,"BEM VINDO AO JOGO DO PENALTI");
    glLoadIdentity();
    output(-25,-25,-65,1,"SE DESEJA INICAR APERTE i");
    }
    else
    {
    glLoadIdentity();
    output(-38,-10,-50,1,"APERTE A OU D PARA ESCOLHER O CAMPO");
    glLoadIdentity();
    output(-55,-20,-70,1,"APERTE ENTRER PARA CONFIRMAR O CAMPO DESEJA JOGAR");
    }
    break;
    case 1:
    if(entrada == 0 || entrada == 1)
    {
            if(entrada == 0)
            {
                glLoadIdentity();
                glRotated(90,0,1,0);
                glRotated(30,0,0,1);
                glTranslated(10,-2,campoMexe);
                campoMexe+=0.5;
                delay(0);

                if(campoMexe >= 25)
                    entrada =  1;
            }

            if(entrada == 1)
            {
                if(bloqueia == 0)
                {
                campoMexe = 15;
                bloqueia = 1;
                }
                glLoadIdentity();
                glTranslated(0,0,campoMexe);
                campoMexe-=0.5;
                delay(0);
                if(campoMexe == 0)
                {
                    entrada = 3;
                    glLoadIdentity();
                }
            }

    }
    glColor3f(1,0,0);
    glPushMatrix();
        glTranslated(lados,altura,chute);
        glutSolidSphere(0.5,32,32);
    glPopMatrix();

    glColor3f(1,1,1);
    glPushMatrix();
    glTranslatef(0,-4,0);
    glBegin(GL_LINES);
    glVertex3f(0,5,-14);
    glVertex3f(0,0,-17);

    glVertex3f(1,5,-14);
    glVertex3f(1,0,-17);

    glVertex3f(-1,5,-14);
    glVertex3f(-1,0,-17);

    glVertex3f(2,5,-14);
    glVertex3f(2,0,-17);

    glVertex3f(-2,5,-14);
    glVertex3f(-2,0,-17);

    glVertex3f(3,5,-14);
    glVertex3f(3,0,-17);

    glVertex3f(-3,5,-14);
    glVertex3f(-3,0,-17);

    glVertex3f(-3,4,-14.5);
    glVertex3f(3,4,-14.5);

    glVertex3f(-3.1,3,-15.5);
    glVertex3f(3.1,3,-15.5);

    glVertex3f(-3.1,2,-16);
    glVertex3f(3.1,2,-16);
    glEnd();
    glPopMatrix();

    if(animaSeta == 0)
    {
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslatef(0,-2,0);
    glRotatef(rodar,0,0,1);
    glBegin(GL_QUADS);
    glVertex3f(0.2,0,-5.8);
    glVertex3f(0.2,0.7,-5.8);
    glVertex3f(-0.2,0.7,-5.8);
    glVertex3f(-0.2,0,-5.8);
    glVertex3f(0.4,0.7,-5.8);
    glVertex3f(0,1,-5.8);
    glVertex3f(0,1,-5.8);
    glVertex3f(-0.4,0.7,-5.8);
    glEnd();
    glPopMatrix();
    }
    if(animaSeta == 0)
    {
        if(rodar > -60 && pareRodar == 0)
        {
            rodar--;
            delay(0);
            if(rodar == -60)
            {
                pareRodar = 1;
            }
        }
        if(rodar < 60 && pareRodar == 1)
        {
            rodar++;
            delay(0);
            if(rodar == 60)
            {
                pareRodar = 0;
            }
        }
    }

    if(animaSeta == 1)
    {
            lados= lados - rodar / 100;
            chute--;
            altura= (altura + (i*auxAltura));
            i++;
            delay(0);
        if(chute == -14)
        {
            animaSeta = 3;
        }
    }

    if(animaSeta == 3)
    {
        if(rodar <= 36 && rodar >= -36 && altura <= 0.47)
        {
            animaSeta = 4;
            teste2 = 2;
        }
        else
        {
            animaSeta = 4;
            teste2 = 1;
        }
    }
    if(teste2 == 1)
    {
    glColor3f(0.9,0,0);
    glLoadIdentity();
    output(palavra,0,-10,1,"ERRRROOOOOUUUU");
    palavra -= 0.2;
    if(palavra < -40)
    {
        teste2 = 0;
        palavra = 9;
    }
    }
    if(teste2 == 2)
    {
    glColor3f(0,0.9,0);
    glLoadIdentity();
    output(palavra,0,-10,1,"GOOOOOOOOOOOOL");
    palavra -= 0.2;
    if(palavra < -40)
    {
        teste2 = 0;
        palavra = 9;
    }
    }
    glColor3f(0.9,0.9,0.9);

    //TRAVE DIREITA
    glPushMatrix();
        glTranslated(3.25,-2.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,-2,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,-1.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,-1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,-0.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,0,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,0.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3.25,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();


    //TRAVE ESQUERDA
    glPushMatrix();
        glTranslated(-3.25,-2.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,-2,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,-1.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,-1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,-0.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,0,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,0.5,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.25,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    //TRAVESSÃO
    glPushMatrix();
        glTranslated(-3,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2.5,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(3,1,-14);
        glutSolidCube(0.5);
    glPopMatrix();


    //CHÃO VERDE CLARO 1
    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(3,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-5.5);
        glutSolidCube(1);
    glPopMatrix();

    //VERDE ESCURO 1
    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(3,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-6.5);
        glutSolidCube(1);
    glPopMatrix();

    //CHÃO VERDE CLARO 2
    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(3,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-7.5);
        glutSolidCube(1);
    glPopMatrix();

    //VERDE ESCURO 2
    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(3,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1,1,1);

    glPushMatrix();
        glTranslated(0,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(-1,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-8.5);
        glutSolidCube(1);
    glPopMatrix();

    //CHÃO VERDE CLARO 3
    glColor3f(1,1,1);

    glPushMatrix();
        glTranslated(3,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(0,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1,1,1);

    glPushMatrix();
        glTranslated(-1,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-9.5);
        glutSolidCube(1);
    glPopMatrix();

    //VERDE ESCURO 3
    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(3,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1,1,1);

    glPushMatrix();
        glTranslated(0,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(-1,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-10.5);
        glutSolidCube(1);
    glPopMatrix();

    //CHÃO VERDE CLARO 4
    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(3,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-11.5);
        glutSolidCube(1);
    glPopMatrix();

    //VERDE ESCURO 4
    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(3,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-12.5);
        glutSolidCube(1);
    glPopMatrix();

    //CHÃO VERDE CLARO 5
    glColor3f(0,0.8,0);

    glPushMatrix();
        glTranslated(3,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-13.5);
        glutSolidCube(1);
    glPopMatrix();

    //VERDE ESCURO 5
    glColor3f(0,0.6,0);

    glPushMatrix();
        glTranslated(3,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-1,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3,-3,-14.5);
        glutSolidCube(1);
    glPopMatrix();

    //LADO ESQUERDA
    glColor3f(r,g,b);
    glPushMatrix();
        glTranslated(-5,-3,-5);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-5,-3,-11);
        glutSolidCube(3);
    glPopMatrix();

    glColor3f(r2,g2,b2);
    glPushMatrix();
        glTranslated(-5,-3,-8);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-5,-3,-14);
        glutSolidCube(3);
    glPopMatrix();

    //LADO DIREITA
    glColor3f(r,g,b);
    glPushMatrix();
        glTranslated(5,-3,-5);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(5,-3,-11);
        glutSolidCube(3);
    glPopMatrix();

    glColor3f(r2,g2,b2);
    glPushMatrix();
        glTranslated(5,-3,-8);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(5,-3,-14);
        glutSolidCube(3);
    glPopMatrix();
    break;
    }

    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'a': if(mapa2 >= -5.199999 && mapa2 <=5)
                    {
                    teste = 0;
                    mapaselecionado--;
                    }
            break;
        case 'A': if(mapa2 >= -5.199999 && mapa2 <=5)
                    {
                    teste = 0;
                    mapaselecionado--;
                    }
            break;

        case 'd': if(mapa2 <= 5.00010 && mapa2 >=-5)
                    {
                    teste = 1;
                    mapaselecionado++;
                    }
            break;

        case 'D': if(mapa2 <= 5.00010 && mapa2 >=-5)
                    {
                    teste = 1;
                    mapaselecionado++;
                    }
            break;

        case ' ': if(tela == 1)
                    {
                    animaSeta=1;
                    srand(time(NULL));
                    auxAltura = rand() % 401;
                    auxAltura = (auxAltura / 100);
                    auxAltura = auxAltura / 28;
                    }
            break;
        case 27: exit(0);
            break;

        case 'r' : animaSeta = 0;
                   chute = -6;
                   altura = -2;
                   auxAltura = -2;
                   lados = 0;
                   i = 1;
                   glClearColor(0.025,0.4,0.9,0);
            break;

        case 'R' : animaSeta = 0;
                   chute = -6;
                   altura = -2;
                   auxAltura = -2;
                   lados = 0;
                   i = 1;
                   glClearColor(0.025,0.4,0.9,0);
            break;

        case 'i': if(a==0)
        a = 1;
                    break;
        case 'I':  if(a==0)
        a = 1;
                    break;

        case 13: if(mapaselecionado == 0)
                    {
                        r = 1;
                        r2 = 0;
                        g2 = 0;
                        b2 = 0;
                        tela = 1;
                    }
                 if(mapaselecionado == 1)
                    {
                        b = 1;
                        tela = 1;
                    }
                 if(mapaselecionado == 2)
                    {
                        g = 1;
                        tela = 1;
                    }
            break;
    }
    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1280,720);
    glutInitWindowPosition(320,180);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("JOGO DO PENALTI");

    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4, 4, -4, 4, -4, 4);

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0.025,0.4,0.9,0);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
