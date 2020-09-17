#ifndef _H_RENDERER
#define _H_RENDERER

#include<GLFW/glfw3.h>

#include "Renderer_API/VertexArray.h"
#include "Renderer_API/Shader.h"
#include "Renderer_API/Model.h"

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>

#include "Camera.h"

class Renderer {
public:
	Renderer();
	~Renderer();
	static void renderModel(Shader& shader, VertexArray& va, Model& model, glm::mat4 transform = glm::mat4(1.0f));
	static void renderPlain(Shader& shader, VertexArray& va, glm::mat4 transform = glm::mat4(1.0f));
	static void init(Camera& cam);
private:
	static glm::mat4 viewProjectionMatrix;
	
};

#endif