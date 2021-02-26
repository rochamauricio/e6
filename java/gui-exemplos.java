AGLUTINAR COM O gui - exemplos DO WORKSPACE ANTIGO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


-- Mais atuais em baixo

------------------------------------------------------------ Caixas de diálogo
import javax.swing.JOptionPane; //JOptionPane contém caixas de diálogo prontas

//Cria caixa de diálogo
public class NameDialog 
{
	public static void main( String[] args)
	{
		String name = JOptionPane.showInputDialog("Qual a sua graça?");
		String message = String.format("Bem vindo %s", name);
		
		JOptionPane.showMessageDialog(null, message);		
	}
}


------------------------------------------------------------ Desenhando retas na tela
import java.awt.Graphics;
import javax.swing.JPanel;

//Coordenadas 0 0 no canto esquerdo superior da tela
public class DrawPanel extends JPanel  
	//extends = herança, JPanel = superclasse, DrawPanel = subclasse
{ 	//Herdar de JPanel significa ter todos os métodos e atributos dela e tbm os novos que incluirmos. 
	//desenha um X na tela
	//Método da JPanel
	public void paintComponent (Graphics g )
	{
		//assegura que painel seja exibido corretamente na tela
		//deve ser SEMPRE a primeira instrução do método paintComponent
		super.paintComponent( g );
		
		int width = getWidth();
		int height = getHeight();
		
		//desenha uma linha
		g.drawLine(0, 0, width, height); //x1, y1, x2, y2
		
		//desenha outra linha
		g.drawLine(0, height, width, 0); //x1, y1, x2, y2				
	}
}


import javax.swing.JFrame;

public class DrawPanelTest 
{
	public static void main( String[] args )
	{
		//Cria um painel que irá conter o desenho
		DrawPanel panel = new DrawPanel();
		
		//Cria um novo quadro para armazenar o painel
		JFrame application = new JFrame();
		
		//Configura o frame para ser encerrado quando ele é fechado
		application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE);
		
		application.add( panel ); //add painel criado em DrawPanel ao frame
		application.setSize( 250, 250 );
		application.setVisible( true );			
	}
}


------------------------------------------------------------ Desenhando retângulos e ovais
public class Shapes extends JPanel {
	
	private int choice; 
	
	//Constructor
	public Shapes( int userChoice)
	{
		choice = userChoice;
	}
	
	//desenha uma castaca de formas a partir do canto esquerdo
	public void paintComponent( Graphics g )
	{
		super.paintComponent( g );
		
		for( int i=0; i < 10; i++)
		{
			switch( choice )
			{
				case 1:
					g.drawRect( 10 + i * 10, 10 + i * 10, 50 + i * 10, 50 + i * 10);
					break;
				case 2:
					g.drawOval( 10 + i * 10, 10 + i * 10, 50 + i * 10, 50 + i * 10);
					break;					
			}
		}
	}
}


import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class ShapesTest 
{
	public static void main( String[] args)
	{
		String input = JOptionPane.showInputDialog(
				"Digite 1 para retangulos\n" +	//simbolo para concatenar
				"Digite 2 para ovais.");
		
		int choice = Integer.parseInt( input ); //converte a entrada em inteiro
		
		Shapes panel = new Shapes( choice );
		
		JFrame application = new JFrame();
		
		application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		application.add( panel );
		application.setSize( 300, 300 );
		application.setVisible( true );			
	}

}


------------------------------------------------------------ Desenhando o rosto de um boneco sorrindo
//Vamos desenhar um rosto de um bonequinho sorrindo

//Arquivo DrawSmiley.java
import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawSmiley extends JPanel
{
	public void paintComponent( Graphics g )
	{
		super.paintComponent(g);
		
		//Desenha o rosto
		g.setColor( Color.YELLOW); //BLACK BLUE CYAN DARK_GRAY GRAY GREEN LIGHT_GRAY MAGENTA ORANGE PINK RED WHITE YELLOW
		g.fillOval( 10, 10, 200, 200 );
		
		//Desenha os olhos
		g.setColor( Color.BLACK );
		g.fillOval( 55, 65, 30, 30); //xesquerda, yCima, xdireita, yBaixo
		g.fillOval( 135, 65, 30, 30);
		
		//Desenha a boca
		g.fillOval( 50, 110, 120, 60); 
		

		//Retoca a boca para criar um sorriso
		g.setColor( Color.YELLOW );
		g.fillRect( 50, 110, 120, 30);
		g.fillOval( 50, 120, 120, 40);
		
	}
}


