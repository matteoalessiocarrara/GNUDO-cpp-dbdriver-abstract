/*
 * Copyright 2016 Matteo Alessio Carrara <sw.matteoac@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

# include "objects.hpp"

using namespace gnudo::abstract;

template <class P>
Child<P>::Child(P *parent)
{
	__parent = parent;
}

template <class P> P *
Child<P>::getParent() const
{
	return __parent;
}

template <class P>
Object<P>::Object(P *parentManager): Child<P>(parentManager)
{

}

Task::Task(TasksManager *parentManager): Object(parentManager)
{

}

PriorityLevel::PriorityLevel(PriorityLevelsManager *parentManager): Object(parentManager)
{

}