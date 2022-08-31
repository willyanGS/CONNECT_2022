create database controledelivrosFinal;
use controledelivrosFinal;

create table autor(
id_autor int primary key,
nome varchar(50) not null,
idade int,
valor_hr decimal(10,2) not null
);

create table editora(
id_editora int primary key,
nome varchar(50) not null,
telefone varchar(12)
);

create table estilo(
id_estilo int primary key,
nome varchar(50) not null
);

create table livro(
id_livro int primary key,
titulo varchar(50) not null,
id_editora int not null,
valor decimal(10,2),
constraint fk_livro_editora foreign key (id_editora) references editora(id_editora)
);

create table livro_autor(
	id_autor int not null,
    id_livro int not null,
    primary key(id_autor,id_livro),
    foreign key (id_autor) references autor(id_autor),
    foreign key (id_livro) references livro(id_livro)
);

create table livro_estilo(
	id_estilo int not null,
    id_livro int not null,
    primary key(id_estilo,id_livro),
    foreign key (id_livro) references livro(id_livro),
    foreign key (id_estilo) references estilo(id_estilo)
);

insert into editora values
(1,'Abril','12334567'),
(2,'Globo','123345'),
(3,'Saraiva','1233451212'),
(4,'BBBBB','123345'),
(5,'CCCC','12334521312'),
(6,'EEEE','12334521312'),
(7,'FFF','12334521312'),
(8,'GGGG','12334521312');

insert into autor values
(1,'Paulo Coelho',70,120.3),
(2,'Agatha Christie',50,120.3),
(3,'J K Rowling',70,120.3),
(4,'Dan Brown',35,120.3),
(5,'J R R Tolkien',70,120.3),
(6,'João Abreu',25,5.3),
(7,'Pedro Maria',35,20.3);

insert into estilo values
(1,'Comédia'),
(2,'Drama'),
(3,'Ficção'),
(4,'Suspense'),
(5,'Romance'),
(6,'Ação'),
(7,'Terror');

insert into livro values
(1,'Livro - 123',1,1.5),
(2,'Livro - 234',2,2.5),
(3,'Livro - 333',3,5.5),
(4,'Livro - 444',4,12.5),
(5,'Livro - 555',5,15.5),
(6,'Livro - 566',5,20.5),
(7,'Livro - 544',5,10.5),
(8,'Livro - 666',5,15.5),
(9,'Livro - 777',5,20.5);

insert into livro_autor values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(2,6),
(5,7),
(5,8),
(5,9);

insert into livro_estilo values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(5,6),
(2,7),
(2,8),
(2,9);

-- ---------------------------- Lista 007 ----------------------------
-- 01)
SELECT 	livro.titulo as 'Titulo', 
		editora.nome as 'Editora', 
        autor.nome as 'Autor',
        estilo.nome as 'Estilo'
	FROM livro
	INNER JOIN editora ON livro.id_editora = editora.id_editora
    INNER JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
    INNER JOIN autor ON livro_autor.id_autor = autor.id_autor
    INNER JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
    INNER JOIN estilo ON livro_estilo.id_estilo = estilo.id_estilo;
    
-- 02)
SELECT	livro.titulo as 'Titulo',
		editora.nome as 'Editora'
	FROM livro
	INNER JOIN editora ON livro.id_editora = editora.id_editora
    WHERE editora.telefone = '123345';
    
-- 03)
SELECT 	livro.titulo as 'Titulo',
		autor.nome as 'Autor'
	FROM livro
    INNER JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
    INNER JOIN autor ON autor.id_autor = livro_autor.id_autor
    WHERE autor.idade = 35;
    
-- 04)
SELECT 	LIV.titulo as 'Titulo',
		AUT.nome as 'Autor',
        EDI.nome as 'Editora'
	FROM livro LIV
    INNER JOIN editora EDI ON EDI.id_editora = LIV.id_editora
    INNER JOIN livro_autor LIV_AUT ON LIV.id_livro = LIV_AUT.id_livro
    INNER JOIN autor AUT ON AUT.id_autor = LIV_AUT.id_autor
    WHERE AUT.nome LIKE 'Dan Brown';
    
-- 05)
SELECT	livro.titulo as 'Titulo',
		autor.nome as 'Autor',
        editora.nome as 'Editora'
	FROM livro
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    INNER JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
    INNER JOIN autor ON autor.id_autor = livro_autor.id_autor
    WHERE autor.nome LIKE 'Dan %' AND autor.idade = 35;
    
-- 06)
SELECT	livro.titulo as 'Titulo',
		autor.nome as 'Autor',
        editora.nome as 'Editora'
	FROM livro
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    INNER JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
    INNER JOIN autor ON autor.id_autor = livro_autor.id_autor
    WHERE autor.nome LIKE 'Dan Brown' AND editora.telefone = '123345';
    
-- 07)
SELECT 	livro.titulo as 'Titulo',
		estilo.nome as 'Estilo'
	FROM livro
    INNER JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
    INNER JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
    WHERE estilo.nome LIKE 'Romance';
    
-- 08)
SELECT 	livro.titulo as 'Titulo',
		estilo.nome as 'Estilo'
	FROM livro
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    INNER JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
    INNER JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
    WHERE editora.nome LIKE 'Globo';
    
