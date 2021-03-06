#include "Util/include/Application.h"

class Game : public Application
{
public:
	void Render(float curTime) override;
};

void Game::Render(float curTime)
{
	static const GLfloat color[] = { 1.0f, 0.0f, 0.0f, 1.0f };
	glClearBufferfv(GL_COLOR, 0, color);
}

int main(int argc, char* argv[])
{
	Game *app = new Game;
	app->Run(app);
	delete app;

	return 0;
}