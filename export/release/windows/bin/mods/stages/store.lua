function onCreate()

	makeLuaSprite('sky', 'sky', -809.2, -150.05);
	addLuaSprite('sky', false);

	makeLuaSprite('grass', 'grass', -328.65, 613.1);
	addLuaSprite('grass', false);

	makeLuaSprite('tree', 'tree', -93.3, 92.6);
	addLuaSprite('tree', false);

	makeLuaSprite('yard', 'yard', 165.25, 43.4);
	addLuaSprite('yard', false);
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end