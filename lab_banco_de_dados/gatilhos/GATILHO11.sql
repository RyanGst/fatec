-- 11. Um livro deve ter a quantidade de exemplares superior à 30 para ser incluído na bibliografia básica de uma disciplina.


CREATE OR REPLACE FUNCTION checaMinimoLivros()
  RETURNS trigger AS
$$
DECLARE
    quantidadeLivros smallint;
BEGIN
    SELECT qtexemplares FROM bibliografia INNER JOIN livros l on bibliografia.livroid = l.idlivro WHERE idbibliografia = NEW.idbibliografia into quantidadeLivros;
    if quantidadeLivros < 30 THEN
    RAISE EXCEPTION 'UM LIVRO NÃO PODE SER ADICIONADO A BIBLIOFRAFIA SE NÃO TIVER NO MÍNIMO 30 EXEMPLARES';
    END IF;
    RETURN NEW;
END
$$
LANGUAGE 'plpgsql';

CREATE TRIGGER minimoLivros
    BEFORE INSERT
    ON bibliografia
    FOR EACH ROW
EXECUTE PROCEDURE checaMinimoLivros();


-- Livro de id 40 não tem 30 exemplares
INSERT INTO bibliografia (idbibliografia, disciplinaid, livroid, aotipo, dtadocaodolivro, dtcadbibliografia)
VALUES (55, 12, 40, 'B', '2022-06-07', '2022-06-01');