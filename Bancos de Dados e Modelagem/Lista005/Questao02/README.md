QUESTÃO 02.
Crie um Banco de Dados com nome ELEIÇÃO. A seguir crie as tabelas neste Banco de Dados
conforme a relação abaixo:
OBS: DEFINIR AS CHAVES PRIMÁRIAS DE CADA TABELA E AS CHAVES
ESTRANGEIRAS NOS RELACIONAMENTOS.


> Cargo:
Codigo_Cargo: inteiro, único e não nulo
Nome_Cargo: varchar (30), único e não nulo. Checar se é diferente de “Prefeito” e “Vereador”
Salario: float, não nulo e valor padrão 17000,00
Numero_Vagas: inteiro, único e não nulo


> Candidato:
Numero_Candidato: inteiro, único e não nulo
Nome: varchar (40), único e não nulo
Codigo_Cargo: inteiro e não nulo
Codigo_Partido inteiro e não nulo


> Partido:
Codigo_Partido: inteiro, único e não nulo
Sigla: char (5), único e não nulo
Nome: varchar (40), único e não nulo
Numero: inteiro, único e não nulo


> Eleitor:
Titulo_Eleitor: varchar (30), único e não nulo
Zona_Eleitoral: char (5) e não nulo
Sessao_Eleitoral: char (5) e não nulo
Nome: varchar (40) e não nulo


> Voto:
Titulo_Eleitor: varchar (30), único e não nulo
Numero_Candidato: inteiro e não nulo