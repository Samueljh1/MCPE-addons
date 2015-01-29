#ifndef __TILETESSELATOR_H__
#define __TILETESSELATOR_H__

#include "../AABB.h"
#include "../texture/TextureUVCoordinateSet.h"

class Tile;
class TileSource;
class Tessellator;
struct TilePos;

class TileTessellator {
public:
	char filler1[4];							// 0
	TileSource *_tileSource;					// 4
	TextureUVCoordinateSet _texture;	// 8
	bool _renderTexture;					// 40
	char filler2[623];							// 41
	Tessellator* _tessellator;				// 664
	AABB _aabb;								// 668

public:
	bool tessellateInWorld(Tile *, const TilePos &, bool);
	void tessellateBlockInWorld(Tile *, const TilePos &);
	uint getLightColor(const TilePos &);
	void tex1(uint);
};

#endif
