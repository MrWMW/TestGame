//
// Created by 10127 on 25-9-12.
//

#ifndef SCENE_H
#define SCENE_H

#include <graphics.h>

class Scene {

public:
    Scene() = default;
    ~Scene() = default;

    //初始化场景
    virtual void on_enter(){}
    //处理数据
    virtual void on_update(){}
    //渲染绘图
    virtual void on_draw(){}
    //关闭场景
    virtual void on_exit(){}
    //处理输入
    virtual void on_input(const ExMessage& msg){}



private:

};


#endif //SCENE_H
