

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>




void myInit( void )  {
  glClearColor( 0.0, 0.0, 0.0, 0.0 );
  glColor3f( 1.0, 1.0, 1.0 );
  glPointSize( 3.0 );
  glMatrixMode( GL_PROJECTION );
  glLoadIdentity( );
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
void myDisplay( void )  {
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); 
        	     
        glBegin(GL_POLYGON);		
            glVertex3f(0.5, 0.25, 0.0);			
            glVertex3f(0.75, 0.25, 0.0);				
            glVertex3f(0.75, 0.75, 0.0);			
            glVertex3f(0.25, 0.75, 0.0);
      
        glEnd();
		glFlush();			
  	    glutSwapBuffers();
   
}


int main( int argc, char *argv[] )  {
  glutInit( &argc, argv );
  glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
  glutInitWindowSize( 640, 480 );
  glutInitWindowPosition( 200, 200 );
  glutCreateWindow( "Lab01" );
  

  myInit( );
  glutDisplayFunc( myDisplay );
  glutMainLoop( );
}

/* ----------------------------------------------------------------------- */

