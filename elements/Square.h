#include<iostream>
#include<string>

#define M 4

/**
*	Square é uma entidade que herda certas caracteristicas do 
*	objeto pai Object3D, e implementa ações da MeshInterface.
*/

using namespace std;
class Square: public Object3D, public MeshInterface{
	private:
  	GeometricMesh mesh;
	bool isUsingDefault = true;
	
  public:      
  	int id;      
	
	Square(){
  		useDefaultMesh();
  		setBaseUrl("square/");
	}
	
	/*
		THESE SHOULD BE AT AN INTERFACE
	*/
	
	void useDefaultMesh(){
		mesh.createMesh(M);
		mesh.initialize("square");
	}
	
	void setMesh(int vertex){
		if (vertex < 4){
			cout << "Sorry, a basic square must have at least " << N << " vertices."<<'\n';
			return;
		}
	
		mesh.createMesh(vertex);
		mesh.initialize(getType());
	}
	
	bool isUsingDefaultGeometricMesh(){
		return isUsingDefault;
	}
	
	Mesh getMesh(){
		return mesh.getMesh();
	}
};
