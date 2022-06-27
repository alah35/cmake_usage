#pragma once
#include <iostream>
#include <vector>
#include "coordinates.h"

std::vector<Coordinates> scalpel(Coordinates a, Coordinates b);

void set_started_time(std::vector<Coordinates> vec);

void hemostat(Coordinates a);

void tweezers(Coordinates a);

bool suture(Coordinates a, Coordinates b);
