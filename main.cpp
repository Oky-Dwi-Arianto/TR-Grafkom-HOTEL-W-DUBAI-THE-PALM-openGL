#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void init(void);
void tambahan(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void ukuran(int,int);
void mouseMotion(int x,int y);
void keyboard(unsigned char, int, int);


float xrot = 0.0f;
float yrot = 0.0f;
float xdiff= 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 700);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("OKY DWI ARIANTO - 672018321");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.3, 0.5, 0.8, 1);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    //glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(2.0);
    glLineWidth(2.0f);
}


void tampil(void){
     if(is_depth)
          glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     else
      glClear(GL_COLOR_BUFFER_BIT);
      glPushMatrix();
          glBegin(GL_QUADS);
               glColor3f(0,1,1);
               glVertex3f(-300,-70,250);
               glVertex3f(-250,-70,-50);
               glVertex3f(650,-70,-50);
               glVertex3f(690,-70,250);
          glEnd();

           glBegin(GL_QUADS);
               glColor3f(1,1,1);
               glVertex3f(-310,-80,300);
               glVertex3f(-260,-80,-50);
               glVertex3f(660,-80,-50);
               glVertex3f(700,-80,300);
          glEnd();

          //awal block 0

          //sebalah kiri 0
           glBegin(GL_POLYGON);
               glColor3f(0,1,1);
               glVertex3f(-175,-50,190);
               glVertex3f(-100,-50,0);
               glVertex3f(-50,-50,0);
               glVertex3f(-50,-50,50);
               glVertex3f(-125,-50,225);
          glEnd();

          //sebalah kiri 0 bawah depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-170,-50,185);
               glVertex3f(-127,-50,215);
               glVertex3f(-127,-70,215);
               glVertex3f(-170,-70,185);
          glEnd();

           //sebalah kiri 0 bawah samping kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-90,-50,125);
               glVertex3f(-127,-50,215);
               glVertex3f(-127,-70,215);
               glVertex3f(-90,-70,125);
          glEnd();

          //sebalah kiri 0 bawah belakang
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-90,-50,125);
               glVertex3f(-100,-50,0);
               glVertex3f(-100,-70,0);
               glVertex3f(-90,-70,125);
          glEnd();

          //sebalah kiri 0 bawah samping kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                glVertex3f(-100,-50,0);
               glVertex3f(-170,-50,185);
               glVertex3f(-170,-70,185);
               glVertex3f(-100,-70,0);
          glEnd();


          //sebalah kiri 0,0
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);
               glVertex3f(-175,-47,190);
               glVertex3f(-100,-47,0);
               glVertex3f(-50,-47,0);
               glVertex3f(-50,-47,50);
               glVertex3f(-125,-47,225);
          glEnd();

          //sebalah kiri 0,0 samping kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-50,-47,50);
               glVertex3f(-125,-47,225);
               glVertex3f(-125,-50,225);
               glVertex3f(-50,-50,50);
          glEnd();

          //sebalah kiri 0,0 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-50,-47,50);
               glVertex3f(-125,-47,225);
               glVertex3f(-125,-40,225);
               glVertex3f(-50,-40,50);
          glEnd();

          //sebalah kiri 0,0 bawah pagar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-175,-47,190);
               glVertex3f(-175,-40,190);
                 glVertex3f(-125,-40,225);
               glVertex3f(-125,-47,225);
          glEnd();


          //sebalah kiri 0,0 samping kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-175,-47,190);
               glVertex3f(-175,-50,190);
                 glVertex3f(-100,-50,0);
                glVertex3f(-100,-47,0);
          glEnd();

          //sebalah kiri 0,0 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-175,-47,190);
               glVertex3f(-175,-40,190);
                 glVertex3f(-100,-40,0);
                glVertex3f(-100,-47,0);
          glEnd();

          //akhir block 0




          //awal block 1

          //sebalah kiri 1
           glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-172,-32,180);
               glVertex3f(-100,-32,0);
               glVertex3f(-50,-32,0);
               glVertex3f(-50,-32,50);
               glVertex3f(-122,-32,215);
          glEnd();

                     //sebalah kiri 1 depan bawah
                     glBegin(GL_POLYGON);
                         glColor3f(1,1,1);
                         glVertex3f(-157,-32,175);
                         glVertex3f(-127,-32,200);
                         glVertex3f(-127,-47,200);
                         glVertex3f(-157,-47,175);
                    glEnd();

           //sebalah kiri 1 kiri bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-157,-32,175);
               glVertex3f(-90,-32,0);
               glVertex3f(-90,-47,0);
               glVertex3f(-157,-47,175);
          glEnd();

          //sebalah kiri 1 kanan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-127,-32,200);
               glVertex3f(-127,-47,200);
               glVertex3f(-55,-47,40);
               glVertex3f(-55,-32,40);
          glEnd();



            //sebalah kiri 1,1
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);
               glVertex3f(-172,-29,180);
               glVertex3f(-100,-29,0);
               glVertex3f(-50,-29,0);
               glVertex3f(-50,-29,50);
               glVertex3f(-122,-29,215);
          glEnd();

           //sebalah kiri 1,1 samping kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
             glVertex3f(-122,-32,215);
                glVertex3f(-122,-29,215);
                glVertex3f(-50,-29,50);
               glVertex3f(-50,-32,50);
          glEnd();

            //sebalah kiri 1,1 samping kanan pagar
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
             glVertex3f(-122,-22,215);
                glVertex3f(-122,-29,215);
                glVertex3f(-50,-29,50);
               glVertex3f(-50,-22,50);
          glEnd();

          //sebalah kiri 1,1 samping depan pagar
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                 glVertex3f(-122,-22,215);
                 glVertex3f(-122,-29,215);
                glVertex3f(-172,-29,180);
               glVertex3f(-172,-22,180);

          glEnd();

          //sebalah kiri 1,1 samping kiri pagar
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                glVertex3f(-100,-29,0);
                glVertex3f(-172,-29,180);
               glVertex3f(-172,-22,180);
               glVertex3f(-100,-22,0);
          glEnd();

           //sebalah kiri 1,1 samping kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-172,-29,180);
               glVertex3f(-172,-32,180);
               glVertex3f(-100,-32,0);
               glVertex3f(-100,-29,0);
          glEnd();

          //akhir block 1



          //awal block 2
           //sebalah kiri 2
           glBegin(GL_POLYGON);
               glColor3f(0,1,1);
               glVertex3f(-163,-14,165);
               glVertex3f(-100,-14,0);
               glVertex3f(-50,-14,0);
               glVertex3f(-50,-14,50);
               glVertex3f(-113,-14,200);
          glEnd();

          //sebalah kiri 2 bawah depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-148,-14,160);
               glVertex3f(-118,-14,185);
               glVertex3f(-118,-29,185);
               glVertex3f(-148,-29,160);
          glEnd();

            //sebalah kiri 2 bawah kanan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(-55,-29,40);
               glVertex3f(-55,-14,40);
               glVertex3f(-118,-14,185);
               glVertex3f(-118,-29,185);

          glEnd();

           //sebalah kiri 2 bawah kiri tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-148,-14,160);
                 glVertex3f(-90,-14,0);
                   glVertex3f(-90,-29,0);
               glVertex3f(-148,-29,160);
          glEnd();

          //sebalah kiri 2,2
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-163,-11,165);
               glVertex3f(-100,-11,0);
               glVertex3f(-50,-11,0);
               glVertex3f(-50,-11,50);
               glVertex3f(-113,-11,200);
          glEnd();

           //sebalah kiri 2,2 kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                  glVertex3f(-113,-14,200);
                 glVertex3f(-113,-11,200);
               glVertex3f(-50,-11,50);
               glVertex3f(-50,-14,50);
          glEnd();

          //sebalah kiri 2,2 kanan dan kiri pager depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-113,-4,200);
               glVertex3f(-163,-4,165);
               glVertex3f(-163,-11,165);
                glVertex3f(-113,-11,200);

          glEnd();


           //sebalah kiri 2,2 kanan pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                  glVertex3f(-113,-4,200);
                 glVertex3f(-113,-11,200);
               glVertex3f(-50,-11,50);
               glVertex3f(-50,-4,50);
          glEnd();

          //sebalah kiri 2,2 kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                  glVertex3f(-163,-14,165);
               glVertex3f(-100,-14,0);
               glVertex3f(-100,-11,0);
               glVertex3f(-163,-11,165);

          glEnd();


          //sebalah kiri 2,2 kiri pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                  glVertex3f(-163,-4,165);
               glVertex3f(-100,-4,0);
               glVertex3f(-100,-11,0);
               glVertex3f(-163,-11,165);
          glEnd();

          //akhir block 2


          // awal block 3
          //sebalah kiri 3
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);
               glVertex3f(-154,1,145);
               glVertex3f(-100,1,0);
               glVertex3f(-50,1,0);
               glVertex3f(-50,1,50);
               glVertex3f(-104,1,180);
          glEnd();

           //sebalah kiri 3 depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);
               glVertex3f(-139,1,140);
               glVertex3f(-139,-11,140);
               glVertex3f(-109,-11,165);
                glVertex3f(-109,1,165);
          glEnd();

           //sebalah kiri 3 kanan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);

               glVertex3f(-109,-11,165);
               glVertex3f(-55,-11,40);
                glVertex3f(-55,1,40);
               glVertex3f(-109,1,165);


          glEnd();

           //sebalah kiri 3 kiri tembok
           glBegin(GL_POLYGON);
               glColor3f(1,0,1);
                 glVertex3f(-90,1,0);
               glVertex3f(-139,1,140);
               glVertex3f(-139,-11,140);
                 glVertex3f(-90,-11,0);

          glEnd();

          //sebalah kiri 3,1
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-154,4,145);
               glVertex3f(-100,4,0);
               glVertex3f(-50,4,0);
               glVertex3f(-50,4,50);
               glVertex3f(-104,4,180);
          glEnd();

           //sebalah kiri 3,1 samping kanan
           glBegin(GL_POLYGON);
              glColor3f(1,1,1);
              glVertex3f(-104,1,180);
                glVertex3f(-50,1,50);
               glVertex3f(-50,4,50);
                  glVertex3f(-104,4,180);
          glEnd();

           //sebalah kiri 3,1 samping kanan  kiri pager
           glBegin(GL_POLYGON);
              glColor3f(0,0,1);
              glVertex3f(-104,11,180);
              glVertex3f(-154,11,145);
             glVertex3f(-154,4,145);
             glVertex3f(-104,4,180);
          glEnd();

           //sebalah kiri 3,1 samping kanan pager
           glBegin(GL_POLYGON);
              glColor3f(0,0,1);
              glVertex3f(-104,11,180);
                glVertex3f(-50,11,50);
               glVertex3f(-50,4,50);
                  glVertex3f(-104,4,180);
          glEnd();

           //sebalah kiri 3,1 samping kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-154,4,145);
               glVertex3f(-154,1,145);
               glVertex3f(-100,1,0);
               glVertex3f(-100,4,0);
          glEnd();

           //sebalah kiri 3,1 samping kiri pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-154,4,145);
               glVertex3f(-154,11,145);
               glVertex3f(-100,11,0);
               glVertex3f(-100,4,0);
          glEnd();


          //akhir block 3


          //awal block 4

          //sebalah kiri 4
           glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-148,19,135);
               glVertex3f(-100,19,0);
               glVertex3f(-50,19,0);
               glVertex3f(-50,19,50);
               glVertex3f(-98,19,170);
          glEnd();

           //sebalah kiri 4 depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-133,19,130);
               glVertex3f(-133,4,130);
               glVertex3f(-103,4,155);
                glVertex3f(-103,19,155);
          glEnd();

           //sebalah kiri 4 kiri depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-90,19,0);
               glVertex3f(-133,19,130);
               glVertex3f(-133,4,130);
               glVertex3f(-90,4,0);

          glEnd();

          //sebalah kiri 4 kanan depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-55,19,40);
               glVertex3f(-103,19,155);
               glVertex3f(-103,4,155);
               glVertex3f(-55,4,40);
          glEnd();


          //sebalah kiri 4,1
           glBegin(GL_POLYGON);
               glColor3f(1,0.5,1);
               glVertex3f(-148,22,135);
               glVertex3f(-100,22,0);
               glVertex3f(-50,22,0);
               glVertex3f(-50,22,50);
               glVertex3f(-98,22,170);
          glEnd();

          //sebalah kiri 4,1 samping kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-98,22,170);
               glVertex3f(-50,22,50);
               glVertex3f(-50,19,50);
               glVertex3f(-98,19,170);
          glEnd();


          //sebalah kiri 4,1 samping kanan pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-98,22,170);
               glVertex3f(-50,22,50);
               glVertex3f(-50,29,50);
               glVertex3f(-98,29,170);
          glEnd();

           //sebalah kiri 4,1 samping kanan kiri pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-98,22,170);
               glVertex3f(-148,22,135);
               glVertex3f(-148,29,135);
               glVertex3f(-98,29,170);
          glEnd();


           //sebalah kiri 4,1 samping kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-100,19,0);
              glVertex3f(-148,19,135);
              glVertex3f(-148,22,135);
               glVertex3f(-100,22,0);
          glEnd();

          //sebalah kiri 4,1 samping kiri pager
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(-100,29,0);
              glVertex3f(-148,29,135);
              glVertex3f(-148,22,135);
               glVertex3f(-100,22,0);
          glEnd();

          //alhir block 4





          //awal blok 5

            //sebalah kiri 5
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,1);
               glVertex3f(-142,37,125);
               glVertex3f(-100,37,0);
               glVertex3f(-50,37,0);
               glVertex3f(-50,37,50);
               glVertex3f(-92,37,160);
          glEnd();

           //sebalah kiri 5 depan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-130,37,120);
                glVertex3f(-130,22,120);
               glVertex3f(-97,22,145);
               glVertex3f(-97,37,145);
          glEnd();

          //sebalah kiri 5 kanan tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-55,37,50);
               glVertex3f(-55,22,50);
               glVertex3f(-97,22,145);
               glVertex3f(-97,37,145);
          glEnd();

           //sebalah kiri 5 kiri tembok
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-130,37,120);
               glVertex3f(-130,22,120);
                glVertex3f(-90,22,0);
               glVertex3f(-90,37,0);

          glEnd();

           //sebalah kiri 5,1
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,1);
               glVertex3f(-142,40,125);
               glVertex3f(-100,40,0);
               glVertex3f(-50,40,0);
               glVertex3f(-50,40,50);
               glVertex3f(-92,40,160);
          glEnd();

          //sebalah kiri 5,1 samping kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-100,40,0);
               glVertex3f(-100,37,0);
               glVertex3f(-142,37,125);
               glVertex3f(-142,40,125);
          glEnd();

           //sebalah kiri 5,1 samping kiri pager
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-100,40,0);
               glVertex3f(-100,47,0);
               glVertex3f(-142,47,125);
               glVertex3f(-142,40,125);
          glEnd();

           //sebalah kiri 5,1 samping kiri kanan depan pager
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-92,47,160);
                 glVertex3f(-92,40,160);
               glVertex3f(-142,40,125);
                glVertex3f(-142,47,125);
          glEnd();

           //sebalah kiri 5,1 samping kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                 glVertex3f(-50,40,50);
                 glVertex3f(-50,37,50);
                 glVertex3f(-92,37,160);
                 glVertex3f(-92,40,160);
          glEnd();

           //sebalah kiri 5,1 samping kanan pagar
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                 glVertex3f(-50,40,50);
                 glVertex3f(-50,47,50);
                 glVertex3f(-92,47,160);
                 glVertex3f(-92,40,160);
          glEnd();



          //akhir block 5




           //block kiri 6
           //sebalah kiri 6
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,0);
               glVertex3f(-136,55,115);
               glVertex3f(-100,55,0);
               glVertex3f(-50,55,0);
               glVertex3f(-50,55,50);
               glVertex3f(-86,55,150);
          glEnd();

           glBegin(GL_POLYGON); // paling atas bawah
               glColor3f(0.5,0.5,1);
               glVertex3f(-60,59,50);
               glVertex3f(-90,59,40);
                glVertex3f(-110,59,100);
               glVertex3f(-80,59,110);
          glEnd();

           glBegin(GL_POLYGON); // paling atas bawah belakang
               glColor3f(0.5,1,1);
               glVertex3f(-60,59,50);
               glVertex3f(-60,74,50);
               glVertex3f(-90,74,40);
               glVertex3f(-90,59,40);
          glEnd();

           glBegin(GL_POLYGON); // paling atas bawah belakang tambahan atas
           glColor3f(0.5,1,1);
                glVertex3f(-53,80,25);
                 glVertex3f(-80,80,15);
               glVertex3f(-90,80,40);
                glVertex3f(-60,80,50);
          glEnd();

            glBegin(GL_POLYGON); // paling atas bawah belakang tambahan kiri
           glColor3f(0.5,1,1);
               glVertex3f(-80,80,15);
               glVertex3f(-80,59,15);
               glVertex3f(-90,59,40);
               glVertex3f(-90,80,40);

          glEnd();


           glBegin(GL_POLYGON); // paling atas bawah belakang tambahan kanan
           glColor3f(0.5,1,1);
                glVertex3f(-53,80,25);
                glVertex3f(-53,59,25);
                glVertex3f(-60,59,50);
                glVertex3f(-60,80,50);
          glEnd();



           glBegin(GL_POLYGON); // paling atas bawah belakang tambahan
               glColor3f(0.5,1,1);
               glVertex3f(-60,59,50);
               glVertex3f(-60,80,50);
               glVertex3f(-90,80,40);
               glVertex3f(-90,59,40);
          glEnd();

           glBegin(GL_POLYGON); // paling atas bawah belakang tambahn agak depan
               glColor3f(0.5,1,1);
               glVertex3f(-53,59,25);
               glVertex3f(-53,80,25);
               glVertex3f(-80,80,15);
               glVertex3f(-80,59,15);
          glEnd();




           glBegin(GL_POLYGON); // paling atas kiri
               glColor3f(0.5,0.5,1);
               glVertex3f(-90,59,40);
                glVertex3f(-90,74,40);
                glVertex3f(-110,74,100);
                glVertex3f(-110,59,100);

          glEnd();

          glBegin(GL_POLYGON); // paling atas depan
               glColor3f(0.5,0.5,1);

                glVertex3f(-110,59,100);
                glVertex3f(-110,74,100);
                 glVertex3f(-80,74,110);
               glVertex3f(-80,59,110);
          glEnd();



          glBegin(GL_POLYGON); // paling atas kanan
               glColor3f(0.5,0.5,1);
               glVertex3f(-60,74,50);
                glVertex3f(-60,59,50);
                glVertex3f(-80,59,110);
               glVertex3f(-80,74,110);
          glEnd();

           glBegin(GL_POLYGON); // paling atas atas
               glColor3f(0.5,0.5,1);
               glVertex3f(-60,74,50);
               glVertex3f(-90,74,40);
                glVertex3f(-110,74,100);
               glVertex3f(-80,74,110);
          glEnd();

          //sebalah kiri 6 depan besar
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,0);
               glVertex3f(-124,55,110);
               glVertex3f(-124,40,110);
               glVertex3f(-91,40,135);
               glVertex3f(-91,55,135);
          glEnd();

          //sebalah kiri 6 depan kanan besar
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,0);
                glVertex3f(-55,55,50);
                  glVertex3f(-55,40,50);
               glVertex3f(-91,40,135);
               glVertex3f(-91,55,135);
          glEnd();

          //sebalah kiri 6 depan  kiri besar
           glBegin(GL_POLYGON);
               glColor3f(0.5,0.5,0);
               glVertex3f(-124,55,110);
                 glVertex3f(-90,55,0);
                   glVertex3f(-90,40,0);
               glVertex3f(-124,40,110);

          glEnd();

          //sebalah kiri 6,1
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-136,58,115);
               glVertex3f(-100,58,0);
               glVertex3f(-50,58,0);
               glVertex3f(-50,58,50);
               glVertex3f(-86,58,150);
          glEnd();

          //sebalah kiri 6,1 depan
           glBegin(GL_QUADS);
               glColor3f(1,1,1);
               glVertex3f(-136,58,115);
               glVertex3f(-86,58,150);
               glVertex3f(-86,55,150);
               glVertex3f(-136,55,115);
          glEnd();

          //sebalah kiri 6,1 samping kanan
           glBegin(GL_QUADS);
               glColor3f(1,1,1);
               glVertex3f(-86,58,150);
               glVertex3f(-86,55,150);
               glVertex3f(-50,55,50);
               glVertex3f(-50,58,50);
          glEnd();

           //sebalah kiri 6,1 samping kanan pagar
           glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(-86,58,150);
               glVertex3f(-86,65,150);
               glVertex3f(-50,65,50);
               glVertex3f(-50,58,50);
          glEnd();

           //sebalah kiri 6,1 samping kanan kiri depan pagar
           glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(-86,58,150);
               glVertex3f(-86,65,150);
               glVertex3f(-136,65,115);
               glVertex3f(-136,58,115);
          glEnd();

          //sebalah kiri 6,1 samping kiri pager
           glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(-136,58,115);
               glVertex3f(-136,65,115);
               glVertex3f(-100,65,0);
                 glVertex3f(-100,58,0);
          glEnd();

           //sebalah kiri 6,1 samping kiri
           glBegin(GL_QUADS);
               glColor3f(1,1,1);
               glVertex3f(-136,58,115);
               glVertex3f(-136,55,115);
               glVertex3f(-100,55,0);
                 glVertex3f(-100,58,0);
          glEnd();

          //akhir blok 6


          //akhir blok kiri





          //awal blok kanan


          //awal block 0
          // kanan 0
          glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(50,-50,0);
               glVertex3f(100,-50,0);
               glVertex3f(225,-50,200);
               glVertex3f(150,-50,225);
               glVertex3f(50,-50,50);
          glEnd();

          //sebalah kiri 0 bawah depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(210,-50,195);
               glVertex3f(157,-50,215);
               glVertex3f(157,-70,215);
               glVertex3f(210,-70,195);
          glEnd();

           //sebalah kanan 0 bawah samping kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(90,-50,105);
               glVertex3f(157,-50,215);
               glVertex3f(157,-70,215);
               glVertex3f(90,-70,105);
          glEnd();

          //sebalah kiri 0 bawah belakang
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(90,-50,105);
               glVertex3f(100,-50,0);
               glVertex3f(100,-70,0);
               glVertex3f(90,-70,105);
          glEnd();

          //sebalah kanan 0 bawah samping kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                glVertex3f(100,-50,0);
               glVertex3f(210,-50,195);
               glVertex3f(210,-70,195);
               glVertex3f(100,-70,0);
          glEnd();

           // kanan 0,1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-47,0);
               glVertex3f(100,-47,0);
               glVertex3f(225,-47,200);
               glVertex3f(150,-47,225);
               glVertex3f(50,-47,50);
          glEnd();

          // kanan 0,1 samping kiri
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(150,-50,225);
                glVertex3f(150,-47,225);
               glVertex3f(50,-47,50);
                glVertex3f(50,-50,50);
          glEnd();



                    //sebalah kanan 0,0 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,-47,50);
               glVertex3f(150,-47,225);
               glVertex3f(150,-40,225);
               glVertex3f(50,-40,50);
          glEnd();

          //sebalah kanan 0,0 bawah padar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(225,-47,200);
               glVertex3f(225,-40,200);
                 glVertex3f(150,-40,225);
               glVertex3f(150,-47,225);
          glEnd();

          //sebalah kanan 0,0 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(225,-47,200);
               glVertex3f(225,-40,200);
                 glVertex3f(100,-40,0);
                glVertex3f(100,-47,0);
          glEnd();


           //sebalah kanan 0,0 samping  kanan tambahan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(225,-47,200);
               glVertex3f(225,-50,200);
               glVertex3f(230,-50,210);
                glVertex3f(230,-47,210);
          glEnd();

            //sebalah kanan 0,0 samping  depan tambahan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(197,-47,220); //depan baru
                 glVertex3f(197,-50,220); //depan baru
               glVertex3f(230,-50,210);
                glVertex3f(230,-47,210);
          glEnd();

           //sebalah kanan 0,0 samping  kiri tambahan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(197,-47,220); //depan baru
               glVertex3f(197,-50,220); //depan baru
               glVertex3f(190,-50,200); //depan
               glVertex3f(190,-47,200); //depan
          glEnd();


          //sebalah kanan 0,0 samping  atas tambahan
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(197,-47,220); //depan baru
               glVertex3f(190,-47,200); //depan
               glVertex3f(225,-47,200);
                glVertex3f(230,-47,210);
          glEnd();


          //sebalah kanan 0,0 samping  bawah tambahan
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(197,-50,220); //depan baru
               glVertex3f(190,-50,200); //depan
               glVertex3f(225,-50,200);
                glVertex3f(230,-50,210);
          glEnd();



          //akhir block 0


          //awal block 1

           // kanan 1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-32,0);
               glVertex3f(100,-32,0);
               glVertex3f(222,-32,190);
               glVertex3f(147,-32,215);
               glVertex3f(50,-32,50);
          glEnd();

           // kanan 1,1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-29,0);
               glVertex3f(100,-29,0);
               glVertex3f(222,-29,190);
               glVertex3f(147,-29,215);
               glVertex3f(50,-29,50);
          glEnd();

           // kanan 1,1 samping kanan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(100,-32,0);
               glVertex3f(100,-29,0);
               glVertex3f(222,-29,190);
               glVertex3f(222,-32,190);
          glEnd();



          // kanan 1,1 samping kanan tambahan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(222,-29,190);
                 glVertex3f(227,-29,200);
                  glVertex3f(227,-32,200);
               glVertex3f(222,-32,190);
          glEnd();

           // kanan 1,1 samping kanan tambahan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(195,-29,210); //depan
               glVertex3f(227,-29,200);
               glVertex3f(227,-32,200);
               glVertex3f(195,-32,210); //depan
          glEnd();

          // kanan 1,1 samping kiri tambahan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(195,-29,210); //depan baru
                glVertex3f(190,-29,200); //depan
                glVertex3f(190,-32,200); //depan
               glVertex3f(195,-32,210); //depan
          glEnd();

           // kanan 1,1 samping atas tambahan
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(227,-32,200);
                 glVertex3f(195,-32,210); //depan
               glVertex3f(190,-32,200); //depan
                glVertex3f(222,-32,190);
          glEnd();

           // kanan 1,1 samping atas tambahan
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(227,-29,200);
                 glVertex3f(195,-29,210); //depan
               glVertex3f(190,-29,200); //depan
                glVertex3f(222,-29,190);
          glEnd();




          // kanan 1,1 samping kiri
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                 glVertex3f(147,-32,215);
                glVertex3f(50,-32,50);
               glVertex3f(50,-29,50);
               glVertex3f(147,-29,215);
          glEnd();

                      //pagar

