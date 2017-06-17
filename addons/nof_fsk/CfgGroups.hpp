class CfgGroups 
{
	
	class West 
	{
		
		name = $STR_WEST;
		
		
		class FSK 
		{
			
			name = "FSK";
			
			
			class Infantry 
			{
				
				name = "Infantry";
				
				
				class FSK_Squad 
				{
					
					name = "Norwegian Special Forces Squad";
					
					faction = FSK;
					
					rarityGroup = 0.01;
					
					
					class Unit0 
					{
						
						side = TWest;
						
						vehicle = "nof_fsk_tl";
						
						rank = LIEUTENANT;
						
						position[] = {0, 5, 0};
					
					};
					
					
					class Unit1 
					{
						
						side = TWest;
						
						vehicle = "nof_fsk_marksman";
						
						rank = SERGEANT;
						
						position[] = {3, 0, 0};
					
					};
					
					
					class Unit2 
					{
						
						side = TWest;
						
						vehicle = "nof_fsk_grenadier";
						
						rank = SERGEANT;
						
						position[] = {5, 0, 0};
					
					};
					
					
					class Unit3 
					{
						
						side = TWest;
						
						vehicle = "nof_fsk_heavy";
						
						rank = SERGEANT;
						
						position[] = {7, 0, 0};
					
					};
					
					
					class Unit4 
					{
						
						side = TWest;
						
						vehicle = "nof_fsk_corpsman";
						
						rank = SERGEANT;
						
						position[] = {9, 0, 0};
					
					};

				};
			};
		};
	};
};