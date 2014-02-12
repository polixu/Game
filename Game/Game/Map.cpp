#include <SFML/Graphics.hpp>
using namespace sf;
class Map {
	private:
		int x;
		int y;
		int tile_size;
		int * map;
		Texture tilemap;
		Texture getTexture(int);
	public:
		int* getMap();
		void loadMap(int *);
		Map(int *);
		void drawMap();

};

Map::Map(int *arr){
	map = arr;
	tile_size = 64;
	if(!tilemap.loadFromFile("Tilemap.png")){
		printf("Error, tiles didn't load");
	}
}
int * Map::getMap(){
	return map;
}
void Map::loadMap(int *arr){
	map = arr;
}
void Map::drawMap(){
	for(int x = 0 ; x < this->x ; x++){
		for(int y = 0 ; y < this->y ; y++){
			
		}
	}
}