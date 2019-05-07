#pragma once

/**
 * Representa uma peça do tabuleiro.
 */
class Peça {
private:
    bool branco;
    bool capturada;
public:
    /**
     * Cria uma nova peça
     */
    Peça(bool isBranco);

    /**
     * Desenha a peça.
     */
    virtual void desenha();
    
    /**
     * Checa a movimentação da peça pelo tabuleiro,
     * retornando verdadeiro se a movimentação é válida.
     */
    virtual bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);

    /**
     * Retorna se a peça é branca ou não
     */
    bool isBranco();

    /**
     * Retorna se a peça foi capturada
     */
    bool isCapturada();

    /**
     * Marca se a peça foi capturada ou não
     */
    void setCapturada(bool v);
};
