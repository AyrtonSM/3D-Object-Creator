#include<stdio.h>
#include<string>
#include "utils/ObjectFactory.h"
//#include "elements/Scene.cpp"
#include <iostream>
//#include "elements/Cube.hpp"



//#include <glm/glm/vec3.hpp> // glm::vec3
//#include <glm/glm/vec4.hpp> // glm::vec4
//#include <glm/glm/mat4x4.hpp> // glm::mat4
//#include <glm/glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale, glm::perspective
//
//
//glm::mat4 camera(float Translate, glm::vec2 const & Rotate)
//{
//glm::mat4 Projection = glm::perspective(glm::radians(45.0f), 4.0f / 3.0f, 0.1f, 100.f);
//glm::mat4 View = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -Translate));
//View = glm::rotate(View, Rotate.y, glm::vec3(-1.0f, 0.0f, 0.0f));
//View = glm::rotate(View, Rotate.x, glm::vec3(0.0f, 1.0f, 0.0f));
//glm::mat4 Model = glm::scale(glm::mat4(1.0f), glm::vec3(0.5f));
//return Projection * View * Model;
//}

main(){
	
	bool valid = false;	
	
	do{
		valid = true;
		
		cout << "---------------------------" << endl;
		cout << "Welcome to .obj Creation for Blender Use" << endl;
		cout << "---------------------------" << endl;
		
		cout << "Choose from an option below " << endl;
		cout << "[1] - Create a cube" << endl ;
		cout << "[2] - Create a Square" << endl ;
		cout << "[3] - Create a Triangle" << endl;
		
		int option; 
		cin >> option;
		char save;
		string name;
		string filename;
		
		switch(option){
			
			case 1:
			{
				ObjectFactory<Cube> cubeFactory;
				cout << "Type a name for your cube: " << endl;
				cin.ignore();
				getline(cin,name);
				
				cubeFactory.initialize(name,"Cube");
				Cube cube = cubeFactory.getObject();
				cout << "Do you wish to save it? [y/n]";
				
		
				cin >> save;
				
				if(save == 'y'){
					cout << "Type the filename for your cube: " << endl;
					cin.ignore();
					getline(cin,filename);
					cube.save(cube.getMesh(),"cube/",filename,"obj");	
					cube.save(cube.getMesh(),"cube/",filename,"txt");
					
					cout << "Your file has been saved into output/cube/" + filename + "(.obj/.txt)" << endl;
					
				}	
				break;
			}
			
			case 2:
			{
				ObjectFactory<Square> squareFactory;
				
				cout << "Type a name for your square: " << endl;
				cin.ignore();
				getline(cin,name);
				squareFactory.initialize(name,"Plane");
				Square square = squareFactory.getObject();
			
				cout << "Do you wish to save it? [y/n]";
		
				cin >> save;
			
				if(save == 'y'){
					cout << "Type the filename for your square: " << endl;
					cin.ignore();
					getline(cin,filename);
					square.save(square.getMesh(),"square/",filename,"obj");	
					square.save(square.getMesh(),"square/",filename,"txt");
					
					cout << "Your file has been saved into output/cube/" + filename + "(.obj/.txt)" << endl;

				}
					
				break;
			}
				
		
			
			case 3:
			{
				ObjectFactory<Triangle> triangleFactory;
				cout << "Type a name for your triangle: " << endl;
				cin.ignore();
				getline(cin,name);
				triangleFactory.initialize(name,"Plane");
				Triangle triangle = triangleFactory.getObject();
				
				cout << "Do you wish to save it? [y/n]";	
				
				cin >> save;
				
				if(save == 'y'){
					cout << "Type the filename for your triangle: " << endl;
					cin.ignore();
					getline(cin,filename);
					triangle.save(triangle.getMesh(),"triangle/",filename,"obj");	
					triangle.save(triangle.getMesh(),"triangle/",filename,"txt");
					
					cout << "Your file has been saved into output/cube/" + filename + "(.obj/.txt)" << endl;

				}
				
				break;
				
			}
			
			default:
			{
				valid = false;
				break;
			
			}
					
				
				
				
		}
		
		
	}while(valid);
	

	
	
}
