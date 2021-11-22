function onCreate()

	makeLuaSprite('cafe_stage', 'cafe_stage', -600, -300);
	addLuaSprite('cafe_stage', false);
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end