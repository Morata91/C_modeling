#include <stdio.h>
#include <stdlib.h>
#include <GLUT/GLUT.h>
#include <Opengl/opengl.h>



GLfloat pos[] = {300, 200, 500, 1};
GLfloat red[] = { 1.0, 0.0, 0.0, 1.0 };
GLfloat yellow[] = { 1.0, 0.85, 0.0, 1.0 };
GLfloat blue[] = { 0.0, 0.32, 0.4, 1.0 };
GLfloat rightblue[] = { 0.2, 1, 1, 1.0 };
GLfloat white[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat black[] = { .1, .1, .1, 1.0 };



void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	

    //顔
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
	glutSolidSphere(50, 100, 100);

    //白いとこ
    glPushMatrix();
    glTranslatef(0.9, -0.9, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, white);
    glutSolidSphere(49, 100, 100);
    glPopMatrix();

    //人中
    glPushMatrix();
    glTranslatef(9.9, -3.95, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(40, 100, 2);
    glPopMatrix();

    //口
    glPushMatrix();
    glTranslatef(40, -3, 0);
    glScalef(1,1,0.94);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(28, 2, 30);
    glPopMatrix();
    //左目
    glPushMatrix();
    glTranslatef(40, 0, 17);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.25, 2, 1.25);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(7, 30, 30);
    glPopMatrix();
    //左瞳
    glPushMatrix();
    glTranslatef(47, 3, 20);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.25, 2, 1.25);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, white);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //右目
    glPushMatrix();
    glTranslatef(40, 0, -17);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.25, 2, 1.25);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(7, 30, 30);
    glPopMatrix();
    //右瞳
    glPushMatrix();
    glTranslatef(47, 3, -17);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.25, 2, 1.25);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, white);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    
    //鼻
    glPushMatrix();
    glTranslatef(50, -7, 0);
//    glRotatef(25, 0, 0, 1);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, red);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    
    //耳
    glPushMatrix();
    glTranslatef(0, 38, 32);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(5, 10, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 38, -32);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(5, 10, 30,30);
    glPopMatrix();
    
    //黒いとこ縦
    glPushMatrix();
    glTranslatef(-2.5, 3.5, 0);
//    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 46, 30,30);
    glPopMatrix();
    
    //黒いとこ横
    //1
    glPushMatrix();
    glTranslatef(35, 20, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 10, 30,30);
    glPopMatrix();
    //2
    glPushMatrix();
    glTranslatef(25, 28, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 13, 30,30);
    glPopMatrix();
    //3
    glPushMatrix();
    glTranslatef(10, 26, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 20, 30,30);
    glPopMatrix();
    //4
    glPushMatrix();
    glTranslatef(-10, 25, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 22, 30,30);
    glPopMatrix();
    //5
    glPushMatrix();
    glTranslatef(-6, 15, 0);
    glRotatef(90, 1, 0, 0);
    glRotatef(-30, 0, 1, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 35, 30,30);
    glPopMatrix();
    //6
    glPushMatrix();
    glTranslatef(-3.5, 14, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(1,0.94,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 46.2, 30,30);
    glPopMatrix();
    //7
    glPushMatrix();
    glTranslatef(-3.5, -5, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(1,0.97,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 47, 30,30);
    glPopMatrix();
    //8
    glPushMatrix();
    glTranslatef(-12, -20, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(1,1,1.3);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(5, 30, 30,30);
    glPopMatrix();
    
    //ヒゲ
    //1
    glPushMatrix();
    glColor3d(0,0,0);
    glTranslatef(30, -17, 35);
    glRotatef(0, 1, 0, 0);
    glRotatef(-35, 0, 1, 0);
    glBegin(GL_LINES);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, 20);
    glEnd();
    glPopMatrix();
    //2
    glPushMatrix();
    glColor3d(0,0,0);
    glTranslatef(27, -20, 35);
    glRotatef(15, 1, 0, 0);
    glRotatef(-35, 0, 1, 0);
    glBegin(GL_LINES);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, 20);
    glEnd();
    glPopMatrix();
    //3
    glPushMatrix();
    glColor3d(0,0,0);
    glTranslatef(30, -17, -35);
    glRotatef(0, 1, 0, 0);
    glRotatef(35, 0, 1, 0);
    glBegin(GL_LINES);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, -20);
    glEnd();
    glPopMatrix();
    //4
    glPushMatrix();
    glColor3d(0,0,0);
    glTranslatef(27, -20, -35);
    glRotatef(-15, 1, 0, 0);
    glRotatef(35, 0, 1, 0);
    glBegin(GL_LINES);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, -20);
    glEnd();
    glPopMatrix();
    
    //眉毛左
    glPushMatrix();
    glTranslatef(31, 15, 15);
    glRotatef(-30, 0, 1, 0);
    glRotatef(-60, 0, 0, 1);
