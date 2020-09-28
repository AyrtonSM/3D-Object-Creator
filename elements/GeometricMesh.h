#include <iostream>
#include <stdlib.h>
#include <string>
#include "Mesh.h"
#include "../utils/MeshOperation.h"


 /**
 * GeometricMesh é uma classe responsavel pela criação e 
 * definição da mesh e seu conteudo como vertices, arestas e faces.
 */
 
using namespace std;
class GeometricMesh {
	
	private:
		
		Mesh mesh; 
		int vertexNumber;
		Edge* edge;
		Vertex* vertices;
		MeshOperation meshOperation;
		

	public: 
		// Cria uma base para a malha a partir do numero de vertices
		void createMesh(int vertexCount){
			cout << "creating mesh" << endl;
			vertexNumber = vertexCount;
			
			mesh.vertexCount = vertexCount;
		}
		
		// initialize é responsavel pela inicialização de cada malha a depender do tipo de objeto.
		void initialize(string objectType){
		
			
			string CUBE = "cube";
			string SQUARE = "square";
			string TRIANGLE = "triangle";
			
			if(objectType.compare(CUBE) == 0){
				mesh = meshOperation.buildCubeMesh(vertices, edge, vertexNumber, mesh);
			}else if(objectType.compare(SQUARE) == 0){
				mesh = meshOperation.buildSquareMesh(vertices, edge, vertexNumber, mesh);
			}else if(objectType.compare(TRIANGLE) == 0){
				mesh = meshOperation.buildTriangleMesh(vertices, edge, vertexNumber, mesh);
			}
	
				
			
		}
		
		// retorna a malha definida para o objeto
		Mesh getMesh(){
			return mesh;
		}	
		
		
	
};


