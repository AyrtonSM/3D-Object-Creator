#include<string>
#include <iostream>  
#include<sstream>  
#include <fstream>
#include "../elements/GeometricMesh.h"
#include "../interfaces/ObjectInterface.h"
#include <iomanip>

using namespace std;

/*
	Object3D é uma classe responsavel por implementar todos os metodos basicos de um objeto 3D
	implementando a interface ObjectInterface
*/
class Object3D: public ObjectInterface{
	
	
	private:
		string name;
		string type;
		string baseUrl;
			
	public:

		void setName(string objectName){
			name = objectName;
		}
		
		string getName(){
			return name;
		}
		
		string print(){
			return name;
		}
	
		string getType(){
			return type;
		}
		
		void setType(string t){
			type = t;
		}
		
		string getBaseUrl(){
			return type;
		}
		
		void setBaseUrl(string url){
			baseUrl = url;
		}
		
		// Metodo responsável por salvar a malha em dois tipos de arquivos .txt e .obj
		// é recebido uma malha, um caminho para onde o arquivo será gravado, um nome de um arquivo e o tipo (extensão) do arquivo
		void save(Mesh mesh, string filepath, string filename,string type){
			string folder = "output/";
			string file = folder + filepath + filename  +"." + type;
			ofstream Object3dFile(file.c_str());
			Object3dFile << "# Blender v2.83.0 OBJ File: ''" << endl;
			Object3dFile << "# www.blender.org" << endl ;
			Object3dFile << "mtllib untitled-edges.mtl" << endl ;
			Object3dFile << "o " << getType() << endl;
						
			
			for(int i = 0 ; i < mesh.vertexCount ; i++ ){
				if(getType().compare("cube") || getType().compare("Cube")){
					Object3dFile << "v " << std::fixed << std::setprecision(6) << mesh.vertices[i].p << " " << mesh.vertices[i].q << " " << mesh.vertices[i].r << endl;	
				}else if(getType().compare("square") || getType().compare("Square")) {
					Object3dFile << "v " << std::fixed << std::setprecision(6) << mesh.vertices[i].p << " " << mesh.vertices[i].q << mesh.vertices[i].r << endl;	
				}	
				else if(getType().compare("triangle") || getType().compare("Triangle")) {
					Object3dFile << "v " << std::fixed << std::setprecision(6) << mesh.vertices[i].p << " " << mesh.vertices[i].q << mesh.vertices[i].r << endl;	
				}

			}
			
			if(mesh.edgeCount != 0){
				
				for(int i = 0 ; i < mesh.edgeCount ; i++ ){
					Object3dFile << "l " << mesh.edges[i].vertices[0]+1 << " " << mesh.edges[i].vertices[1]+1 << endl;		
				}	
			}
			
			
//			cout << mesh.facesCount ;
			
			string face;
			string EMPTY = " ";
			for(int i = 0 ; i < mesh.facesCount ; i++ ){
				Object3dFile << "f ";
				
				for(int j = 0 ; j < mesh.faceCount ; j++ ){
					int v  = mesh.faces[i].face[j];
					Object3dFile << v << " ";
				}
				Object3dFile << endl;
			}
		
			
			Object3dFile.close();
 		}
		
		
		
		
};
