//
// Created by Noah Morrison on 23/10/2024.
//

#pragma once
#include "Core.h"


int main(){
    std::unique_ptr<Sgread::Core> engine(new Sgread::Core());

    return engine->Run();
}
