//
// Created by 10127 on 25-9-17.
//

#ifndef SELECT_SCENE_H
#define SELECT_SCENE_H
#include <iostream>
#include <ostream>

#include "scene.h"
#include "scene_manager.h"

extern SceneManager scene_manager;

class SelectScene : public Scene
{
public:
    SelectScene()=default;
    ~SelectScene()=default;

    void on_enter() {
        std::cout<<"���ڽ����ɫѡ�����"<<std::endl;
    }

    void on_draw() {
        outtextxy(10,10,_T("��ɫѡ���ͼ����"));
    }

    void on_exit() {
        std::cout<<"�����˳���ɫѡ�����"<<std::endl;
    }
    void on_update() {
        std::cout<<"��ɫѡ�������������"<<std::endl;
    }

    void on_input(const ExMessage &msg) {
        if (msg.message == WM_KEYDOWN) {
            scene_manager.switch_to(SceneManager::SceneType::Game);
        }
    }
};

#endif //SELECT_SCENE_H
