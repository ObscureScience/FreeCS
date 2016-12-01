/*
OpenCS Project
Copyright (C) 2015 Marco "eukara" Hladik

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

.int iClip_M4A1;

// Weapon Info
weaponinfo_t wptM4A1 = { 
	WEAPON_M4A1, 		// Identifier
	SLOT_PRIMARY,
	3100, 				// Price
	CALIBER_556MM, 		// Caliber ID
	230, 				// Max Player Speed
	1, 					// Bullets Per Shot
	30, 				// Clip/MagSize
	33, 				// Damage Per Bullet
	1, 					// Penetration Multiplier
	8192, 				// Bullet Range
	0.97, 				// Range Modifier
	TYPE_AUTO,
	0.15, 				// Attack-Delay
	3.0, 				// Reload-Delay
	iAmmo_556MM, 		// Caliber Pointer
	iClip_M4A1 			// Clip Pointer
};