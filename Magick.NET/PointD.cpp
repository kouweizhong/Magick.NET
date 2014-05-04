//=================================================================================================
// Copyright 2013-2014 Dirk Lemstra <https://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#include "Stdafx.h"
#include "PointD.h"

namespace ImageMagick
{
	//==============================================================================================
	PointD::PointD(double x, double y)
	{
		_X = x;
		_Y = y;
	}
	//==============================================================================================
	double PointD::X::get()
	{
		return _X;
	}
	//==============================================================================================
	double PointD::Y::get()
	{
		return _Y;
	}
	//==============================================================================================
	bool PointD::operator == (PointD left, PointD right)
	{
		return Object::Equals(left, right);
	}
	//==============================================================================================
	bool PointD::operator != (PointD left, PointD right)
	{
		return !Object::Equals(left, right);
	}
	//==============================================================================================
	bool PointD::Equals(Object^ obj)
	{
		if (obj == nullptr)
			return false;

		if (obj->GetType() != PointD::typeid)
			return false;

		return Equals((PointD)obj);
	}
	//==============================================================================================
	bool PointD::Equals(PointD other)
	{
		return X == other.X && Y == other.Y;
	}
	//==============================================================================================
	int PointD::GetHashCode()
	{
		return X.GetHashCode() ^ Y.GetHashCode();
	}
	//==============================================================================================
}