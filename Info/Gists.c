	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//CREATE A POS AROUND THE PLAYER IN THE FACING DIRECTION. (EX: TO DROP AN ITEM)
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	PlayerBase player = GetGame().GetPlayer();
	vector fa_pos = player.GetPosition() + player.GetDirection();	//vector is 3 floats...	x,y,z	fa_pos[0],fa_pos[1],fa_pos[2]
	
	fa_pos[0]	=	fa_pos[0] + Math.Random(-0.2,0.2);		//add random float (between -0.2 and 0.2) to x value 
	fa_pos[2]	=	fa_pos[2] + Math.Random(-0.2,0.2);		//add random float (between -0.2 and 0.2) to z value 
	//now fa_pos is somewhere around player