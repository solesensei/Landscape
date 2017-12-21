#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <string>

using std::cerr;
using std::endl;

const int m_rows = 200;
const int m_cols = 200;
const int terrain_size = 2*2*2*2*2*2*2*2+1; // terrain_size > min(rows,cols)  
float map[terrain_size][terrain_size];
float Sea[terrain_size][terrain_size];
const float roughness = 0.3;
const int map_height = 85;
bool isRandom = true;
const std::string pick_sky = "4";  // 1-4

bool isMedian = false;



#endif
