-- Lista 004 / Atividade 3

CREATE DATABASE escola2;
USE escola2;

CREATE TABLE instrutores (
  id INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  valor_hora INTEGER UNSIGNED NULL,
  certificados VARCHAR(255) NULL,
  PRIMARY KEY(id)
);

CREATE TABLE cursos (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  requisito VARCHAR(255) NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  preco DOUBLE UNSIGNED NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE alunos (
  id INT NOT NULL AUTO_INCREMENT,
  cpf CHAR(11) NOT NULL,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  fone CHAR(14) NOT NULL,
  data_nascimento DATE NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE turmas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  instrutores_id INT NOT NULL,
  cursos_id INTEGER UNSIGNED NOT NULL,
  data_inicio DATE NULL,
  data_final DATE NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  PRIMARY KEY(id),
  INDEX turmas_FKIndex1(cursos_id),
  INDEX turmas_FKIndex2(instrutores_id),
  CONSTRAINT CURSO_TURMA_FK FOREIGN KEY(cursos_id)
    REFERENCES cursos(id),
  CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY(instrutores_id)
    REFERENCES instrutores(id)
);
 
CREATE TABLE matriculas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  turmas_id INTEGER UNSIGNED NOT NULL,
  alunos_id INT NOT NULL,
  data_matricula DATE NULL,
  PRIMARY KEY(id),
   CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY(alunos_id)
    REFERENCES alunos(id),
  CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY(turmas_id)
    REFERENCES turmas(id)
);

-- ----------------------------------------- 1) Fazer cinco INSERT INTO em cada tabela
INSERT INTO instrutores (nome, email, valor_hora, certificados)
	VALUES  ('Ana Sobrenome', 'ana@email.com', 12, 'Pos-graduacao'),
			('Bruno Sobrenome', 'bruno@email.com', 11, 'Graduacao'),
            ('Carlos Sobrenome', 'carlos@email.com', 16, 'Mestrado'),
            ('Diogo Sobrenome', 'diogo@email.com', 9, 'Tecnico'),
            ('Elaine Sobrenome', 'elaine@email.com', 22, 'Doutorado');
SELECT * FROM instrutores;

INSERT INTO cursos (nome, requisito, carga_horaria, preco)
	VALUES 	('Matematica basica', 'Ensino medio', 60, 200.0),
			('Matematica avancada', 'Ensino superior em exatas', 100, 590.90),
            ('Informatica office', 'Ensino fundamental', 40, 150.0),
            ('Informatica avancada', 'Ensino tecnico ou Graduacao em TI', 200, 890.50),
            ('Portugues redacao', 'Ensino fundamental', 60, 220.0);
SELECT * FROM cursos;

INSERT INTO alunos (cpf, nome, email, fone, data_nascimento)
	VALUES	('11111111111', 'Francieli Sobrenome', 'francieli@aluno.com', '+5545999111111', 19950506),
			('22222222222', 'Gustavo Sobrenome', 'gustavo@aluno.com', '+5545999222222', 19961125),
            ('33333333333', 'Helen Sobrenome', 'helen@aluno.com', '+5545999333333', 19900114),
            ('44444444444', 'Igor Sobrenome', 'igor@aluno.com', '+5545999444444', 19921212),
            ('55555555555', 'Jane Sobrenome', 'jane@aluno.com', '+5545999555555', 19990629);
SELECT * FROM alunos;

INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria)
	VALUES 	(3, 4, 20210701, 20211130, 200),
			(1, 3, 20210715, 20211015, 40),
            (2, 5, 20210808, 20211010, 60),
            (1, 1, 20220322, 20220603, 60),
            (3, 4, 20220628, 20221015, 200);
SELECT * FROM turmas;

INSERT INTO matriculas (turmas_id, alunos_id, data_matricula)
	VALUES 	(1, 2, 20210620),
			(1, 4, 20210625),
            (2, 1, 20210712),
            (4, 5, 20220210),
            (5, 1, 20220617);
SELECT * FROM matriculas;

-- ----------------------------------------- 2) Fazer um UPDATE na tabela instrutores
UPDATE instrutores
	SET nome = 'Eliane Sobrenome'
		WHERE id = 5;
SELECT * FROM instrutores;

-- ----------------------------------------- 3) Fazer um UPDATE na tabela instrutores
UPDATE instrutores
	SET email = 'eliane@email.com'
		WHERE nome = 'Eliane Sobrenome';
SELECT * FROM instrutores;

-- ----------------------------------------- 4) Fazer dois UPDATE na tabela cursos
UPDATE cursos
	SET nome = 'Informatica basica'
		WHERE id = 3;
        
UPDATE cursos
	SET preco = 120.0
		WHERE nome = 'Informatica basica';
SELECT * FROM cursos;

-- ----------------------------------------- 5) Fazer dois UPDATE na tabela turmas
UPDATE turmas
	SET instrutores_id = 5
		WHERE id = 5;
UPDATE turmas
	SET instrutores_id = 2
		WHERE id = 4;
SELECT * FROM turmas;

-- ----------------------------------------- 6) Fazer dois DELETE por tabela
DELETE FROM matriculas
	WHERE id = 1 OR id = 4;
SELECT * FROM matriculas;

DELETE FROM turmas
	WHERE instrutores_id = 2;
SELECT * FROM turmas;

DELETE FROM alunos
	WHERE cpf = '22222222222';
DELETE FROM alunos
	WHERE id = 5;
SELECT * FROM alunos;

DELETE FROM cursos
	WHERE id = 1;
DELETE FROM cursos
	WHERE id = 2;
SELECT * FROM cursos;

DELETE FROM instrutores
	WHERE id = 2;
DELETE FROM instrutores
	WHERE id = 4;
SELECT * FROM instrutores;