-- 09)
SELECT MAX(livro.valor) as 'Valor do livro (R$)'
	FROM livro;
    
SELECT 	livro.titulo as 'Titulo',
		livro.valor as 'Valor do livro (R$)'
	FROM livro
    WHERE livro.valor = (SELECT MAX(livro.valor) FROM livro);
    
-- 10)
SELECT MIN(livro.valor) as 'Valor do livro (R$)'
	FROM livro;
    
SELECT 	livro.titulo as 'Titulo',
		livro.valor as 'Valor do livro (R$)'
	FROM livro
    WHERE livro.valor = (SELECT MIN(livro.valor) FROM livro);
    
-- 11)
SELECT 	AVG(livro.valor) as 'Valor medio livros (R$)'
	FROM livro;

-- 12)
SELECT 	AVG(autor.valor_hr) as 'Valor medio autores (R$/h)'
	FROM autor;

-- 13)
SELECT 	COUNT(livro.id_livro) as 'Total de livros'
	FROM livro;
    
-- 14)
SELECT	editora.nome as 'Editora',
		COUNT(livro.id_editora) as 'Total de livros'
	FROM editora
	INNER JOIN livro ON editora.id_editora = livro.id_editora
    WHERE editora.id_editora = 2
    GROUP BY (editora.nome);
    
-- 15)
SELECT 	COUNT(livro_estilo.id_livro) as 'Total de livros'
	FROM livro_estilo
    WHERE id_estilo = 5;

SELECT	estilo.nome as 'Estilo',
		COUNT(livro_estilo.id_livro) as 'Total de livros'
	FROM estilo
    INNER JOIN livro_estilo ON estilo.id_estilo = livro_estilo.id_estilo
    WHERE estilo.id_estilo = 5
    GROUP BY (estilo.nome);
    
-- 16)
SELECT	livro.titulo as 'Titulo',
		editora.nome as 'Editora'
	FROM livro
    LEFT JOIN editora ON editora.id_editora = livro.id_editora;
    
-- 17)
SELECT 	livro.titulo as 'Titulo',
		editora.nome as 'Editora'
	FROM livro
    JOIN editora ON editora.id_editora = livro.id_editora
    WHERE editora.nome LIKE 'A%';
    
-- 18)
SELECT 	autor.nome as 'Autor',
		livro.titulo as 'Titulo'	-- campo selecionado apenas para conferencia
	FROM autor
    LEFT JOIN livro_autor ON autor.id_autor = livro_autor.id_autor
    LEFT JOIN livro ON livro.id_livro = livro_autor.id_livro
    WHERE livro_autor.id_livro IS NULL;
    
SELECT 	autor.nome as 'Autor' FROM autor	-- usando subselect
    WHERE autor.id_autor NOT IN (SELECT livro_autor.id_autor FROM livro_autor);
    
-- 19)
SELECT	editora.nome as 'Editora',
		livro.titulo as 'Titulo' 	-- campo selecionao apenas para conferencia
	FROM editora
    LEFT JOIN livro ON editora.id_editora = livro.id_editora
    WHERE livro.id_livro IS NULL;
    
SELECT	editora.nome as 'Editora' FROM editora	-- usando subselect
	WHERE editora.id_editora NOT IN (SELECT livro.id_editora FROM livro);
    
-- 20)
SELECT	estilo.nome as 'Estilo'
	FROM estilo
    LEFT JOIN livro_estilo ON estilo.id_estilo = livro_estilo.id_estilo
    WHERE livro_estilo.id_livro IS NULL;
    
SELECT nome FROM estilo 	-- usando subselect
	WHERE id_estilo NOT IN (SELECT id_estilo FROM livro_estilo);

-- 21)
SELECT	autor.nome as 'Autor',
		COUNT(livro_autor.id_livro) as 'Qtd de livros'
	FROM autor
    LEFT JOIN livro_autor ON autor.id_autor = livro_autor.id_autor
    GROUP BY autor.nome;
    
-- 22)
SELECT 	editora.nome as 'Editora',
		COUNT(livro.id_livro) as 'Qtd de livros'
	FROM editora
    LEFT JOIN livro ON editora.id_editora = livro.id_editora
    GROUP BY editora.nome;

-- 23)
SELECT 	estilo.nome as 'Estilo',
		COUNT(livro_estilo.id_livro) as 'Qtd de livros'
	FROM estilo
    LEFT JOIN livro_estilo ON estilo.id_estilo = livro_estilo.id_estilo
    GROUP BY estilo.nome;
    
-- 24)
SELECT 	editora.nome as 'Editora',
		COUNT(livro.id_livro) as 'Qtd de livros'
	FROM editora
    LEFT JOIN livro ON editora.id_editora = livro.id_editora
    WHERE editora.nome LIKE 'CCCC'
    GROUP BY editora.nome;

-- 25)
SELECT	autor.nome as 'Autor',
		COUNT(livro_autor.id_livro) as 'Qtd de livros'
	FROM autor
    LEFT JOIN livro_autor ON autor.id_autor = livro_autor.id_autor
    WHERE autor.nome LIKE 'J R R%'
    GROUP BY autor.nome;