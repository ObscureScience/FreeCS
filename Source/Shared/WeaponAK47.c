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

.int iClip_AK47;

// Weapon Info
weaponinfo_t wptAK47 = { 
	WEAPON_AK47, 		// Identifier
	SLOT_PRIMARY,
	2500, 				// Price
	CALIBER_762MM, 		// Caliber ID
	221, 				// Max Player Speed
	1, 					// Bullets Per Shot
	30, 				// Clip/MagSize
	36, 				// Damage Per Bullet
	2, 					// Penetration Multiplier
	8192, 				// Bullet Range
	0.98, 				// Range Modifier
	TYPE_AUTO,
	0.15, 				// Attack-Delay
	3.0, 				// Reload-Delay
	iAmmo_762MM, 		// Caliber Pointer
	iClip_AK47 		// Clip Pointer
};

// Anim Table
enum {
	ANIM_AK47_IDLE,
	ANIM_AK47_RELOAD,
	ANIM_AK47_DRAW,
	ANIM_AK47_SHOOT1,
	ANIM_AK47_SHOOT2,
	ANIM_AK47_SHOOT3
};

void WeaponAK47_Draw( void ) {
	#ifdef QWSSQC
	OpenCSGunBase_Draw();
	sound( self, CHAN_WEAPON, "weapons/ak47_boltpull.wav", 1, ATTN_IDLE ); // TODO: Move to the client...?
	#else
	View_PlayAnimation( ANIM_AK47_DRAW );
	#endif
}

void WeaponAK47_PrimaryFire( void ) {
	#ifdef QWSSQC
	if ( OpenCSGunBase_PrimaryFire() == TRUE ) {
		if ( random() <= 0.5 ) {
			sound( self, CHAN_WEAPON, "weapons/ak47-1.wav", 1, ATTN_NORM );
		} else {
			sound( self, CHAN_WEAPON, "weapons/ak47-2.wav", 1, ATTN_NORM );
		}
	}
	#else
	int iRand = ceil( random() * 3 );
	if ( iRand == 1 ) {
		View_PlayAnimation( ANIM_AK47_SHOOT1 );
	} else if ( iRand == 2 ) {
		View_PlayAnimation( ANIM_AK47_SHOOT2 );
	} else {
		View_PlayAnimation( ANIM_AK47_SHOOT3 );
	}
	#endif
}

void WeaponAK47_Reload( void ) {
	#ifdef QWSSQC
	if ( OpenCSGunBase_Reload() == TRUE ) {
		// Play Sound
	}
	#else
	View_PlayAnimation( ANIM_AK47_RELOAD );
	#endif
}