//          sebalah kanan 2 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,-29,50);
               glVertex3f(147,-29,215);
               glVertex3f(147,-23,215);
               glVertex3f(50,-23,50);
          glEnd();

          //sebalah kanan 2 bawah padar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(222,-29,190);
               glVertex3f(222,-23,190);
                 glVertex3f(147,-23,215);
               glVertex3f(147,-29,215);
          glEnd();

          //sebalah kanan 2 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(222,-29,190);
               glVertex3f(222,-23,190);
                 glVertex3f(100,-23,0);
                glVertex3f(100,-29,0);
          glEnd();
          //akhir block 1

           //sebalah kanan 1 depan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(205,-32,185);
               glVertex3f(150,-32,205);
               glVertex3f(150,-47,205);
               glVertex3f(205,-47,185);
          glEnd();

           //sebalah kanan 1 kanan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(205,-32,185);
               glVertex3f(90,-32,0);
               glVertex3f(90,-47,0);
               glVertex3f(205,-47,185);
          glEnd();

          //sebalah kanan 1 kiri bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(150,-32,205);
               glVertex3f(150,-47,205);
               glVertex3f(55,-47,40);
               glVertex3f(55,-32,40);
          glEnd();

            //pagar



          //awal block 2
           // kanan 2
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-14,0);
               glVertex3f(100,-14,0);
               glVertex3f(216,-14,180);
               glVertex3f(141,-14,205);
               glVertex3f(50,-14,50);
          glEnd();

          // kanan 2,1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-11,0);
               glVertex3f(100,-11,0);
               glVertex3f(216,-11,180);
               glVertex3f(141,-11,205);
               glVertex3f(50,-11,50);
          glEnd();

          // kanan 2,1 samping kanan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(100,-14,0);
               glVertex3f(216,-14,180);
               glVertex3f(216,-11,180);
               glVertex3f(100,-11,0);
          glEnd();

          // kanan 2,1 samping kanan tambahan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(216,-14,180);
                glVertex3f(216,-11,180);
                 glVertex3f(221,-11,190);
                 glVertex3f(221,-14,190);
          glEnd();

          // kanan 2,1 samping  tambahan depan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                  glVertex3f(185,-14,200); //depan
                   glVertex3f(185,-11,200); //depan
                 glVertex3f(221,-11,190);
                 glVertex3f(221,-14,190);
          glEnd();

      // kanan 2,1 samping  tambahan depan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                 glVertex3f(180,-14,190); // depan baru
                 glVertex3f(180,-11,190); //depan baru
                glVertex3f(185,-11,200); //depan
               glVertex3f(185,-14,200); //depan
          glEnd();

           // kanan 2,1 samping  tambahan depan
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(180,-14,190); // depan baru
               glVertex3f(185,-14,200); //depan
                  glVertex3f(221,-14,190);
               glVertex3f(216,-14,180);
          glEnd();

          // kanan 2,1 samping  tambahan depan
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(180,-11,190); // depan baru
               glVertex3f(185,-11,200); //depan
                  glVertex3f(221,-11,190);
               glVertex3f(216,-11,180);
          glEnd();





          // kanan 2,1 samping kiri
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(141,-14,205);
               glVertex3f(50,-14,50);
               glVertex3f(50,-11,50);
                glVertex3f(141,-11,205);
          glEnd();

                    glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,-11,0);
               glVertex3f(100,-11,0);
               glVertex3f(216,-11,180);
               glVertex3f(141,-11,205);
               glVertex3f(50,-11,50);
          glEnd();

          //sebalah kanan 2 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,-11,50);
               glVertex3f(141,-11,205);
               glVertex3f(141,-4,205);
               glVertex3f(50,-4,50);
          glEnd();

          //sebalah kanan 2 bawah padar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(216,-11,180);
               glVertex3f(216,-4,180);
                 glVertex3f(141,-4,205);
               glVertex3f(141,-11,205);
          glEnd();

          //sebalah kanan 2 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(216,-11,180);
               glVertex3f(216,-4,180);
                 glVertex3f(100,-4,0);
                glVertex3f(100,-11,0);
          glEnd();


            //tembok block 2
            //sebalah kanan 2 depan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,-29,175);
               glVertex3f(145,-29,195);
               glVertex3f(145,-14,195);
               glVertex3f(200,-14,175);
          glEnd();

           //sebalah kanan 2 kanan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,-29,175);
               glVertex3f(90,-29,0);
               glVertex3f(90,-14,0);
               glVertex3f(200,-14,175);
          glEnd();

          //sebalah kanan 2 kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(145,-29,195);
               glVertex3f(145,-14,195);
               glVertex3f(55,-14,40);
               glVertex3f(55,-29,40);
          glEnd();



          //akhir block 2




           // awal block 3
           // kanan 3,1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,4,0);
               glVertex3f(100,4,0);
               glVertex3f(210,4,170);
               glVertex3f(135,4,195);
               glVertex3f(50,4,50);
          glEnd();



           // kanan 3
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,1,0);
               glVertex3f(100,1,0);
               glVertex3f(210,1,170);
               glVertex3f(135,1,195);
               glVertex3f(50,1,50);
          glEnd();

          // kanan 3,1 samping kanan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(100,4,0);
               glVertex3f(100,1,0);
               glVertex3f(210,1,170);
               glVertex3f(210,4,170);
          glEnd();

           // kanan 3,1 samping kanan tambahan kanan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(215,4,180);
               glVertex3f(215,1,180);
               glVertex3f(210,1,170);
               glVertex3f(210,4,170);
          glEnd();

          glVertex3f(180,1,180);
          glVertex3f(180,4,180);

          //kanan 3,1 samping kanan tambahan depan
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(180,1,190);
               glVertex3f(180,4,190);
                glVertex3f(215,4,180);
               glVertex3f(215,1,180);
          glEnd();

           //kanan 3,1 samping kanan tambahan kiri
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(180,4,190); //depan
                glVertex3f(180,1,190);
                glVertex3f(175,1,180);
               glVertex3f(175,4,180);
          glEnd();

          //kanan 3,1 samping kanan tambahan atas
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(180,4,190); //depan
               glVertex3f(175,4,180); //balakang
               glVertex3f(210,4,170); // kanan belakang
               glVertex3f(215,4,180); // kanan depan
          glEnd();

           //kanan 3,1 samping kanan tambahan bawah
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(180,1,190); //depan
               glVertex3f(175,1,180); //balakang
               glVertex3f(210,1,170); // kanan belakang
               glVertex3f(215,1,180); // kanan depan
          glEnd();

           // kanan 3,1 samping kiri
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,1,50);
               glVertex3f(50,4,50);
               glVertex3f(135,4,195);
               glVertex3f(135,1,195);
          glEnd();

            //tembok block 3
            //sebalah kanan 3 depan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(195,1,165);
               glVertex3f(140,1,185);
               glVertex3f(140,-11,185);
               glVertex3f(195,-11,165);
          glEnd();

           //sebalah kanan 3 kanan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(195,-11,165);
               glVertex3f(90,-11,0);
               glVertex3f(90,1,0);
               glVertex3f(195,1,165);
          glEnd();

          //sebalah kanan 3 kiri bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(140,-11,185);
               glVertex3f(140,1,185);
               glVertex3f(55,1,40);
               glVertex3f(55,-11,40);
          glEnd();

          //          sebalah kanan 3 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,4,50);
               glVertex3f(135,4,195);
               glVertex3f(135,10,195);
               glVertex3f(50,10,50);
          glEnd();

          //sebalah kanan 3 bawah padar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(210,4,170);
               glVertex3f(210,10,170);
                 glVertex3f(135,10,195);
               glVertex3f(135,4,195);
          glEnd();

          //sebalah kanan 3 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(210,4,170);
               glVertex3f(210,10,170);
                 glVertex3f(100,10,0);
                glVertex3f(100,4,0);
          glEnd();

          //akhir block 3



          //awal blok 4
           // kanan 4
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,19,0);
               glVertex3f(100,19,0);
               glVertex3f(204,19,160);
               glVertex3f(129,19,185);
               glVertex3f(50,19,50);
          glEnd();


          // kanan 4,1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,22,0);
                glVertex3f(100,22,0);
               glVertex3f(204,22,160);
               glVertex3f(129,22,185);
               glVertex3f(50,22,50);
          glEnd();

           // kanan 4,1 samping kiri
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,22,50);
               glVertex3f(50,19,50);
               glVertex3f(129,19,185);
               glVertex3f(129,22,185);
          glEnd();

          // kanan 4,1 samping kanan
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(204,22,160);
               glVertex3f(204,19,160);
               glVertex3f(100,19,0);
               glVertex3f(100,22,0);
          glEnd();

          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(50,22,0);
                glVertex3f(100,22,0);
               glVertex3f(204,22,160);
               glVertex3f(129,22,185);
               glVertex3f(50,22,50);
          glEnd();

                    //  sebalah kanan 2 samping pagar kiri
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,22,50);
               glVertex3f(129,22,185);
               glVertex3f(129,29,185);
               glVertex3f(50,29,50);
          glEnd();

          //sebalah kanan 2 bawah padar depan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(204,22,160);
               glVertex3f(204,29,160);
                 glVertex3f(129,29,185);
               glVertex3f(129,22,185);
          glEnd();

          //sebalah kanan 2 bawah padar depan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(204,22,160);
               glVertex3f(204,19,160);
                 glVertex3f(129,19,185);
               glVertex3f(129,22,185);
          glEnd();

           //sebalah kanan 2 bawah padar depan bawah tepi depan kiri (tambahan)
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(180,19,180);
                glVertex3f(180,22,180);
                glVertex3f(170,22,160);
               glVertex3f(170,19,160);

          glEnd();

            //sebalah kanan 2 bawah padar depan bawah tepi depan atas (tambahan)
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                    glVertex3f(210,22,170);
                glVertex3f(180,22,180);
                glVertex3f(170,22,160);
                 glVertex3f(204,22,160);
          glEnd();

           //sebalah kanan 2 bawah padar depan bawah tepi depan bawah (tambahan)
           glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                    glVertex3f(210,19,170);
                glVertex3f(180,19,180);
                glVertex3f(170,19,160);
                 glVertex3f(204,19,160);


          glEnd();


          //sebalah kanan 2 bawah padar depan bawah tepi kanan (tambahan)
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(204,19,160);
               glVertex3f(204,22,160);
                glVertex3f(210,22,170);
               glVertex3f(210,19,170);
          glEnd();

          //sebalah kanan 2 bawah padar depan bawah tepi depan (tambahan)
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(180,19,180);
               glVertex3f(180,22,180);
                glVertex3f(210,22,170);
               glVertex3f(210,19,170);
          glEnd();




          //sebalah kanan 2 samping pagar kanan
           glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(204,22,160);
               glVertex3f(204,29,160);
                 glVertex3f(100,29,0);
                glVertex3f(100,22,0);
          glEnd();

            //tembok block 4
            //sebalah kanan 4 depan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(190,19,155);
               glVertex3f(135,19,175);
               glVertex3f(135,4,175);
               glVertex3f(190,4,155);
          glEnd();

           //sebalah kanan 4 kanan bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(190,4,155);
               glVertex3f(90,4,0);
               glVertex3f(90,19,0);
               glVertex3f(190,19,155);
          glEnd();

          //sebalah kanan 4 kiri bawah
           glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(135,4,175);
               glVertex3f(135,19,175);
               glVertex3f(55,19,40);
               glVertex3f(55,4,40);
          glEnd();


          //akhir blok 4
          //akhir blok kanan





















          // blok tengah awal

          //awal blok  0
          //tengah 0
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(-50,-50,0);
               glVertex3f(50,-50,0);
               glVertex3f(50,-50,50);
               glVertex3f(-50,-50,50);
          glEnd();

          //tengah 0 samping kiri miring kanan (kiri)
            glBegin(GL_QUADS);
               glColor3f(1,1,0.3);
               glVertex3f(-10,-50,50);
               glVertex3f(-10,-47,50);
                 glVertex3f(-107,-47,182);
               glVertex3f(-107,-50,182);
          glEnd();

          //tengah 0 samping kiri miring kanan (kiri)
            glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(-10,-40,50);
               glVertex3f(-10,-47,50);
                 glVertex3f(-107,-47,182);
               glVertex3f(-107,-40,182);
          glEnd();

          //tengah 0 miring samping kiri (kiri)
            glBegin(GL_TRIANGLES);
               glColor3f(1,1,0.3);

               glVertex3f(-10,-50,50);
                glVertex3f(-50,-50,50);
                 glVertex3f(-107,-50,182);

          glEnd();



           //tengah 0 samping kiri miring kanan (kanan)
            glBegin(GL_QUADS);
               glColor3f(1,1,0.3);
               glVertex3f(10,-50,50);
               glVertex3f(10,-47,50);
                 glVertex3f(125,-47,182);
               glVertex3f(125,-50,182);
          glEnd();

           //tengah 0 samping kiri miring kanan (kanan)
            glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(10,-40,50);
               glVertex3f(10,-47,50);
                 glVertex3f(125,-47,182);
               glVertex3f(125,-40,182);
          glEnd();

           //tengah 0 samping kiri miring kanan (kanan)
            glBegin(GL_TRIANGLES);
               glColor3f(1,1,0.3);
               glVertex3f(10,-47,50);
                glVertex3f(50,-47,50);
                 glVertex3f(125,-47,182);

          glEnd();

          //tengah 0 samping kiri miring kanan (kanan)
            glBegin(GL_TRIANGLES);
               glColor3f(1,1,0.3);
               glVertex3f(10,-50,50);
                glVertex3f(50,-50,50);
                 glVertex3f(125,-50,182);

          glEnd();




          //tengah 0,1
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(-50,-47,0);
               glVertex3f(50,-47,0);
               glVertex3f(50,-47,50);
               glVertex3f(-50,-47,50);
          glEnd();

          //tengah 0,1 depan besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-55,-32,40);
               glVertex3f(55,-32,40);
               glVertex3f(55,-47,40);
               glVertex3f(-55,-47,40);
          glEnd();

          //tengah 0,1 belakang besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(-50,-32,5);
               glVertex3f(50,-32,5);
               glVertex3f(50,-47,5);
               glVertex3f(-50,-47,5);
          glEnd();

           //tengah 0,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,-50,50);
               glVertex3f(-50,-50,50);
               glVertex3f(-50,-47,50);
               glVertex3f(50,-47,50);
          glEnd();

          //tengah 0,1 depan pager
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,-40,50);
               glVertex3f(-50,-40,50);
               glVertex3f(-50,-47,50);
               glVertex3f(50,-47,50);
          glEnd();

           //akahir blok  0

          //awal blok 1
           //tengah 1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,-32,0);
               glVertex3f(50,-32,0);
               glVertex3f(50,-32,50);
               glVertex3f(-50,-32,50);
          glEnd();

           //tengah 1,1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,-29,0);
               glVertex3f(50,-29,0);
               glVertex3f(50,-29,50);
               glVertex3f(-50,-29,50);
          glEnd();

           //tengah 1 samping kiri miring kanan (kiri)
            glBegin(GL_QUADS);
               glColor3f(0.5,1,0.3);
               glVertex3f(-25,-32,50);
               glVertex3f(-25,-29,50);
                 glVertex3f(-107,-29,182);
               glVertex3f(-107,-32,182);
          glEnd();

           //tengah 1 samping kiri miring kanan (kiri)
            glBegin(GL_QUADS);
               glColor3f(0,0,1);
               glVertex3f(-25,-22,50);
               glVertex3f(-25,-29,50);
                 glVertex3f(-107,-29,182);
               glVertex3f(-107,-22,182);
          glEnd();

          //tengah 1 miring samping kiri (kiri)
            glBegin(GL_TRIANGLES);
               glColor3f(1,0.5,0);
               glVertex3f(-25,-32,50);
               glVertex3f(-50,-32,50);
               glVertex3f(-107,-32,182);
          glEnd();

          //tengah 1 miring samping kiri (kiri)
            glBegin(GL_TRIANGLES);
               glColor3f(1,0.5,0);
               glVertex3f(-25,-29,50);
               glVertex3f(-50,-29,50);
               glVertex3f(-107,-29,182);

          glEnd();

          //tengah 1,1 depan besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(-55,-14,40);
                glVertex3f(55,-14,40);
               glVertex3f(55,-29,40);
               glVertex3f(-55,-29,40);
          glEnd();

          //tengah 1,1 belakang besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(-50,-14,5);
                glVertex3f(50,-14,5);
               glVertex3f(50,-29,5);
               glVertex3f(-50,-29,5);
          glEnd();


          //tengah 1,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,-32,50);
               glVertex3f(50,-29,50);
               glVertex3f(-50,-29,50);
               glVertex3f(-50,-32,50);
          glEnd();

          //tengah 1,1 depan pager
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,-22,50);
               glVertex3f(50,-29,50);
               glVertex3f(-50,-29,50);
               glVertex3f(-50,-22,50);
          glEnd();


          //akhir blok 1


           // awal blok 2
           //tengah 2
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,-14,0);
               glVertex3f(50,-14,0);
               glVertex3f(50,-14,50);
               glVertex3f(-50,-14,50);
          glEnd();

           //tengah 2,1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,-11,0);
               glVertex3f(50,-11,0);
               glVertex3f(50,-11,50);
               glVertex3f(-50,-11,50);
          glEnd();

           //tengah 2,1 depan besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(-55,1,40);
                glVertex3f(55,1,40);
               glVertex3f(55,-11,40);
               glVertex3f(-55,-11,40);
          glEnd();

          //tengah 2,1 belakang besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(-50,1,5);
                glVertex3f(50,1,5);
               glVertex3f(50,-11,5);
               glVertex3f(-50,-11,5);
          glEnd();

          //tengah 2,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(50,-14,50);
               glVertex3f(50,-11,50);
               glVertex3f(-50,-11,50);
               glVertex3f(-50,-14,50);
          glEnd();


          //tengah 2,1 depan pagar
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
                glVertex3f(50,-4,50);
               glVertex3f(50,-11,50);
               glVertex3f(-50,-11,50);
               glVertex3f(-50,-4,50);
          glEnd();

          //akhir blok 2


          //awal blok 3
          //tengah 3
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,1,0);
               glVertex3f(50,1,0);
               glVertex3f(50,1,50);
               glVertex3f(-50,1,50);
          glEnd();

          //tengah 3,1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,4,0);
               glVertex3f(50,4,0);
               glVertex3f(50,4,50);
               glVertex3f(-50,4,50);
          glEnd();

          //tengah 3,1 depan besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(55,4,40);
               glVertex3f(55,19,40);
               glVertex3f(-55,19,40);
               glVertex3f(-55,4,40);
          glEnd();

          //tengah 3,1 depan besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,4,5);
               glVertex3f(50,19,5);
               glVertex3f(-50,19,5);
               glVertex3f(-50,4,5);
          glEnd();

           //tengah 3,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,1,50);
               glVertex3f(50,4,50);
               glVertex3f(-50,4,50);
               glVertex3f(-50,1,50);
          glEnd();


          //tengah 3,1 depan pagar
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,11,50);
               glVertex3f(50,4,50);
               glVertex3f(-50,4,50);
               glVertex3f(-50,11,50);
          glEnd();

          //aakhir blok 3


          //awal blok 4

          //tengah 4
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,19,0);
               glVertex3f(50,19,0);
               glVertex3f(50,19,50);
               glVertex3f(-50,19,50);
          glEnd();

          //tengah 4,1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(-50,22,0);
               glVertex3f(50,22,0);
               glVertex3f(50,22,50);
               glVertex3f(-50,22,50);
          glEnd();

           //tengah 4,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,19,50);
               glVertex3f(50,22,50);
               glVertex3f(-50,22,50);
               glVertex3f(-50,19,50);
          glEnd();

           //tengah 4,1 depan
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,29,50);
               glVertex3f(50,22,50);
               glVertex3f(-50,22,50);
               glVertex3f(-50,29,50);
          glEnd();

           //tengah 4,1 depan
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(100,-50,0);
               glVertex3f(100,-70,0);
               glVertex3f(-100,-70,0);
               glVertex3f(-100,-50,0);
          glEnd();



          //akhir blok 4

          //awal blok 5

           //tengah 5,1 tengah kiri
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(0,62,20);
               glVertex3f(65,62,20);
               glVertex3f(65,62,50);
               glVertex3f(0,62,50);
          glEnd();



          //tengah 5,1 tengah kiri (atas)
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(0,65,20);
               glVertex3f(65,65,20);
               glVertex3f(65,65,50);
               glVertex3f(0,65,50);
          glEnd();

           //tengah 5,1 tengah kiri samping kiri
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(0,65,20);
               glVertex3f(0,62,20);
               glVertex3f(0,62,50);
                glVertex3f(0,65,50);
          glEnd();

          //tengah 5,1 tengah kiri samping kiri besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(5,22,25);
               glVertex3f(5,62,25);
               glVertex3f(5,62,45);
                glVertex3f(5,22,45);
          glEnd();

          //tengah 5,1 tengah kiri samping kiri tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(0,65,20);
               glVertex3f(0,62,20);
               glVertex3f(0,62,50);
                glVertex3f(0,65,50);
          glEnd();

           //tengah 5,1 tengah kiri (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                 glVertex3f(65,62,50);
               glVertex3f(65,65,50);
               glVertex3f(0,65,50);
                 glVertex3f(0,62,50);
          glEnd();

            //tengah 5,1 tengah kiri (atas) tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                 glVertex3f(70,62,45);
               glVertex3f(70,22,45);
               glVertex3f(5,22,45);
                 glVertex3f(5,62,45);
          glEnd();

          //tengah 5,1 tengah kiri (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                 glVertex3f(65,62,20);
               glVertex3f(65,65,20);
               glVertex3f(0,65,20);
                 glVertex3f(0,62,20);
          glEnd();

          //tengah 5,1 tengah kiri (atas) tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                 glVertex3f(65,62,25);
               glVertex3f(65,22,25);
               glVertex3f(5,22,25);
                 glVertex3f(5,62,25);
          glEnd();

          //tengah 5,1 kanan panjang
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(65,62,20);
                glVertex3f(100,62,0);
                 glVertex3f(120,62,40);
                 glVertex3f(100,62,60);
          glEnd();

          //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                       glVertex3f(100,65,60);
                  glVertex3f(120,65,40);
                 glVertex3f(120,62,40);
                    glVertex3f(100,62,60);
          glEnd();

          //tengah 5,1 kanan panjang tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                       glVertex3f(100,22,55);
                  glVertex3f(115,22,35);
                 glVertex3f(115,62,35);
                    glVertex3f(100,62,55);
          glEnd();

           //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(100,62,0);
                 glVertex3f(100,65,0);
                  glVertex3f(120,65,40);
                 glVertex3f(120,62,40);
          glEnd();

          //tengah 5,1 kanan panjang tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(95,62,5);
                 glVertex3f(95,22,5);
                  glVertex3f(115,22,40);
                 glVertex3f(115,62,40);
          glEnd();

          //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(100,62,0);
                 glVertex3f(65,62,20);
                  glVertex3f(65,65,20);
                 glVertex3f(100,65,0);

          glEnd();


          //tengah 5,1 kanan panjang tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(95,62,5);
                 glVertex3f(65,62,25);
                  glVertex3f(65,22,25);
                 glVertex3f(95,22,5);

          glEnd();

           //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(50,62,50);
                glVertex3f(50,65,50);
                  glVertex3f(95,65,120);
                 glVertex3f(95,62,120);
          glEnd();

          //tengah 5,1 kanan panjang tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(55,62,50);
                glVertex3f(55,22,50);
                  glVertex3f(100,22,115);
                 glVertex3f(100,62,115);
          glEnd();

          //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                     glVertex3f(125,62,110);
                      glVertex3f(125,65,110);
                  glVertex3f(95,65,120);
                 glVertex3f(95,62,120);
          glEnd();

           //tengah 5,1 kanan panjang tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(125,62,110);
               glVertex3f(125,65,110);
               glVertex3f(95,65,120);
               glVertex3f(95,62,120);
          glEnd();


           //tengah 5,1 kanan panjang tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(125,62,105);
               glVertex3f(125,22,105);
               glVertex3f(95,22,115);
               glVertex3f(95,62,115);
          glEnd();

          //tengah 5,1 kanan panjang (atas)
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(65,65,20);
                glVertex3f(100,65,0);
                 glVertex3f(120,65,40);
                 glVertex3f(100,65,60);
          glEnd();

           //tengah 5,1 kanan pendek
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,62,50);
               glVertex3f(95,62,120);
               glVertex3f(125,62,110);
                 glVertex3f(65,62,20);
          glEnd();

          //tengah 5,1 kanan pendek (atas)
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(50,65,50);
               glVertex3f(95,65,120);
               glVertex3f(125,65,110);
                 glVertex3f(65,65,20);
          glEnd();

           //tengah 5,1 kanan panjang
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(65,62,20);
               glVertex3f(145,62,140);
               glVertex3f(172,62,130);
               glVertex3f(100,62,20);
          glEnd();

           //tengah 5,1 kanan panjang (atas)
            glBegin(GL_POLYGON);
               glColor3f(0,0,1);
               glVertex3f(65,65,20);
               glVertex3f(145,65,140);
               glVertex3f(172,65,130);
               glVertex3f(100,65,20);
          glEnd();

            //tengah 5,1 kanan panjang (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(65,65,20);
                glVertex3f(65,62,20);
               glVertex3f(145,62,140);
                glVertex3f(145,65,140);

          glEnd();


           //tengah 5,1 kanan panjang (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(65,22,20);
                glVertex3f(65,62,20);
               glVertex3f(145,62,135);
                glVertex3f(145,22,135);

          glEnd();

          //tengah 5,1 kanan panjang (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(145,65,140);
                glVertex3f(145,62,140);
                 glVertex3f(172,62,130);
               glVertex3f(172,65,130);

          glEnd();

          //tengah 5,1 kanan panjang (atas) tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(145,22,135);
                glVertex3f(145,62,135);
                 glVertex3f(167,62,125);
               glVertex3f(167,22,125);

          glEnd();

          //tengah 5,1 kanan panjang (atas) tepi
            glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(100,65,20);
               glVertex3f(100,62,20);
                 glVertex3f(172,62,130);
               glVertex3f(172,65,130);

          glEnd();



          //tengah 5,1 kanan panjang (atas) tepi besar
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(95,22,20);
               glVertex3f(95,62,20);
                 glVertex3f(167,62,125);
               glVertex3f(167,22,125);
          glEnd();


          tambahan();


          glTranslatef(0,0,80);
          tambahan();


           glPopMatrix();
      glutSwapBuffers();
     }


