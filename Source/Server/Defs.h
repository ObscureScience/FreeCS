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

#define VEC_HULL_MIN '-16 -16 -36'
#define VEC_HULL_MAX '16 16 36'

// Player specific fields
.float fInBuyZone;
.float fInHostageZone;
.float fInBombZone;
.float fMoney;
.float fStepTime;

.float fInGame;
float fInGamePlayers;
float fOldInGamePlayers;
float fGameState;
float fGameTime;

.int iCurrentClip;
.int iCurrentCaliber;

.int iSlotMelee, iSlotPrimary, iSlotSecondary, iSlotGrenade;

.float fAttackFinished;


// Game specific fields
int iHostages;

// GoldSrc-Rendermode Fields
.vector rendercolor;
.float rendermode;
.float renderamt;
.float alpha;

string sCSPlayers[9] = {
	"",
	"models/player/terror/terror.mdl",
	"models/player/leet/leet.mdl",
	"models/player/arctic/arctic.mdl",
	"models/player/guerilla/guerilla.mdl",
	"models/player/urban/urban.mdl",
	"models/player/gsg9/gsg9.mdl",
	"models/player/sas/sas.mdl",
	"models/player/gign/gign.mdl"
};

void Client_SendEvent( entity eClient, float fEVType );

void OpenCSGunBase_Draw( void );
float OpenCSGunBase_PrimaryFire( void );
float OpenCSGunBase_Reload( void );