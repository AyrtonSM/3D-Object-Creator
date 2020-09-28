 #include "Face.h"
 
 /**
 * A classe malha é uma entidade que contem faces, arestas e vertices, 
 * alem da informação da quantidade de cada um.
 */
 using namespace std;
 class Mesh{
 	public:
 		Face* faces;
 		Edge* edges;
 		Vertex* vertices;
 		int vertexCount;
 		int edgeCount;
 		int faceCount;
		int facesCount; 
				
 };
