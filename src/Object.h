//
// Created by becky on 27/11/2019.
//

#ifndef TEMPPROJECT_OBJECT_H
#define TEMPPROJECT_OBJECT_H

#include <iostream>
#include <vector>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Object
{
    public:
        bool Import(std::string path);
        std::vector <double> element;

};


#endif //TEMPPROJECT_OBJECT_H
