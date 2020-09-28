#include<iostream>
#include<string>
#include "../interfaces/MeshInterface.h"

#define N 8

/**
*	Cube é uma entidade que herda certas caracteristicas do 
*	objeto pai Object3D, e implementa ações da MeshInterface.
*/

using namespace std;
class Cube: public Object3D, virtual public MeshInterface{     
	
  private:
  	GeometricMesh mesh;
	bool isUsingDefault = true;
	
  public:      
  	int id;      
	
	Cube(){
  		useDefaultMesh();
	}
	
	// Metodo que define o uso da malha padrão do cubo;
	void useDefaultMesh(){
		mesh.createMesh(N);
		mesh.initialize("cube");
	}
	
	// Metodo que define uma customização no numero de vertices do cubo
	void setMesh(int vertex){
		if (vertex < 8){
			cout << "Sorry, a basic cube must have at least " << N << " vertices."<<'\n';
			return;
		}
	
		mesh.createMesh(vertex);
		mesh.initialize("cube");
	}
	
	// Metodo que verifica se a malha que está sendo usada é a malha padrão
	bool isUsingDefaultGeometricMesh(){
		return isUsingDefault;
	}
	
	// Retorna a malha do objeto inicializado
	Mesh getMesh(){
		return mesh.getMesh();
	}
	
	
	
};

