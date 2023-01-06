/*
 * ZoomList.cpp
 *
 *  Created on: 6 Jan 2023
 *      Author: felipepesantez
 */

#include "ZoomList.h"
#include <iostream>

using namespace std;

namespace felipe {

ZoomList::ZoomList(int width, int height): m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub

}

void ZoomList::add(const Zoom &zoom){
	zooms.push_back(zoom);
	m_xCenter += (zoom.x - m_width/2) * m_scale;
	m_yCenter += (zoom.y - m_height/2) * m_scale;

	m_scale *= zoom.scale;

	cout << m_xCenter << ", " << m_yCenter << ", " << m_scale << "\n";

}

pair<double, double> ZoomList::doZoom(int x, int y){
	return pair<double, double> (0,0);
}

} /* namespace felipe */
