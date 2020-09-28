#include<iostream>
#include<string>

#define O 3
using namespace std;
class Triangle: public Object3D, public MeshInterface{
	private:
  	GeometricMesh mesh;
	bool isUsingDefault = true;
	
  public:      
  	int id;      
	
	Triangle(){
  		useDefaultMesh();
  		setBaseUrl("triangle/");
	}
	
	/*
		THESE SHOULD BE AT AN INTERFACE
	*/
	
	void useDefaultMesh(){
		mesh.createMesh(O);
		mesh.initialize("triangle");
	}
	
	void setMesh(int vertex){
		if (vertex < 3){
			cout << "Sorry, a basic triangle must have at least " << N << " vertices."<<'\n';
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
