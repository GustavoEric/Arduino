const char pagina[] = R"=====<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    .Aparelho {
    /* display: inline-grid; */
    border: solid;
    width: 400px;
    }
    
    #ligado{

    }
.Aparelhos {
    display: flex;
    flex-wrap: wrap;
}
img {
    width: 7%;
    display: block;
}
#ligado {
    height: 9vw;
    width: 30%;
    background-image: url(imagens/ligado.jpg);
    background-repeat: no-repeat, no-repeat;
    background-position: center;
    background-size: cover;
    }
    #desligado {
    height: 9vw;
    width: 30%;
    background-image: url(imagens/desligado.png);
    background-repeat: no-repeat, no-repeat;
    background-position: center;
    background-size: cover;
    }
</style>
<body>
    <div class="Aparelhos">
    <div class="Aparelho">
        <h1>Quarto</h1>
        <div id="desligado"></div>
        <button>Ligar</button>
        <button>Desligar</button>
    </div>
    <div class="Aparelho">
        <h1>Cozinha</h1>
        <div id="desligado"></div>
        <a href="/Led=ON">Ligar</a>
        <a href="/Led=OFF">Desligar</a>
        <button>Desligar</button>
    </div>
</div>
</body>
</html>=====";