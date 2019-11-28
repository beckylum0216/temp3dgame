//
// Created by becky on 27/11/2019.
//

#include "Object.h"

bool Object::Import(std::string path)
{
    Assimp::Importer import;
    const aiScene *scene;
    scene = import.ReadFile(path, aiProcessPreset_TargetRealtime_Quality);

    if(!scene)
    {
        std::cout << import.GetErrorString() << std::endl;
    }

    std::cout << "type of: " << scene->mMeshes[0] << std::endl;

    return true;
}