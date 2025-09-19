//
// Created by 10127 on 25-9-12.
//

#ifndef MENU_SCENE_H
#define MENU_SCENE_H
#include <iostream>
#include <ostream>

#include "scene.h"
#include "scene_manager.h"

extern SceneManager scene_manager;

class MenuScene :public Scene
{

public:
    MenuScene() = default;
    ~MenuScene() = default;

    void on_enter() {
        std::cout<<"�������˵�"<<std::endl;
    };
    void on_update() {
        std::cout<<"���˵���������"<<std::endl;
    }
    void on_draw() {
        outtextxy(10,10,_T("���˵���ͼ����"));
    }
    void on_exit() {
        std::cout<<"���˵��˳�"<<std::endl;
    }
    void on_input(const ExMessage& msg) {
        if (msg.message == WM_KEYDOWN) {
            scene_manager.switch_to(SceneManager::SceneType::Select);
        }
    }

private:

};

#endif //MENU_SCENE_H