//Arquivo DrawSmileyTest.java
import javax.swing.JFrame;

public class DrawSmileyTest 
{
	public static void main( String[] args )
	{
		DrawSmiley panel = new DrawSmiley();
		JFrame application = new JFrame();
		
		application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		application.add( panel );
		application.setSize(230, 250);
		application.setVisible(true);
		
		
	}

}


------------------------------------------------------------ Utilizando objetos com imagens gráficas
import java.awt.Color;
import java.awt.Graphics;

public class MyLine 
{
	private int x1, y1, x2, y2; // Coordenadas extremidades reta
	private Color myColor;
	
	// Construtor
	public MyLine( int x1, int y1, int x2, int y2, Color color )
	{
		this.x1 = x1;
		this.y1 = y1;
		this.x2 = x2;
		this.y2 = y2;
		this.myColor = color; 
	}
	
	// Desenha a linha na cor especificada
	public void draw( Graphics g )
	{
		g.setColor( myColor );
		g.drawLine( x1, y1, x2, y2);
	}

}




import java.awt.Color;
import java.awt.Graphics;
import java.util.Random;
import javax.swing.JPanel;

public class DrawPanel extends JPanel
{
	private Random randomNumbers = new Random();
	MyLine lines[]; // Array de linhas
	
	public DrawPanel()
	{
		setBackground( Color.WHITE );
		lines = new MyLine[ 5 + randomNumbers.nextInt(5) ];
		
		// Cria linhas
		for( int count = 0; count < lines.length; count++ )
		{
			// Gera coordenadas aleatórias
			int x1 = randomNumbers.nextInt( 300 );
			int y1 = randomNumbers.nextInt( 300 );
			int x2 = randomNumbers.nextInt( 300 );
			int y2 = randomNumbers.nextInt( 300 );
			
			// Gera cor aleatória
			Color color = new Color( randomNumbers.nextInt( 256 ), randomNumbers.nextInt( 256 ), randomNumbers.nextInt( 256 ) );
			
			// Adiciona linha à lista de linhas a ser exibida
			lines[count ] = new MyLine( x1, y1, x2, y2, color );			
		}
	}
	
	public void paintComponent( Graphics g )
	{
		super.paintComponent( g );
		
		for( MyLine line : lines )
			line.draw( g);
	}

}



import javax.swing.JFrame;

public class TestDraw 
{
	public static void main( String[] args )
	{
		DrawPanel panel = new DrawPanel();
		JFrame application = new JFrame();
		
		application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		application.add( panel );
		application.setSize( 300, 300 );
		application.setVisible( true );		
	}
}


------------------------------------------------------------ Inserindo rótulos de texto e imagens com o JLabel

import java.awt.BorderLayout;
import javax.swing.ImageIcon;
import javax.swing.JLabel;
import javax.swing.JFrame;

public class LabelDemo 
{
	public static void main( String[] args )
	{
		// Cria um rótulo com texto simples
		JLabel northLabel = new JLabel( "Norte" );
		
		// Cria um ícone de uma imagem para colocarmos em um JLabel
		ImageIcon labelIcon = new ImageIcon( "inf.jpeg" ); // inf.jpeg deve estar na pasta raíz do projeto
		
		// Cria um rótulo com um ícone ao invés de texto
		JLabel centerLabel = new JLabel( labelIcon );
		
		// Cria outro rótulo com um Icon
		JLabel southLabel = new JLabel( labelIcon );
		
		// Configura o rótulo para exibir texto (bem como um ícone)
		southLabel.setText( "Sul" );
		
		// Cria um frame para armazenar os rótulos
		JFrame application = new JFrame();
		
		application.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		
		// Adiciona os rótulos ao frame: O segundo argumento especifica onde adicionar o rótulo no frame
		application.add( northLabel, BorderLayout.NORTH);
		application.add( centerLabel, BorderLayout.CENTER);
		application.add( southLabel,  BorderLayout.SOUTH );
		
		application.setSize( 300, 300 );
		application.setVisible( true );		
	}

}

------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------
------------------------------------------------------------