void idle(){
     if(!mouseDown){
          xrot += 0.3f;
          yrot += 0.4f;
     }
     glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
     if(button==GLUT_LEFT_BUTTON && state == GLUT_DOWN){
      glLoadIdentity();
      gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
      glRotatef(xrot,1.0f,0.0f,0.0f);
      glRotatef(yrot,0.0f,1.0f,0.0f);
          mouseDown = true;
          xdiff = x - yrot;
          ydiff = -y + xrot;
     }else{
          mouseDown = false;
     }
}

void mouseMotion(int x,int y){
     if(mouseDown){
      glLoadIdentity();
      gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
      glRotatef(xrot,1.0f,0.0f,0.0f);
      glRotatef(yrot,0.0f,1.0f,0.0f);
          yrot = x - xdiff;
          xrot = y + ydiff;
          glutPostRedisplay();
     }
}


void keyboard(unsigned char key, int x,int y){
     switch(key){
          case('W'):
          case('w'):
               glTranslatef(0.0,0.0,3.0);//kedepan di perbesar atau dekat
          break;
          case('d'):
          case('D'):
               glTranslatef(3.0,0.0,0.0);// geser ke kanan
          break;
          case('s'):
          case('S'):
               glTranslatef(0.0,0.0,-3.0);//kedepan di perkecil atau jauh
          break;
          case('a'):
          case('A'):
               glTranslatef(-3.0,0.0,0.0);//geser ke kiri
          break;
          case('7'):
               glTranslatef(0.0,3.0,0.0);//gerser ke atas
          break;
          case('9'):
               glTranslatef(0.0,-3.0,0.0);//geser ke bawah
          break;
          case('2'):
               glRotatef(2.0,1.0,0.0,0.0);//rotasi kedepan
          break;
           case('8'):
               glRotatef(-2.0,1.0,0.0,0.0);//rotasi kebelakang
          break;
            break;
           case('6'):
               glRotatef(2.0,0.0,1.0,0.0);//putar ke kanan
          break;
            case('4'):
               glRotatef(-2.0,0.0,1.0,0.0);//putar ke kiri
          break;
           case('1'):
               glRotatef(2.0,0.0,0.0,1.0);//rotasi ke kiri berlawanan jarum jam
          break;
           case('3'):
               glRotatef(-2.0,0.0,0.0,1.0);//rotasi ke kanan searah jarum jam
          break;
          case('5'): //mengtransparankan objeck
               if(is_depth){
                    is_depth=0;
                    glDisable(GL_DEPTH_TEST);
               }else{
                    is_depth = 1;
                    glEnable(GL_DEPTH_TEST);
               }
     }

     tampil();
}


