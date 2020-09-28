 #include "Face.h"
 
 /**
 * A classe malha � uma entidade que contem faces, arestas e vertices, 
 * alem da informa��o da quantidade de cada um.
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
