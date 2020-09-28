

/*
* A classe MeshOperation é a responsavel pela criacao de fato do objeto. 
* Nela serão definidos metodos que criarão vertices, arestas e faces de maneira estática.
* Não foi possível fazê-los como na descricao do trabalho, por falta de entendimento. 
* Logo, a maneira estática foi a escolhida para a construção das malhas.
*/
using namespace std;
class MeshOperation {
	public:
		Mesh buildCubeMesh(Vertex* vertices, Edge* edge, int vertexCount, Mesh mesh){
			vertices = (Vertex*) malloc(sizeof(Vertex) * vertexCount);
			
			vertices[0].p = 1.000000f;
			vertices[0].q = 1.000000f;
			vertices[0].r = -1.000000f;
		
			vertices[1].p = 1.000000f;
			vertices[1].q = -1.000000f;
			vertices[1].r = -1.000000f;
			
			vertices[2].p = 1.000000f;
			vertices[2].q = 1.000000f;
			vertices[2].r = 1.000000f;
				
				
			vertices[3].p = 1.000000f;
			vertices[3].q = -1.000000f;
			vertices[3].r = 1.000000f;
			
			vertices[4].p = -1.000000f;
			vertices[4].q = 1.000000f;
			vertices[4].r = -1.000000f;
			
			vertices[5].p = -1.000000f;
			vertices[5].q = -1.000000f;
			vertices[5].r = -1.000000f;
			
			vertices[6].p = -1.000000f;
			vertices[6].q = 1.000000f;
			vertices[6].r = 1.000000f;
			
			vertices[7].p = -1.000000f;
			vertices[7].q = -1.000000f;
			vertices[7].r = 1.000000f;
			
			
			int i;
//			for(i = 0; i < vertexCount; i++){
//				cout << vertices[i].p << "\t" <<  vertices[i].q << "\t" << vertices[i].r << "\n" << endl;	
//			}
				
			
			int v[] = {5,1,0,7,2,4,2,0,7,6,4,3};
			int v2[] = {7,5,1,6,3,5,6,2,3,4,0,1};
			edge = (Edge*) malloc(sizeof(Edge) * (2 * vertexCount));
			
			mesh.edgeCount = 12;
			
			for(int i=0; i < mesh.edgeCount; i++){
				edge[i].vertices[0] = v[i];
				edge[i].vertices[1] = v2[i];				
			}
	//			
			
			mesh.faces = (Face*) malloc(sizeof(Face) * 6);
			mesh.faceCount = 4;
			mesh.facesCount = 6;
			for(int i = 0; i < 6; i++){
				mesh.faces[i].face = (int*) malloc(sizeof(int) * 4);	
			}
			
	//		
			int f[][4] = {
			  {1,5,7,3},
			  {4,3,7,8},
			  {8,7,5,6},
			  {6,2,4,8},
			  {2,1,3,4},
			  {6,5,1,2}
			};
			
			for(int i = 0; i < 6; i++){
				for(int j=0; j < 4; j++){
					mesh.faces[i].face[j] = f[i][j];
				
				}		
			}
		
			mesh.vertices = vertices;
			mesh.edges = edge;
			
			return mesh;
			
	}
	
	Mesh buildSquareMesh(Vertex* vertices, Edge* edge, int vertexCount, Mesh mesh){
			vertices = (Vertex*) malloc(sizeof(Vertex) * vertexCount);
			
			vertices[0].p = 1.000000f;
			vertices[0].q = 1.000000f;
			vertices[0].r = -1.000000f;
		
			vertices[1].p = 1.000000f;
			vertices[1].q = -1.000000f;
			vertices[1].r = -1.000000f;
			
			vertices[2].p = 1.000000f;
			vertices[2].q = 1.000000f;
			vertices[2].r = 1.000000f;
				
				
			vertices[3].p = 1.000000f;
			vertices[3].q = -1.000000f;
			vertices[3].r = 1.000000f;
			
			
			int i;
//			for(i = 0; i < vertexCount; i++){
//				cout << vertices[i].p << "\t" <<  vertices[i].q << "\t" << vertices[i].r << "\n" << endl;	
//			}
//				
			
			int v[] = {0,2,3,1};
			int v2[] = {2,3,1,0};
			edge = (Edge*) malloc(sizeof(Edge) * (2 * vertexCount));
			
			mesh.edgeCount = 4;
			
			for(int i=0; i < mesh.edgeCount; i++){
				edge[i].vertices[0] = v[i];
				edge[i].vertices[1] = v2[i];				
			}

	
			mesh.faces = (Face*) malloc(sizeof(Face) * 6);
			mesh.faceCount = 4;
			mesh.facesCount = 1;
			for(int i = 0; i < mesh.facesCount; i++){
				mesh.faces[i].face = (int*) malloc(sizeof(int) * mesh.faceCount);	
			}
			
	//		
			int f[][4] = {
			  {2,1,3,4}
			};
			
			for(int i = 0; i < mesh.facesCount; i++){
				for(int j=0; j < mesh.faceCount; j++){
					mesh.faces[i].face[j] = f[i][j];
				}		
			}
		
			mesh.vertices = vertices;
			mesh.edges = edge;
			
			return mesh;
			
	}
	
	Mesh buildTriangleMesh(Vertex* vertices, Edge* edge, int vertexCount, Mesh mesh){
			vertices = (Vertex*) malloc(sizeof(Vertex) * vertexCount);
			
			vertices[0].p = 1.000000f;
			vertices[0].q = 1.000000f;
			vertices[0].r = -1.000000f;
		
			vertices[1].p = 1.000000f;
			vertices[1].q = -1.000000f;
			vertices[1].r = -1.000000f;
			
			vertices[2].p = 1.000000f;
			vertices[2].q = 1.000000f;
			vertices[2].r = 1.000000f;		
			
			
//			int i;
//			for(i = 0; i < vertexCount; i++){
//				cout << vertices[i].p << "\t" <<  vertices[i].q << "\t" << vertices[i].r << "\n" << endl;	
//			}
				
			
			int v[] = {0,2,1};
			int v2[] = {2,1,0};
			edge = (Edge*) malloc(sizeof(Edge) * (2 * vertexCount));
			
			mesh.edgeCount = 3;
			
			for(int i=0; i < mesh.edgeCount; i++){
				edge[i].vertices[0] = v[i];
				edge[i].vertices[1] = v2[i];				
			}

	
			mesh.faces = (Face*) malloc(sizeof(Face) * 6);
			mesh.faceCount = 3;
			mesh.facesCount = 1;
			for(int i = 0; i < mesh.facesCount; i++){
				mesh.faces[i].face = (int*) malloc(sizeof(int) * mesh.faceCount);	
			}
			
	//		
			int f[][3] = {
			  {2,1,3}
			};
			
			for(int i = 0; i < mesh.facesCount; i++){
				for(int j=0; j < mesh.faceCount; j++){
					mesh.faces[i].face[j] = f[i][j];
				}		
			}
		
			mesh.vertices = vertices;
			mesh.edges = edge;
			
			return mesh;
			
	}
};
