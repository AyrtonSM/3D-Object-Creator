
/*
*	Interface para definir ações das malhas, 
*	a classe que implementa essa interface deve implementar essas funções/
*/
 using namespace std;
 class MeshInterface {
 	public:
		virtual void useDefaultMesh() = 0;
	 	virtual void setMesh(int vertex) = 0;
	 	virtual bool isUsingDefaultGeometricMesh() = 0;
 };