//    glScalef(1,1,0.94);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(15, 2, 30);
    glPopMatrix();
    //眉毛右
    glPushMatrix();
    glTranslatef(31, 15, -15);
    glRotatef(30, 0, 1, 0);
    glRotatef(-60, 0, 0, 1);
//    glScalef(1,1,0.94);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidSphere(15, 2, 30);
    glPopMatrix();
    
    //胴体
    glPushMatrix();
    glTranslatef(0, -100, 0);
    glRotatef(-90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glScalef(0.7,1,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, red);
    glutSolidCone(37, 140, 30, 30);
    glPopMatrix();
    
    //ズボン
    glPushMatrix();
    glTranslatef(0, -115, 15);
    glScalef(1,35,1);
    glRotatef(90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, blue);
    glutSolidTorus(0.5, 16, 30, 30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, -115, -15);
    glScalef(1,35,1);
    glRotatef(90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, blue);
    glutSolidTorus(0.5, 16, 30, 30);
    glPopMatrix();
    
    //ケツ
    glPushMatrix();
    glTranslatef(-8.2, -106, 0);
    glScalef(1,1,3);
//    glRotatef(90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, blue);
    glutSolidSphere(10, 30, 30);
    glPopMatrix();
    
    //足
    glPushMatrix();
    glTranslatef(0, -135, 15);
    glScalef(1,35,1);
    glRotatef(90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(0.5, 13, 30, 30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, -135, -15);
    glScalef(1,35,1);
    glRotatef(90, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(0.5, 13, 30, 30);
    glPopMatrix();

    //左腕
    glPushMatrix();
    glTranslatef(0, -98, 40);
    glRotatef(-110, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glScalef(1,0.6,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, red);
    glutSolidCone(10, 90, 30, 30);
    glPopMatrix();
    //右腕
    glPushMatrix();
    glTranslatef(0, -98, -40);
    glRotatef(-70, 1, 0, 0);
//    glRotatef(-60, 0, 0, 1);
    glScalef(1,0.6,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, red);
    glutSolidCone(10, 90, 30, 30);
    glPopMatrix();
    
    //靴左
    glPushMatrix();
    glTranslatef(7.5, -150, 17);
//    glRotatef(25, 0, 0, 1);
    glScalef(3.5,1,1.7);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, rightblue);
    glutSolidSphere(7.5, 30, 30);
    glPopMatrix();
    //靴右
    glPushMatrix();
    glTranslatef(7.5, -150, -17);
//    glRotatef(25, 0, 0, 1);
    glScalef(3.5,1,1.7);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, rightblue);
    glutSolidSphere(7.5, 30, 30);
    glPopMatrix();
    
    //靴底左
    glPushMatrix();
    glTranslatef(7.5, -155, 17);
//    glRotatef(25, 0, 0, 1);
    glScalef(3.5,0.3,1.7);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, white);
    glutSolidSphere(7.5, 30, 30);
    glPopMatrix();
    //靴底右
    glPushMatrix();
    glTranslatef(7.5, -155, -17);
//    glRotatef(25, 0, 0, 1);
    glScalef(3.5,0.3,1.7);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, white);
    glutSolidSphere(7.5, 30, 30);
    glPopMatrix();
    
    //左手
    //手のひら
    glPushMatrix();
    glTranslatef(-1, -100, 42);
