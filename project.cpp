#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x = 40;
float z = 0;
float mc = 6;
float mb = 243;
float bom = 255;

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 300, 0, 400, 0, 400);
    glClear(GL_COLOR_BUFFER_BIT);

    //water
    glBegin(GL_QUADS);
    glColor3f(0.74902f, 0.847059f, 0.847059f);
    glVertex2f(300.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(300.0f, 100.0f);
    glEnd();

    //boat

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(x, 60);
    glVertex2d(x - 25, 60);
    glVertex2d(x - 35, 70);
    glVertex2d(x + 10, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(x, 70);
    glVertex2d(x - 25, 70);
    glVertex2d(x - 25, 76);
    glVertex2d(x, 76);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2d(x - 5, 76);
    glVertex2d(x - 20, 76);
    glVertex2d(x - 20, 80);
    glVertex2d(x - 5, 80);

    if (x < 350)
        x = x + 0.01;
    else
        x = 0;
    glutPostRedisplay();
    glEnd();


    // 2nd boat

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(bom + 20, 15);
    glVertex2d(bom + 10, 15);
    glVertex2d(bom, 23);
    glVertex2d(bom + 30, 23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2d(bom + 25, 23);
    glVertex2d(bom + 17, 23);
    glVertex2d(bom + 11, 31);
    glVertex2d(bom + 19, 31);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(bom + 17, 23);
    glVertex2f(bom + 6, 23);
    glVertex2f(bom + 11, 31);

    if (bom > 0)
        bom = bom - 0.01;
    else
        bom = 300;
    glutPostRedisplay();
    glEnd();



    //sky

    glBegin(GL_QUADS);
    glColor3f(0.22f, 0.69f, 0.87f);
    glVertex2f(300.0f, 230.0f);
    glVertex2f(0.0f, 230.0f);
    glVertex2f(0.0f, 400.0f);
    glVertex2f(300.0f, 400.0f);
    glEnd();

    // 1st house

    glBegin(GL_QUADS);
    glColor3f(0.847059f, 0.847059f, 0.74902f);
    glVertex2f(50.0f, 230.0f);
    glVertex2f(15.0f, 230.0f);
    glVertex2f(15.0f, 320.0f);
    glVertex2f(50.0f, 320.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.0f);
    glVertex2f(40.0f, 230.0f);
    glVertex2f(25.0f, 230.0f);
    glVertex2f(25.0f, 260.0f);
    glVertex2f(40.0f, 260.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(50.0f, 270.0f);
    glVertex2f(15.0f, 270.0f);
    glVertex2f(15.0f, 280.0f);
    glVertex2f(50.0f, 280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(50.0f, 290.0f);
    glVertex2f(15.0f, 290.0f);
    glVertex2f(15.0f, 300.0f);
    glVertex2f(50.0f, 300.0f);
    glEnd();

    //2nd house

    glBegin(GL_QUADS);
    glColor3f(0.419608f, 0.137255f, 0.556863f);
    glVertex2f(83.0f, 230.0f);
    glVertex2f(70.0f, 230.0f);
    glVertex2f(70.0f, 317.0f);
    glVertex2f(83.0f, 317.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(96.0f, 230.0f);
    glVertex2f(83.0f, 230.0f);
    glVertex2f(83.0f, 320.0f);
    glVertex2f(96.0f, 320.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(109.0f, 230.0f);
    glVertex2f(96.0f, 230.0f);
    glVertex2f(96.0f, 323.0f);
    glVertex2f(109.0f, 323.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(112.0f, 230.0f);
    glVertex2f(109.0f, 230.0f);
    glVertex2f(109.0f, 323.0f);
    glVertex2f(112.0f, 318.0f);
    glEnd();

    //1st column window

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(80.0f, 245.0f);
    glVertex2f(73.0f, 245.0f);
    glVertex2f(73.0f, 257.0f);
    glVertex2f(80.0f, 257.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(80.0f, 267.0f);
    glVertex2f(73.0f, 267.0f);
    glVertex2f(73.0f, 279.0f);
    glVertex2f(80.0f, 279.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(80.0f, 289.0f);
    glVertex2f(73.0f, 289.0f);
    glVertex2f(73.0f, 301.0f);
    glVertex2f(80.0f, 301.0f);
    glEnd();

    //2nd column window

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(93.0f, 245.0f);
    glVertex2f(86.0f, 245.0f);
    glVertex2f(86.0f, 257.0f);
    glVertex2f(93.0f, 257.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(93.0f, 267.0f);
    glVertex2f(86.0f, 267.0f);
    glVertex2f(86.0f, 279.0f);
    glVertex2f(93.0f, 279.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(93.0f, 289.0f);
    glVertex2f(86.0f, 289.0f);
    glVertex2f(86.0f, 301.0f);
    glVertex2f(93.0f, 301.0f);
    glEnd();

    //3rd column window

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(106.0f, 245.0f);
    glVertex2f(99.0f, 245.0f);
    glVertex2f(99.0f, 257.0f);
    glVertex2f(106.0f, 257.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(106.0f, 267.0f);
    glVertex2f(99.0f, 267.0f);
    glVertex2f(99.0f, 279.0f);
    glVertex2f(106.0f, 279.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(106.0f, 289.0f);
    glVertex2f(99.0f, 289.0f);
    glVertex2f(99.0f, 301.0f);
    glVertex2f(106.0f, 301.0f);
    glEnd();

    //3rd house

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(190.0f, 230.0f);
    glVertex2f(140.0f, 230.0f);
    glVertex2f(140.0f, 300.0f);
    glVertex2f(190.0f, 300.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(195.0f, 300.0f);
    glVertex2f(135.0f, 300.0f);
    glVertex2f(135.0f, 305.0f);
    glVertex2f(195.0f, 305.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(180.0f, 305.0f);
    glVertex2f(150.0f, 305.0f);
    glVertex2f(150.0f, 315.0f);
    glVertex2f(180.0f, 315.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1f, 0.1f, 0.0f);
    glVertex2f(183.0f, 315.0f);
    glVertex2f(147.0f, 315.0f);
    glVertex2f(165.0f, 330.0f);
    glEnd();

    //3rd house door

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.0f);
    glVertex2f(175.0f, 230.0f);
    glVertex2f(155.0f, 230.0f);
    glVertex2f(155.0f, 270.0f);
    glVertex2f(175.0f, 270.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1f, 0.1f, 0.0f);
    glVertex2f(178.0f, 270.0f);
    glVertex2f(152.0f, 270.0f);
    glVertex2f(165.0f, 280.0f);
    glEnd();

    //3rd house window

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(150.0f, 247.0f);
    glVertex2f(143.0f, 247.0f);
    glVertex2f(143.0f, 260.0f);
    glVertex2f(150.0f, 260.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(150.0f, 270.0f);
    glVertex2f(143.0f, 270.0f);
    glVertex2f(143.0f, 283.0f);
    glVertex2f(150.0f, 283.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(187.0f, 247.0f);
    glVertex2f(180.0f, 247.0f);
    glVertex2f(180.0f, 260.0f);
    glVertex2f(187.0f, 260.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2f(187.0f, 270.0f);
    glVertex2f(180.0f, 270.0f);
    glVertex2f(180.0f, 283.0f);
    glVertex2f(187.0f, 283.0f);
    glEnd();

    //road border

    glBegin(GL_QUADS);
    glColor3f(0.623529f, 0.623529f, 0.372549f);
    glVertex2f(300.0f, 220.0f);
    glVertex2f(0.0f, 220.0f);
    glVertex2f(0.0f, 230.0f);
    glVertex2f(300.0f, 230.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.623529f, 0.623529f, 0.372549f);
    glVertex2f(300.0f, 100.0f);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 110.0f);
    glVertex2f(300.0f, 110.0f);
    glEnd();

    //road middle line

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(15.0f, 162.0f);
    glVertex2f(5.0f, 162.0f);
    glVertex2f(5.0f, 168.0f);
    glVertex2f(15.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(35.0f, 162.0f);
    glVertex2f(25.0f, 162.0f);
    glVertex2f(25.0f, 168.0f);
    glVertex2f(35.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(55.0f, 162.0f);
    glVertex2f(45.0f, 162.0f);
    glVertex2f(45.0f, 168.0f);
    glVertex2f(55.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(75.0f, 162.0f);
    glVertex2f(65.0f, 162.0f);
    glVertex2f(65.0f, 168.0f);
    glVertex2f(75.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(95.0f, 162.0f);
    glVertex2f(85.0f, 162.0f);
    glVertex2f(85.0f, 168.0f);
    glVertex2f(95.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(115.0f, 162.0f);
    glVertex2f(105.0f, 162.0f);
    glVertex2f(105.0f, 168.0f);
    glVertex2f(115.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(135.0f, 162.0f);
    glVertex2f(125.0f, 162.0f);
    glVertex2f(125.0f, 168.0f);
    glVertex2f(135.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(155.0f, 162.0f);
    glVertex2f(145.0f, 162.0f);
    glVertex2f(145.0f, 168.0f);
    glVertex2f(155.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(175.0f, 162.0f);
    glVertex2f(165.0f, 162.0f);
    glVertex2f(165.0f, 168.0f);
    glVertex2f(175.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(195.0f, 162.0f);
    glVertex2f(185.0f, 162.0f);
    glVertex2f(185.0f, 168.0f);
    glVertex2f(195.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(215.0f, 162.0f);
    glVertex2f(205.0f, 162.0f);
    glVertex2f(205.0f, 168.0f);
    glVertex2f(215.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(235.0f, 162.0f);
    glVertex2f(225.0f, 162.0f);
    glVertex2f(225.0f, 168.0f);
    glVertex2f(235.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(255.0f, 162.0f);
    glVertex2f(245.0f, 162.0f);
    glVertex2f(245.0f, 168.0f);
    glVertex2f(255.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(275.0f, 162.0f);
    glVertex2f(265.0f, 162.0f);
    glVertex2f(265.0f, 168.0f);
    glVertex2f(275.0f, 168.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(295.0f, 162.0f);
    glVertex2f(285.0f, 162.0f);
    glVertex2f(285.0f, 168.0f);
    glVertex2f(295.0f, 168.0f);
    glEnd();


    //car 1

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(mc + 21, 182);
    glVertex2d(mc, 182);
    glVertex2d(mc, 195);
    glVertex2d(mc + 20, 195);
    glVertex2d(mc + 21, 193);
    glEnd();

    glBegin(GL_QUADS);
    glColor3d(1.0f, 1.0f, 1.0f);
    glVertex2d(mc + 16, 195);
    glVertex2d(mc + 2, 195);
    glVertex2d(mc + 6, 203);
    glVertex2d(mc + 12, 203);
    glEnd();

    int carx = mc + 16;
    int cary = 183;
    float redcar;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        redcar = i * (3.1416 / 180);
        glVertex2d(carx + 2 * cos(redcar), cary + 5 * sin(redcar));
    }

    glEnd();

    int carx1 = mc + 4;
    int cary1 = 183;
    float redcar1;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        redcar1 = i * (3.1416 / 180);
        glVertex2d(carx1 + 2 * cos(redcar1), cary1 + 5 * sin(redcar1));
    }

    if (mc < 400)
        mc = mc + 0.1;
    else
        mc = 0;
    glutPostRedisplay();

    glEnd();


    //car 2

    glBegin(GL_POLYGON);
    glColor3f(0.647059f, 0.164706f, 0.164706f);
    glVertex2d(mb + 47, 125);
    glVertex2d(mb, 125);
    glVertex2d(mb, 180);
    glVertex2d(mb + 47, 180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(mb + 47, 140);
    glVertex2d(mb + 32, 140);
    glVertex2d(mb + 32, 165);
    glVertex2d(mb + 47, 165);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(mb + 31, 140);
    glVertex2d(mb + 16, 140);
    glVertex2d(mb + 16, 165);
    glVertex2d(mb + 31, 165);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(mb + 15, 140);
    glVertex2d(mb, 140);
    glVertex2d(mb, 172);
    glVertex2d(mb + 15, 172);
    glEnd();

    int busx = mb + 39;
    int busy = 124;
    float bus;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        bus = i * (3.1416 / 180);
        glVertex2d(busx + 3 * cos(bus), busy + 7 * sin(bus));
    }

    glEnd();

    int busx1 = mb + 30;
    int busy1 = 124;
    float bus1;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        bus1 = i * (3.1416 / 180);
        glVertex2d(busx1 + 3 * cos(bus1), busy1 + 7 * sin(bus1));
    }

    glEnd();

    int busx2 = mb + 9;
    int busy2 = 124;
    float bus2;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        bus2 = i * (3.1416 / 180);
        glVertex2d(busx2 + 3 * cos(bus2), busy2 + 7 * sin(bus2));
    }

    if (mb > -50)
        mb = mb - 0.1;
    else
        mb = 330;
    glutPostRedisplay();

    glEnd();


    //sun

    int x = 270;
    int y = 370;
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.95f, 0.0f);
    for (int i = 0;i < 360;i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + 10 * cos(th), y + 20 * sin(th));
    }

    glEnd();


    //cloud

    int b = 355;
    float cl;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        cl = i * (3.1416 / 180);
        glVertex2f(z + 12 * cos(cl), b + 20 * sin(cl));
    }



    int d = 355;
    float cl1;
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0;i < 360;i++)
    {
        cl1 = i * (3.1416 / 180);
        glVertex2f((z + 15) + 12 * cos(cl1), d + 20 * sin(cl1));
    }



    if (z < 300)
        z = z + 0.01;
    else
        z = 0;
    glutPostRedisplay();
    glEnd();


    //tree

    glBegin(GL_QUADS);
    glColor3f(0.52f, 0.37f, 0.26f);
    glVertex2d(253, 228);
    glVertex2d(247, 228);
    glVertex2d(247, 280);
    glVertex2d(253, 280);
    glEnd();

    int e = 240;
    int f = 295;
    float tr;
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    for (int i = 0;i < 360;i++)
    {
        tr = i * (3.1416 / 180);
        glVertex2f(e + 15 * cos(tr), f + 25 * sin(tr));
    }

    glEnd();

    int g = 250;
    int h = 315;
    float tr1;
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    for (int i = 0;i < 360;i++)
    {
        tr1 = i * (3.1416 / 180);
        glVertex2f(g + 15 * cos(tr1), h + 25 * sin(tr1));
    }

    glEnd();

    int k = 260;
    int l = 295;
    float tr2;
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    for (int i = 0;i < 360;i++)
    {
        tr2 = i * (3.1416 / 180);
        glVertex2f(k + 15 * cos(tr2), l + 25 * sin(tr2));
    }

    glEnd();




    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}