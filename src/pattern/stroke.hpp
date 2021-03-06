/*****************************************************************
 * This file is part of jot-lib (or "jot" for short):
 *   <http://code.google.com/p/jot-lib/>
 * 
 * jot-lib is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 * 
 * jot-lib is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with jot-lib.  If not, see <http://www.gnu.org/licenses/>.`
 *****************************************************************/
#ifndef _STROKE_H_
#define _STROKE_H_

#include "pattern/gesture_cell.hpp"
#include "mlib/points.hpp"

class Stroke {
public:
  // processes
   virtual ~Stroke() {}

  virtual void copy(GestureCell* target_cell, const mlib::UVpt& offset, bool stretch) const = 0;
  virtual void synthesize(GestureCell* target_cell, double target_pressure, double ref_angle, mlib::CUVpt& ref_pos, 
			  mlib::CUVvec& target_scale, double target_angle, mlib::CUVpt& target_pos) const = 0;

};

#endif // _STROKE_H_
