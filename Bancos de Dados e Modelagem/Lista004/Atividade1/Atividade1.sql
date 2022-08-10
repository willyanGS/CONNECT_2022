-- Lista 004 / Atividade 1

CREATE DATABASE controle_livros;
USE controle_livros;

CREATE TABLE editoras (
	editora_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(200) NOT NULL,
    telefone VARCHAR(20),
    cnpj CHAR(14) UNIQUE
);

CREATE TABLE livros (
	livro_id INT PRIMARY KEY AUTO_INCREMENT,
    titulo VARCHAR(200) NOT NULL,
    ano_publicacao YEAR NOT NULL,
    isbn CHAR(13) UNIQUE,
    editora_fk INT NOT NULL,
    CONSTRAINT fk_editora_livro FOREIGN KEY (editora_fk)
		REFERENCES editoras (editora_id)
);

CREATE TABLE autores (
	autor_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(200) NOT NULL,
    telefone VARCHAR(20),
    cpf CHAR(11) UNIQUE
);

CREATE TABLE categorias (
	categoria_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR (100) NOT NULL
);

-- associativa n:n (livros_autores)
CREATE TABLE livros_autores (
	livro_fk INT NOT NULL,
    CONSTRAINT fk_livros_autores FOREIGN KEY (livro_fk)
		REFERENCES livros (livro_id),
    autor_fk INT NOT NULL,
    CONSTRAINT fk_autores_livros FOREIGN KEY (autor_fk)
		REFERENCES autores (autor_id),
    PRIMARY KEY (livro_fk, autor_fk)
);

-- associativa n:n (livros_categorias)
CREATE TABLE livros_categorias (
	livro_fk INT NOT NULL,
    CONSTRAINT fk_livros_categorias FOREIGN KEY (livro_fk)
		REFERENCES livros (livro_id),
    categoria_fk INT NOT NULL,
    CONSTRAINT fk_categorias_livros FOREIGN KEY (categoria_fk)
		REFERENCES categorias (categoria_id),
    PRIMARY KEY (livro_fk, categoria_fk)
);

-- --------------------------------------------------------------- Inserir 2 dados por tabela
-- Editoras:
INSERT INTO editoras (nome, telefone, cnpj)
	VALUES ('Editora 1', '+5545998887766', '12345671234567'),
		   ('Editora 2', '+5511987651234', '76543217654321');
SELECT * FROM editoras;

-- Livros:
INSERT INTO livros
	VALUES (1, 'Livro Nome 1', 2007, '0010020030040', 2),
		   (2, 'Livro Nome 2', 2012, '9919929939949', 1);
SELECT * FROM livros;

-- Autores:
INSERT INTO autores (nome, telefone, cpf)
	VALUES ('Nome Autor 1', '+5545998881234', '00100200311'),
		   ('Nome Autor 2', '+5545998885678', '00400500611');
SELECT * FROM autores;

-- Categorias:
INSERT INTO categorias
	VALUES (10, 'Categoria numero 1'),
		   (11, 'Categoria numero 2');
SELECT * FROM categorias;

-- Livros_Autores:
INSERT INTO livros_autores
	VALUES (1, 2),
		   (2, 2);
SELECT * FROM livros_autores;

-- Livros_Categorias:
INSERT INTO livros_categorias
	VALUES (1, 10),
		   (1, 11),
		   (2, 10);
SELECT * FROM livros_categorias;

-- --------------------------------------------------------------- Alterar 1 elemento por tabela
-- Editoras:
UPDATE editoras
	SET cnpj = 12345671234568
		WHERE cnpj = 12345671234567;
SELECT * FROM editoras;

-- Livros:
UPDATE livros
	SET ano_publicacao = ano_publicacao+1
		WHERE ano_publicacao>2010;
SELECT * FROM livros;

-- Autores:
UPDATE autores
	SET nome = 'Nome Autor 3'
		WHERE autor_id = 2;
SELECT * FROM autores;

-- Categorias
UPDATE categorias
	SET nome = 'Categoria num 1'
		WHERE categoria_id = 10;        
UPDATE categorias
	SET nome = 'Categoria num 2'
		WHERE categoria_id = 11;
SELECT * FROM categorias;

-- Livros_Autores:
UPDATE livros_autores
	SET autor_fk = 1
		WHERE livro_fk = 1;
SELECT * FROM livros_autores;

-- Livros_Categorias:
INSERT INTO categorias
	VALUES (13, 'Categoria numero 3');    
UPDATE livros_categorias
	SET categoria_fk=13
		WHERE livro_fk=1 AND categoria_fk=11;
SELECT * FROM livros_categorias;

-- --------------------------------------------------------------- Deletar 1 elemento por tabela
-- Livros_Categorias:
DELETE FROM livros_categorias
	WHERE livro_fk = 2;
SELECT * FROM livros_categorias;

-- Categorias:
DELETE FROM categorias
	WHERE categoria_id = 11;
SELECT * FROM categorias;

-- Livros_Autores:
DELETE FROM livros_autores
	WHERE livro_fk = 2;
SELECT * FROM livros_autores;

-- Autores:
DELETE FROM autores
	WHERE cpf = '00400500611';
SELECT * FROM autores;

-- Livros
DELETE FROM livros
	WHERE livro_id = 2;
SELECT * FROM livros;

-- Editoras
DELETE FROM editoras
	WHERE editora_id =1;    
SELECT * FROM editoras;