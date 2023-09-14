#pragma once
#include "color.h"
#include "uniform.h"
#include "fragment.h"
#include "FastNoiseLite.h"
#include <cmath>
#include <random>

Vertex vertexShader(const Vertex& vertex, const Uniform& uniforms) {

  glm::vec4 clipSpaceVertex = uniforms.projection * uniforms.view * uniforms.model * glm::vec4(vertex.position, 1.0f);

  glm::vec3 ndcVertex = glm::vec3(clipSpaceVertex) / clipSpaceVertex.w;

  glm::vec4 screenVertex = uniforms.viewport * glm::vec4(ndcVertex, 1.0f);

  glm::vec3 transformedNormal = glm::mat3(uniforms.model) * vertex.normal;
  transformedNormal = glm::normalize(transformedNormal);

  return Vertex{
    glm::vec3(screenVertex),
    transformedNormal,
    vertex.position
  };
};

float rand(glm:: vec3 co) {
    return glm::fract(sin(glm::dot(co, glm::vec3(12.9898, 78.233, 54.53))) * 43758.5453);
}

// Sol
// Fragment fragmentShader(Fragment& fragment) {
//     Color color;

//     // Centro de la pantalla (suponiendo que el centro es (0, 0))
//     glm::vec2 center = glm::vec2(0.0f, 0.0f);

//     // Radio del sol
//     float sunRadius = 0.1f;

//     // Calcula la distancia del fragmento al centro de la pantalla
//     glm::vec2 fragmentPos = glm::vec2(fragment.original.x, fragment.original.y);
//     float distanceToCenter = glm::length(fragmentPos - center);

//     // Dirección de la luz (puedes ajustarla según tus necesidades)
//     glm::vec2 lightDirection = glm::normalize(glm::vec2(1.0f, 1.0f)); // Diagonal superior derecha

//     // Calcula el producto punto entre la dirección de la luz y la dirección al fragmento
//     float dotProduct = glm::dot(glm::normalize(fragmentPos), lightDirection);

//     float shadowFactor = 0.55f; // Factor de sombra (ajusta según tus necesidades)
//     // Calcula un color más oscuro utilizando el producto punto como factor de sombra
//     int r = static_cast<int>(255 * (2.5f - shadowFactor * dotProduct) + 5.0f);
//     int g = static_cast<int>(70 * (2.5f - shadowFactor * dotProduct) + 3.5f);
//     int b = static_cast<int>( (shadowFactor * dotProduct) + 0.5f);
//     color = Color(r+200, g, b);

//     fragment.color = color;

//     return fragment;
// }


// Marte
// Fragment fragmentShader(Fragment& fragment) {
//     Color color;

//     glm::vec3 baseColor = glm::vec3(0.7f, 0.1f, 0.1f); // Color base similar a Marte (rojo/rocoso)

//     glm::vec2 uv = glm::vec2(fragment.original.x, fragment.original.y);

//     FastNoiseLite noiseGenerator;
//     noiseGenerator.SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);

//     // Capa de textura roja para áreas rocosas
//     float ox1 = 500.0f;
//     float oy1 = 700.0f;
//     float zoom1 = 150.0f;
//     float noiseValue1 = noiseGenerator.GetNoise((uv.x + ox1) * zoom1, (uv.y + oy1) * zoom1);
//     glm::vec3 rockyLayer = glm::vec3(0.6f, 0.3f, 0.2f) * noiseValue1;

//     // Añade variaciones de color basadas en la altitud
//     float altitude = uv.y * 2.0f - 1.0f; // Suponemos que uv.y está en el rango [0, 1]
//     glm::vec3 altitudeColor = glm::vec3(0.1f, 0.1f, 0.1f) * altitude;

//     // Añade todas las capas de textura y variación de color
//     glm::vec3 finalColor = baseColor + rockyLayer + altitudeColor;

//     color = Color(static_cast<int>(finalColor.x * 255), static_cast<int>(finalColor.y * 255), static_cast<int>(finalColor.z * 255));

//     fragment.color = color;

//     return fragment;
// }


// Fragment fragmentShader(Fragment& fragment) {
//     Color color;

//     glm::vec3 baseColor = glm::vec3(0.7f, 0.5f, 0.0f); // Color base similar a Marte (rojo/rocoso)

//     glm::vec2 uv = glm::vec2(fragment.original.x, fragment.original.y);

//     FastNoiseLite noiseGenerator;
//     noiseGenerator.SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);

//     // Capa de textura roja para áreas rocosas
//     float ox1 = 200.0f;
//     float oy1 = 100.0f;
//     float zoom1 = 150.0f;
//     float noiseValue1 = noiseGenerator.GetNoise((uv.x + ox1) * zoom1, (uv.y + oy1) * zoom1);
//     glm::vec3 rockyLayer = glm::vec3(0.8f, 0.8f, 0.8f) * noiseValue1;

//     // Añade variaciones de color basadas en la altitud
//     float altitude = uv.y * 2.0f - 1.0f; // Suponemos que uv.y está en el rango [0, 1]
//     glm::vec3 altitudeColor = glm::vec3(0.1f, 0.1f, 0.1f) * altitude;

//     // Añade todas las capas de textura y variación de color
//     glm::vec3 finalColor = baseColor + rockyLayer + altitudeColor ;

//     color = Color(static_cast<int>(finalColor.x * 255), static_cast<int>(finalColor.y * 255), static_cast<int>(finalColor.z * 255));

//     fragment.color = color;

//     return fragment;
// }


// Jupiter
Fragment fragmentShader(Fragment& fragment) {
    Color color;

    glm::vec3 baseColor = glm::vec3(1.0f, 0.6f, 0.2f);

    glm::vec2 uv = glm::vec2(fragment.original.x, fragment.original.y);

    FastNoiseLite noiseGenerator;
    noiseGenerator.SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);

    float shadowIntensity = 0.1f; // Reduced shadow intensity

    float ox1 = 500.0f;
    float oy1 = 700.0f;
    float zoom1 = 150.0f;
    float noiseValue1 = noiseGenerator.GetNoise((uv.x + ox1) * zoom1, (uv.y + oy1) * zoom1);
    glm::vec3 jupiterLayer = glm::vec3(0.9f, 0.7f, 0.4f) * noiseValue1 * (1.0f - shadowIntensity);

    float altitude = uv.y * 2.0f - 1.0f;
    glm::vec3 altitudeColor = glm::vec3(0.9f, 0.7f, 0.4f) * altitude * (1.0f - shadowIntensity);

    glm::vec3 finalColor = baseColor + jupiterLayer + altitudeColor;

    color = Color(static_cast<int>(finalColor.x * 255), static_cast<int>(finalColor.y * 255), static_cast<int>(finalColor.z * 255));

    fragment.color = color;

    return fragment;
}

