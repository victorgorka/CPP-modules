/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:27:31 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:27:32 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

static float	area(Point const &x, Point const &y, Point const &z)
{
	return abs((x.getX() * (y.getY() - z.getY()) + y.getX() * (z.getY() - x.getY())
		+ z.getX() * (x.getY() - y.getY())) / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	abc, pab, pbc, pac;

	abc = area(a, b, c);
	pab = area(point, a, b);
	pbc = area(point, b, c);
	pac = area(point, a, c);

	if (pab == 0 || pbc == 0 || pac == 0)
		return false;
	else if (pab + pbc + pac == abc)
		return true;
	else
		return false;
}