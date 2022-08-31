-- SCRIPT fornecido
create database controledelivros;
use controledelivros;

create table autor(
id_autor int primary key,
nome varchar(50),
idade int,
valor_hr decimal(10,2)
);

create table editora(
id_editora int primary key,
nome varchar(50),
telefone varchar(12)
);

create table estilo(
id_estilo int primary key,
nome varchar(50)
);

create table livro(
id_livro int primary key,
titulo varchar(50),
id_estilo int,
id_autor int,
id_editora int,
valor decimal(10,2),
constraint fk_livro_estilo foreign key (id_estilo) references estilo(id_estilo),
constraint fk_livro_autor foreign key (id_autor) references autor(id_autor),
constraint fk_livro_editora foreign key (id_editora) references editora(id_editora)
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
(6,'João Abreu',25,5.3);

insert into estilo values
(1,'Comédia'),
(2,'Drama'),
(3,'Ficção'),
(4,'Suspense'),
(5,'Romance'),
(6,'Ação'),
(7,'Terror');

insert into livro values
(1,'Livro - 123',1,1,1,1.5),
(2,'Livro - 234',2,2,2,2.5),
(3,'Livro - 333',3,3,3,5.5),
(4,'Livro - 444',4,4,4,12.5),
(5,'Livro - 555',5,1,2,15.5),
(6,'Livro - 575',5,1,2,20.5),
(7,'Livro - 585',5,1,2,10.5),
(8,'Livro - 666',5,2,3,15.5),
(9,'Livro - 777',5,4,5,20.5);

-- ----------------------------------- Lista 006 -----------------------------------

-- 1)
SELECT nome FROM estilo ORDER BY nome ASC;

-- 2)
SELECT nome FROM autor ORDER BY nome DESC;

-- 3)
SELECT nome, telefone FROM editora;

-- 4)
SELECT nome FROM editora;

-- 5)
SELECT nome FROM estilo ORDER BY nome DESC;

-- 6)
SELECT id_estilo, nome FROM estilo WHERE id_estilo=3;

-- 7)
SELECT id_autor, nome FROM autor WHERE id_autor=1;

-- 8)
SELECT id_editora, nome FROM editora WHERE id_editora=4;

-- 9)
SELECT livro.titulo, editora.nome FROM livro, editora WHERE livro.id_editora = editora.id_editora;

-- 10)
SELECT livro.titulo, editora.nome FROM livro, editora WHERE (livro.id_editora = editora.id_editora) AND (editora.nome LIKE 'A%');

-- 11)
SELECT livro.titulo, editora.nome, estilo.nome, autor.nome FROM livro, editora, estilo, autor
	WHERE ((livro.id_editora = editora.id_editora) AND (livro.id_estilo = estilo.id_estilo) AND (livro.id_autor = autor.id_autor));

-- 12)
SELECT livro.titulo, editora.nome FROM livro, editora
	WHERE (livro.id_editora = editora.id_editora) AND (editora.telefone = '123345');
    
-- 13)
SELECT livro.titulo, autor.nome FROM livro, autor
	WHERE (livro.id_autor = autor.id_autor) AND (autor.idade=35);
    
-- 14)
SELECT livro.titulo, autor.nome, editora.nome FROM livro, autor, editora
	WHERE ((livro.id_autor = autor.id_autor) AND (livro.id_editora = editora.id_editora))
    AND (autor.nome = 'Dan Brown');
    
-- 15)
SELECT livro.titulo, autor.nome, editora.nome FROM livro, autor, editora
	WHERE ((livro.id_autor = autor.id_autor) AND (livro.id_editora = editora.id_editora))
    AND ((autor.nome = 'Dan Brown') AND (autor.idade = 35));
    
-- 16)
SELECT livro.titulo, autor.nome, editora.nome FROM livro, autor, editora
	WHERE ((livro.id_autor = autor.id_autor) AND (livro.id_editora = editora.id_editora))
    AND ((autor.nome = 'Dan Brown') OR (editora.telefone = '123345'));

-- 17)
SELECT livro.titulo, estilo.nome FROM livro, estilo
	WHERE (livro.id_estilo = estilo.id_estilo)
    AND (estilo.nome = 'Romance');
    
-- 18)
SELECT livro.titulo, estilo.nome FROM livro, estilo, editora
	WHERE ((livro.id_estilo = estilo.id_estilo) AND (livro.id_editora = editora.id_editora))
	AND (editora.nome='Globo');
    
-- 19)
SELECT livro.titulo AS "Livro", editora.nome AS "Editora", autor.nome AS "Autor" FROM livro, editora, autor
	WHERE (livro.id_editora = editora.id_editora) AND (livro.id_autor = autor.id_autor)
    ORDER BY editora.nome, autor.nome;