//    glRotatef(25, 0, 0, 1);
    glScalef(1,0.5,0.35);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(8, 30, 30);
    glPopMatrix();
    //第一関節
    //小指
    glPushMatrix();
    glTranslatef(-6.5, -103, 42);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //薬指
    glPushMatrix();
    glTranslatef(-3.5, -104, 42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.8, 30, 30);
    glPopMatrix();
    //中指
    glPushMatrix();
    glTranslatef(-0.5, -104.5, 42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //人差し指
    glPushMatrix();
    glTranslatef(3, -104.5, 42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //第2関節
    //小指
    glPushMatrix();
    glTranslatef(-6.5, -104, 41);
    glRotatef(30, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //薬指
    glPushMatrix();
    glTranslatef(-3.5, -105, 41);
    glRotatef(30, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //中指
    glPushMatrix();
    glTranslatef(-0.5, -105.5, 41.5);
    glRotatef(30, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //人差し指
    glPushMatrix();
    glTranslatef(3, -105.5, 41.5);
    glRotatef(30, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //親指
    glPushMatrix();
    glTranslatef(6,-102, 40.5);
//    glRotatef(30, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    
    //右手
    //手のひら
    glPushMatrix();
    glTranslatef(-1, -100, -42);
//    glRotatef(25, 0, 0, 1);
    glScalef(1,0.5,0.35);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(8, 30, 30);
    glPopMatrix();
    //第一関節
    //小指
    glPushMatrix();
    glTranslatef(-6.5, -103, -42);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //薬指
    glPushMatrix();
    glTranslatef(-3.5, -104, -42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.8, 30, 30);
    glPopMatrix();
    //中指
    glPushMatrix();
    glTranslatef(-0.5, -104.5, -42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //人差し指
    glPushMatrix();
    glTranslatef(3, -104.5, -42.5);
//    glRotatef(25, 0, 0, 1);
    glScalef(1.3,1.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //第2関節
    //小指
    glPushMatrix();
    glTranslatef(-6.5, -104, -41);
    glRotatef(150, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //薬指
    glPushMatrix();
    glTranslatef(-3.5, -105, -41);
    glRotatef(150, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(1.6, 30, 30);
    glPopMatrix();
    //中指
    glPushMatrix();
    glTranslatef(-0.5, -105.5, -41.5);
    glRotatef(150, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //人差し指
    glPushMatrix();
    glTranslatef(3, -105.5, -41.5);
    glRotatef(150, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    //親指
    glPushMatrix();
    glTranslatef(6, -102, -40.5);
//    glRotatef(150, 1, 0, 0);
    glScalef(1.3,2.5,1);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidSphere(2, 30, 30);
    glPopMatrix();
    
    //しっぽ
    //1
    glPushMatrix();
    glTranslatef(-19, -108, 0);
//    glScalef(1,1,10);
    glRotatef(90, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-20.5, -108, 1);
//    glScalef(1,1,10);
    glRotatef(90, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    //2
    glPushMatrix();
    glTranslatef(-21.5, -108, 1.5);
//    glScalef(1,1,10);
    glRotatef(110, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-23, -108, 3);
//    glScalef(1,1,10);
    glRotatef(130, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    
    //3
    glPushMatrix();
    glTranslatef(-24, -107.5, 3.5);
//    glScalef(1,1,10);
    glRotatef(150, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-25.5, -106.5, 5);
//    glScalef(1,1,10);
    glRotatef(160, 0, 1, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    
    //4
    glPushMatrix();
    glTranslatef(-25.5, -103.5, 6);
//    glScalef(1,1,10);
    glRotatef(-70, 1, 0, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-26, -102, 6.5);
//    glScalef(1,1,10);
    glRotatef(-70, 1, 0, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, yellow);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    
    //5
    glPushMatrix();
    glTranslatef(-26, -101, 7.5);
//    glScalef(1,1,10);
    glRotatef(-45, 1, 0, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-26.5, -100, 8.5);
//    glScalef(1,1,10);
    glRotatef(-45, 1, 0, 0);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, black);
    glutSolidTorus(1.9, 2, 30,30);
    glPopMatrix();

    
	glutSwapBuffers();
}

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, pos);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1, 1.0, 1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
//	  gluLookAt(0.0, -100.0, 150.0, 0.0, -50.0, 0.0, 0.0, 1.0, 0.0);
    gluLookAt(200.0, 30.0, 100.0, 0.0, -50.0, 0.0, 0.0, 1.0, 0.0);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("大レポート課題");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
