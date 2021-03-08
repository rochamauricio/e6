-- exemplo legal de criação de tabela
CREATE TABLE funcionarios(
  id INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(80) NOT NULL,
  salario DECIMAL(10,2) NOT NULL,
  nascimento DATE NOT NULL,
  PRIMARY KEY (id)
) COLLATE=utf8_unicode_ci;

-- inserindo valores
INSERT INTO funcionarios(nome, email, salario, nascimento) VALUES
('Ana', 'ana@ana.com', 1400.00, '1993-10-16'),
('Sabrina', 'sabrina@sabrina.com', 1800.57, '1990-12-03'),
('Paulo', 'paulo@paulo.com', 1750.43, '1991-06-25');