void tambahan(){
     // tambahan hotel kanan


     // gedung besar bawah
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,-68,40);
               glVertex3f(300,-68,40);
               glVertex3f(320,-68,10);
               glVertex3f(190,-68,10);
          glEnd();


     // gedung besar kiri
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,-68,40);
               glVertex3f(200,45,40);
               glVertex3f(190,45,10);
               glVertex3f(190,-68,10);
          glEnd();

      // gedung besar belakang
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(320,-68,10);
               glVertex3f(320,45,10);
               glVertex3f(190,45,10);
               glVertex3f(190,-68,10);
          glEnd();

     // gedung besar depan
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,45,40);
                glVertex3f(200,-68,40);
                 glVertex3f(300,-68,40);
               glVertex3f(300,45,40);

          glEnd();

      // gedung besar atas
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(200,45,40);
               glVertex3f(300,45,40);
               glVertex3f(320,45,10);
               glVertex3f(190,45,10);
          glEnd();

     //bagian 1
      glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(200,-69,50);
               glVertex3f(300,-69,50);
               glVertex3f(320,-69,0);
               glVertex3f(180,-69,0);
          glEnd();

     // bagian tepi

     //bagian lantai 2 tepi
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-49,50);
               glVertex3f(200,-46,50);
                glVertex3f(180,-46,0);
               glVertex3f(180,-49,0);
          glEnd();

     //bagian lantai 3 tepi
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-23,50);
               glVertex3f(200,-26,50);
                glVertex3f(180,-26,0);
               glVertex3f(180,-23,0);
          glEnd();

      //bagian lantai 4 tepi
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-3,50);
               glVertex3f(200,0,50);
                glVertex3f(180,0,0);
               glVertex3f(180,-3,0);
          glEnd();

      //bagian lantai 5 tepi
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,20,50);
               glVertex3f(200,23,50);
                glVertex3f(180,23,0);
               glVertex3f(180,20,0);
          glEnd();

      //bagian lantai 6 tepi
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,46,50);
               glVertex3f(200,43,50);
                glVertex3f(180,43,0);
               glVertex3f(180,46,0);
          glEnd();

     //akhir tepi

     // tepi depan

     //bagian lantai 1
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-49,50);
               glVertex3f(200,-46,50);
               glVertex3f(300,-46,50);
               glVertex3f(300,-49,50);
          glEnd();

     //bagian lantai 2
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-23,50);
               glVertex3f(200,-26,50);
               glVertex3f(300,-26,50);
               glVertex3f(300,-23,50);
          glEnd();

      //bagian lantai 3
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,-3,50);
               glVertex3f(200,0,50);
               glVertex3f(300,0,50);
               glVertex3f(300,-3,50);
          glEnd();

     //bagian lantai 4
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,23,50);
               glVertex3f(200,20,50);
               glVertex3f(300,20,50);
               glVertex3f(300,23,50);
          glEnd();

      //bagian lantai 5
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(200,46,50);
               glVertex3f(200,43,50);
               glVertex3f(300,43,50);
               glVertex3f(300,46,50);
          glEnd();

     // akhir depan

     // awal belakang
     //bagian lantai 1
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(320,-49,0);
                glVertex3f(320,-46,0);
               glVertex3f(180,-46,0);
                glVertex3f(180,-49,0);
          glEnd();

     //bagian lantai 2
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(320,-23,0);
                glVertex3f(320,-26,0);
               glVertex3f(180,-26,0);
                glVertex3f(180,-23,0);
          glEnd();

     //bagian lantai 3
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(320,-3,0);
                glVertex3f(320,0,0);
               glVertex3f(180,0,0);
                glVertex3f(180,-3,0);
          glEnd();


     //bagian lantai 3
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(320,23,0);
                glVertex3f(320,20,0);
               glVertex3f(180,20,0);
                glVertex3f(180,23,0);
          glEnd();

      //bagian lantai 3
      glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(320,46,0);
                glVertex3f(320,43,0);
               glVertex3f(180,43,0);
                glVertex3f(180,46,0);
          glEnd();


     // akhir belakang

     //bagian lantai 2
      glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(200,-49,50);
               glVertex3f(300,-49,50);
               glVertex3f(320,-49,0);
               glVertex3f(180,-49,0);
          glEnd();


      //bagian lantai 2 atas nya
     glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(200,-46,50);
               glVertex3f(300,-46,50);
               glVertex3f(320,-46,0);
               glVertex3f(180,-46,0);
          glEnd();

      //bagian lantai 3
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,-26,50);
               glVertex3f(300,-26,50);
               glVertex3f(320,-26,0);
               glVertex3f(180,-26,0);
          glEnd();

     //bagian lantai 3 batas atas
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,-23,50);
               glVertex3f(300,-23,50);
               glVertex3f(320,-23,0);
               glVertex3f(180,-23,0);
          glEnd();

      //bagian lantai 3
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,-3,50);
               glVertex3f(300,-3,50);
               glVertex3f(320,-3,0);
               glVertex3f(180,-3,0);
          glEnd();

     //bagian lantai 3 batas atas
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,0,50);
               glVertex3f(300,0,50);
               glVertex3f(320,0,0);
               glVertex3f(180,0,0);
          glEnd();

      //bagian lantai 4
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,20,50);
               glVertex3f(300,20,50);
               glVertex3f(320,20,0);
               glVertex3f(180,20,0);
          glEnd();

     //bagian lantai 4 batas atas
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,23,50);
               glVertex3f(300,23,50);
               glVertex3f(320,23,0);
               glVertex3f(180,23,0);
          glEnd();

      //bagian lantai 5
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,43,50);
               glVertex3f(300,43,50);
               glVertex3f(320,43,0);
               glVertex3f(180,43,0);
          glEnd();

      //bagian lantai 5 batas atas
     glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(200,46,50);
               glVertex3f(300,46,50);
               glVertex3f(320,46,0);
               glVertex3f(180,46,0);
          glEnd();















     //bagian 2

     // gedung besar bawah
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(300,-68,40);
               glVertex3f(370,-68,120);
               glVertex3f(385,-68,90);
               glVertex3f(320,-68,10);
          glEnd();

      // tembok  belakang
          glBegin(GL_POLYGON);
               glColor3f(1,1,1);
                glVertex3f(320,-68,10);
                glVertex3f(320,45,10);
                glVertex3f(385,45,90);
                glVertex3f(385,-68,90);
          glEnd();

     // gedung besar depan
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(300,45,40);
               glVertex3f(300,-68,40);
               glVertex3f(370,-68,120);
               glVertex3f(370,45,120);
          glEnd();

      // gedung besar atas
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(300,45,40);
               glVertex3f(370,45,120);
               glVertex3f(385,45,90);
               glVertex3f(320,45,10);
          glEnd();


     // tepi depan
      // latai 1
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(370,-46,130);
                glVertex3f(370,-49,130);
                   glVertex3f(300,-49,50);
               glVertex3f(300,-46,50);
          glEnd();

      // latai 2
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(370,-26,130);
                glVertex3f(370,-23,130);
                   glVertex3f(300,-23,50);
               glVertex3f(300,-26,50);
          glEnd();

          // latai 3
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(370,0,130);
                glVertex3f(370,-3,130);
                   glVertex3f(300,-3,50);
               glVertex3f(300,0,50);
          glEnd();

           // latai 4
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(370,20,130);
                glVertex3f(370,23,130);
                   glVertex3f(300,23,50);
               glVertex3f(300,20,50);
          glEnd();

           // latai 5
          glBegin(GL_POLYGON);
               glColor3f(0,1,0);
               glVertex3f(370,46,130);
                glVertex3f(370,43,130);
                   glVertex3f(300,43,50);
               glVertex3f(300,46,50);
          glEnd();

     //akhir tepi depan



     //awal belakang
     // latai 1
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,-49,0);
                glVertex3f(320,-46,0);
                glVertex3f(385,-46,80);
                glVertex3f(385,-49,80);
          glEnd();

           // latai 2
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,-26,0);
                glVertex3f(320,-23,0);
                glVertex3f(385,-23,80);
                glVertex3f(385,-26,80);
          glEnd();

          // latai 3
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,0,0);
                glVertex3f(320,-3,0);
                glVertex3f(385,-3,80);
                glVertex3f(385,0,80);
          glEnd();

           // latai 4
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,20,0);
                glVertex3f(320,23,0);
                glVertex3f(385,23,80);
                glVertex3f(385,20,80);
          glEnd();


           // latai 5
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,46,0);
                glVertex3f(320,43,0);
                glVertex3f(385,43,80);
                glVertex3f(385,46,80);
          glEnd();

     //akhir belakang


     // latai 1
          glBegin(GL_POLYGON);
               glColor3f(1,1,0);
               glVertex3f(320,-69,0);
                glVertex3f(385,-69,80);
                 glVertex3f(370,-69,130);
               glVertex3f(300,-69,50);
          glEnd();

     //lantai 2
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,-49,0);
                glVertex3f(385,-49,80);
                 glVertex3f(370,-49,130);
               glVertex3f(300,-49,50);
          glEnd();

     //lantai 2 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,-46,0);
                glVertex3f(385,-46,80);
                 glVertex3f(370,-46,130);
               glVertex3f(300,-46,50);
          glEnd();

      //lantai 3
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,-26,0);
                glVertex3f(385,-26,80);
                 glVertex3f(370,-26,130);
               glVertex3f(300,-26,50);
          glEnd();

     //lantai 3 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,-23,0);
                glVertex3f(385,-23,80);
                 glVertex3f(370,-23,130);
               glVertex3f(300,-23,50);
          glEnd();

      //lantai 4
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,-3,0);
                glVertex3f(385,-3,80);
                 glVertex3f(370,-3,130);
               glVertex3f(300,-3,50);
          glEnd();

      //lantai 4 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,0,0);
                glVertex3f(385,0,80);
                 glVertex3f(370,0,130);
               glVertex3f(300,0,50);
          glEnd();

      //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,20,0);
                glVertex3f(385,20,80);
                 glVertex3f(370,20,130);
               glVertex3f(300,20,50);
          glEnd();

     //lantai 5 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,23,0);
                glVertex3f(385,23,80);
                 glVertex3f(370,23,130);
               glVertex3f(300,23,50);
          glEnd();

     //lantai 6
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,43,0);
               glVertex3f(385,43,80);
               glVertex3f(370,43,130);
               glVertex3f(300,43,50);
          glEnd();

     //lantai 6 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,0,0);
               glVertex3f(320,46,0);
               glVertex3f(385,46,80);
               glVertex3f(370,46,130);
               glVertex3f(300,46,50);
          glEnd();









      //bagian 3


      // gedung besar bawah
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(370,-68,120);
               glVertex3f(590,-68,120);
               glVertex3f(590,-68,90);
               glVertex3f(385,-68,90);
          glEnd();

      // gedung besar kanan
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(590,-68,120);
                glVertex3f(590,45,120);
                glVertex3f(590,45,90);
               glVertex3f(590,-68,90);
          glEnd();

     // gedung besar belakang
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(590,-68,90);
               glVertex3f(590,45,90);
               glVertex3f(385,45,90);
               glVertex3f(385,-68,90);
          glEnd();

     // gedung besar depan
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(370,-68,120);
               glVertex3f(370,45,120);
                glVertex3f(590,45,120);
               glVertex3f(590,-68,120);

          glEnd();



     // gedung besar atas
      glBegin(GL_POLYGON);
               glColor3f(1,1,1);
               glVertex3f(370,45,120);
               glVertex3f(590,45,120);
               glVertex3f(590,45,90);
               glVertex3f(385,45,90);
          glEnd();


      //lantai 1
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-69,80);
                 glVertex3f(600,-69,80);
                 glVertex3f(600,-69,130);
                 glVertex3f(370,-69,130);
          glEnd();

          // tepi depan
          //lantai 1
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);

                 glVertex3f(600,-49,130);
                  glVertex3f(600,-46,130);
                 glVertex3f(370,-46,130);
                  glVertex3f(370,-49,130);
          glEnd();

          //lantai 2
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);

                 glVertex3f(600,-26,130);
                  glVertex3f(600,-23,130);
                 glVertex3f(370,-23,130);
                  glVertex3f(370,-26,130);
          glEnd();

          //lantai 3
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);

                 glVertex3f(600,0,130);
                  glVertex3f(600,-3,130);
                 glVertex3f(370,-3,130);
                  glVertex3f(370,0,130);
          glEnd();

          //lantai 6
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(600,46,130);
                 glVertex3f(600,43,130);
                 glVertex3f(370,43,130);
                glVertex3f(370,46,130);
          glEnd();

           //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);

                 glVertex3f(600,23,130);
                  glVertex3f(600,20,130);
                 glVertex3f(370,20,130);
                  glVertex3f(370,23,130);
          glEnd();

          // akhir tepi depan


          // awal tepi kanan

          //lantai 1
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(600,-46,80);
                 glVertex3f(600,-49,80);
                 glVertex3f(600,-49,130);
                  glVertex3f(600,-46,130);
          glEnd();

           //lantai 2
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(600,-26,80);
                 glVertex3f(600,-23,80);
                 glVertex3f(600,-23,130);
                  glVertex3f(600,-26,130);
          glEnd();

          //lantai 3
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(600,0,80);
                 glVertex3f(600,-3,80);
                 glVertex3f(600,-3,130);
                  glVertex3f(600,0,130);
          glEnd();

           //lantai 4
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                 glVertex3f(600,23,80);
                 glVertex3f(600,20,80);
                 glVertex3f(600,20,130);
                  glVertex3f(600,23,130);
          glEnd();


          //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(600,46,80);
                 glVertex3f(600,43,80);
                 glVertex3f(600,43,130);
                 glVertex3f(600,46,130);
          glEnd();

          //akhir tepi kanan



          //awal belakang
          //lantai 1
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(385,-49,80);
                glVertex3f(385,-46,80);
                 glVertex3f(600,-46,80);
                 glVertex3f(600,-49,80);
          glEnd();

          //lantai 2
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(385,-26,80);
                glVertex3f(385,-23,80);
                 glVertex3f(600,-23,80);
                 glVertex3f(600,-26,80);
          glEnd();

            //lantai 3
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(385,0,80);
                glVertex3f(385,-3,80);
                 glVertex3f(600,-3,80);
                 glVertex3f(600,0,80);
          glEnd();

          //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(385,20,80);
                glVertex3f(385,23,80);
                 glVertex3f(600,23,80);
                 glVertex3f(600,20,80);
          glEnd();

          //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(0,1,0);
                glVertex3f(385,46,80);
                glVertex3f(385,43,80);
                 glVertex3f(600,43,80);
                 glVertex3f(600,46,80);
          glEnd();

          // akhir belakang

     //lantai 2
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-49,80);
                 glVertex3f(600,-49,80);
                 glVertex3f(600,-49,130);
                 glVertex3f(370,-49,130);
          glEnd();

     //lantai 2 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-46,80);
                 glVertex3f(600,-46,80);
                 glVertex3f(600,-46,130);
                 glVertex3f(370,-46,130);

          glEnd();


     //lantai 3
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-26,80);
                 glVertex3f(600,-26,80);
                 glVertex3f(600,-26,130);
                 glVertex3f(370,-26,130);

          glEnd();

     //lantai 3 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-23,80);
                 glVertex3f(600,-23,80);
                 glVertex3f(600,-23,130);
                 glVertex3f(370,-23,130);

          glEnd();

     //lantai 4
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,-3,80);
                 glVertex3f(600,-3,80);
                 glVertex3f(600,-3,130);
                 glVertex3f(370,-3,130);

          glEnd();

      //lantai 4 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,0,80);
                 glVertex3f(600,0,80);
                 glVertex3f(600,0,130);
                 glVertex3f(370,0,130);

          glEnd();

     //lantai 5
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,20,80);
                 glVertex3f(600,20,80);
                 glVertex3f(600,20,130);
                 glVertex3f(370,20,130);

          glEnd();

          //lantai 5 batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,23,80);
                 glVertex3f(600,23,80);
                 glVertex3f(600,23,130);
                 glVertex3f(370,23,130);

          glEnd();

          //lantai 6
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,43,80);
                 glVertex3f(600,43,80);
                 glVertex3f(600,43,130);
                 glVertex3f(370,43,130);

          glEnd();


          //lantai batas atas
            glBegin(GL_POLYGON);
               glColor3f(1,1,0);
                glVertex3f(385,46,80);
                 glVertex3f(600,46,80);
                 glVertex3f(600,46,130);
                 glVertex3f(370,46,130);

          glEnd();


}

void ukuran(int lebar, int tinggi){
     if(tinggi == 0)tinggi=1;
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluPerspective(60.0, lebar/tinggi, 100.0,1200.0);
     glTranslatef(0.0,-5.0,-600.0);
     glMatrixMode(GL_MODELVIEW);
}






