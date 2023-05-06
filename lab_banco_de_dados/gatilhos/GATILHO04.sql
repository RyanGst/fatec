-- assumindo dthoraconsulta como início e dthorarealizada como horário de conclusão
CREATE OR REPLACE FUNCTION duracaoMinimaConsulta()
  RETURNS trigger AS
$$
DECLARE
    horaMarcada timestamp;
BEGIN
    SELECT dthoraconsulta into horaMarcada FROM consultas WHERE consultas.idconsulta = NEW.idconsulta;
    if new.dthorarealizada - horaMarcada < Interval '20' minute THEN
    RAISE EXCEPTION 'A CONSULTA NÃO PODE DEMORAR MENOS DE 20 MINUTOS';
    END IF;

    RETURN NEW;
END
$$
LANGUAGE 'plpgsql';


DROP TRIGGER  duracaoMinimaConsulta on consultas;

CREATE TRIGGER duracaoMinimaConsulta
    BEFORE UPDATE
    ON consultas
    FOR EACH ROW
EXECUTE PROCEDURE duracaoMinimaConsulta();

UPDATE consultas
    SET dthorarealizada = '2016-03-21 08:45:00.000000'
WHERE idconsulta = 12;