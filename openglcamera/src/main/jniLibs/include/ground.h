/* DO NOT EDIT THIS FILE - it is machine generated
 * 用来画任何东西的头文件
 * */
#pragma once

#include "sggl.h"
#include "vertexbuffer.h"
#include "shader.h"
class Ground {
public:
    SShader *mShader;
    VertexBuffer *vertexBuffer;
    glm::mat4 mModelMatrix;

public:
    void initData();//初始化数据
    void draw(glm::mat4 &mViewMatrix, glm::mat4 &mProjectionMatrix);
};





