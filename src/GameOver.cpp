
#include "GameOver.hpp"
#include "KeyboardInput.hpp"
#include "TextureManager.hpp"

GameOver* GameOver::s_Instance = nullptr;

void GameOver::init()
{
    m_GameOver = false;
    m_PlayAgain = false;
}

void GameOver::update()
{
    if ((m_GameOver == true) && (KeyboardInput::getInstance()->getKeyDown(SDL_SCANCODE_O)))
    {
        m_GameOver = false;
        m_PlayAgain = true;

    }
}

void GameOver::updateDeath()
{
    m_GameOver = true;
}

void GameOver::render()
{
    if (m_GameOver) TextureManager::getInstance()->drawBG("GameOver", 0, 0, 1344, 768);
    else return;
}

void GameOver::exit()
{

}