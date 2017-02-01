#define _USE_MATH_DEFINES
#include "warpfunctions.h"
#include <math.h>
#include "utils.h"

glm::vec3 WarpFunctions::squareToDiskUniform(const glm::vec2 &sample)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented uniform disk warping!");
}

glm::vec3 WarpFunctions::squareToDiskConcentric(const glm::vec2 &sample)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

float WarpFunctions::squareToDiskPDF(const glm::vec3 &sample)
{
    //TODO
    return 0;
}

glm::vec3 WarpFunctions::squareToSphereUniform(const glm::vec2 &sample)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented uniform sphere warping!");
}

float WarpFunctions::squareToSphereUniformPDF(const glm::vec3 &sample)
{
    //TODO
    return 0;
}

glm::vec3 WarpFunctions::squareToSphereCapUniform(const glm::vec2 &sample, float thetaMin)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented sphere cap warping!");
}

float WarpFunctions::squareToSphereCapUniformPDF(const glm::vec3 &sample, float thetaMin)
{
    //TODO
    return 0;
}

glm::vec3 WarpFunctions::squareToHemisphereUniform(const glm::vec2 &sample)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented uniform hemisphere warping!");
}

float WarpFunctions::squareToHemisphereUniformPDF(const glm::vec3 &sample)
{
    //TODO
    return 0;
}

glm::vec3 WarpFunctions::squareToHemisphereCosine(const glm::vec2 &sample)
{
    //TODO
    throw std::runtime_error("You haven't yet implemented cosine-weighted hemisphere warping!");
}

float WarpFunctions::squareToHemisphereCosinePDF(const glm::vec3 &sample)
{
    //TODO
    return 0;
}
