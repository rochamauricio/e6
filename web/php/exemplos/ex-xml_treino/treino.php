
<?php

	$xml = simplexml_load_file("https://www.inf.ufrgs.br/site/wp-content/themes/UfrgsINF/premios/premios.xml");
	
	if($xml) {
		echo "<table id='myTable' style='width:100%;' border=2>\n
	  			<tr class='header'>\n
					<th >Ano</th>\n
					<th class='categ-oculta'>Categoria</th>\n
					<th class='categ-oculta'>Prêmio</th>\n
					<th>Prêmio / Distinção</th>\n
	  			</tr>\n"; 			
		
		
		foreach($xml->children() as $premio) {
			echo "<tr>\n";
	  		echo "<td>" . $premio->ano . "</td>\n";
	 		echo "<td class='categ-oculta'>" . $premio->categ . "</td>\n";
	  		echo "<td class='categ-oculta'>" . $premio->subcateg . "</td>\n";
			echo "<td>" . $premio->info . "</td>\n";
			echo "</tr>\n";
		} 

		echo "</table>\n";
	} 
	
?>









