-- Lista 004 / Atividade 2

CREATE DATABASE escola;
USE escola;

CREATE TABLE professor (
	professor_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    formacao VARCHAR(100)
);

CREATE TABLE turma (
	turma_id INT PRIMARY KEY AUTO_INCREMENT,
    serie TINYINT NOT NULL,
    sigla CHAR(1) NOT NULL,
    periodo VARCHAR(12) NOT NULL
);

CREATE TABLE aluno (
	aluno_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    turma_fk INT NOT NULL,
    CONSTRAINT fk_aluno_turma FOREIGN KEY (turma_fk)
		REFERENCES turma (turma_id)
);

CREATE TABLE aula (
	aula_id INT PRIMARY KEY AUTO_INCREMENT,
    dia_semana CHAR(3) NOT NULL, -- siglas (seg, ter, qua, qui, sex)
	horario TIME NOT NULL,
    disciplina VARCHAR(20) NOT NULL,
    turma_fk INT NOT NULL,
    CONSTRAINT fk_aula_turma FOREIGN KEY (turma_fk)
		REFERENCES turma (turma_id),
    professor_fk INT NOT NULL,
    CONSTRAINT fk_aula_professor FOREIGN KEY (professor_fk)
		REFERENCES professor (professor_id)
);

-- --------------------------------------------------------------- Inserir pelo menos 2 dados por tabela
INSERT INTO professor
	VALUES 	(1, 'Maria da Silva', 19700529, 'Letras - Portugues'),
			(2, 'Joao de Oliveira', 19650101, 'Quimica');
SELECT * FROM professor;

INSERT INTO turma
	VALUES 	(10, 5, 'A', 'matutino'),
			(11, 5, 'B', 'vespertino'),
			(12, 6, 'A', 'matutino');
INSERT INTO turma (serie, sigla, periodo)
	VALUES (7, 'A', 'vespertino');
SELECT * FROM turma;

INSERT INTO aluno (nome, data_nascimento, turma_fk)
	VALUES 	('Joaozinho', 20110630, 10),
			('Mariazinha', 20110316, 11),
			('Pedrinho', 20100811, 12),
			('Joaninha', 20101010, 12);
SELECT * FROM aluno;

INSERT INTO aula
	VALUES 	(100, 'seg', 0800, 'Portugues', 10, 1),
			(101, 'seg', 0900, 'Portugues', 10, 1),
            (102, 'ter', 1100, 'Matematica', 10, 2),
            (103, 'seg', 0800, 'Matematica', 11, 2);
SELECT * FROM aula;

-- --------------------------------------------------------------- Alterar 1 dado por tabela
UPDATE professor
	SET formacao = 'Portugues'
		WHERE professor_id = 1;
SELECT * FROM professor;

UPDATE turma
	SET periodo = 'matutino'
		WHERE serie=7 AND sigla='A';
SELECT * FROM turma;

UPDATE aluno
	SET data_nascimento = 20101001
		WHERE aluno_id = 4;
SELECT * FROM aluno;

UPDATE aula
	SET horario=080000
		WHERE horario=0800;
UPDATE aula
	SET horario=090000
		WHERE aula_id=101;
UPDATE aula
	SET horario=110000
		WHERE horario=1100;
SELECT * FROM aula;

-- --------------------------------------------------------------- Deletar 1 dado por tabela
DELETE FROM aula
	WHERE aula_id = 103 OR professor_fk = 2;
SELECT * FROM aula;

DELETE FROM aluno
	WHERE aluno_id=2;
SELECT * FROM aluno;

DELETE FROM turma
	WHERE turma_id=11;
SELECT * FROM turma;

DELETE FROM professor
	WHERE professor_id=2;
SELECT * FROM professor;