# Álgebra Linear com Python

Aplicações computacionais dos tópicos estudados em Álgebra Linear, com exemplos e exercícios em Python.

[Visite o site do projeto](https://algebralinearufcg.github.io).

![Apresentação: Álgebra Linear com Python](https://user-images.githubusercontent.com/58775072/86921345-5eedeb00-c101-11ea-863c-b8bd4bb2855a.png)

## Conteúdos

Cada aula tem uma pasta própria em `notebooks/`. Os arquivos auxiliares usados por uma aula ficam junto do notebook correspondente.

| Nº | Tópico | Notebook |
|---:|---|---|
| 01 | Aprendendo Python | [Abrir](notebooks/01-aprendendo-python/01-aprendendo-python.ipynb) |
| 02 | Aprendendo NumPy | [Abrir](notebooks/02-aprendendo-numpy/02-aprendendo-numpy.ipynb) |
| 03 | Aprendendo Matplotlib | [Abrir](notebooks/03-aprendendo-matplotlib/03-aprendendo-matplotlib.ipynb) |
| 04 | Operações matriciais | [Abrir](notebooks/04-operacoes-matriciais/04-operacoes-matriciais.ipynb) |
| 05 | Aplicação de matrizes | [Abrir](notebooks/05-aplicacao-de-matrizes/05-aplicacao-de-matrizes.ipynb) |
| 06 | Matriz transposta | [Abrir](notebooks/06-matriz-transposta/06-matriz-transposta.ipynb) |
| 07 | Matriz inversa | [Abrir](notebooks/07-matriz-inversa/07-matriz-inversa.ipynb) |
| 08 | Determinante | [Abrir](notebooks/08-determinante/08-determinante.ipynb) |
| 09 | Sistemas lineares | [Abrir](notebooks/09-sistemas-lineares/09-sistemas-lineares.ipynb) |
| 10 | Transformações lineares | [Abrir](notebooks/10-transformacoes-lineares/10-transformacoes-lineares.ipynb) |
| 11 | Estudo de sistemas de equações | [Abrir](notebooks/11-estudo-de-sistemas-de-equacoes/11-estudo-de-sistemas-de-equacoes.ipynb) |
| 12 | Autovalores e autovetores | [Abrir](notebooks/12-autovalores-e-autovetores/12-autovalores-e-autovetores.ipynb) |
| 13 | Autovalores em Ecologia | [Abrir](notebooks/13-autovalores-em-ecologia/13-autovalores-em-ecologia.ipynb) |
| 14 | Transformando um círculo em uma elipse | [Abrir](notebooks/14-transformando-um-circulo-em-uma-elipse/14-transformando-um-circulo-em-uma-elipse.ipynb) |
| 15 | Geometria das transformações lineares | [Abrir](notebooks/15-geometria-das-transformacoes-lineares/15-geometria-das-transformacoes-lineares.ipynb) |
| 16 | Construção de curvas por pontos especificados | [Abrir](notebooks/16-construcao-de-curvas-por-pontos-especificados/16-construcao-de-curvas-por-pontos-especificados.ipynb) |
| 17 | Criptografia | [Abrir](notebooks/17-criptografia/17-criptografia.ipynb) |
| 18 | Teoria dos grafos | [Abrir](notebooks/18-teoria-dos-grafos/18-teoria-dos-grafos.ipynb) |
| 19 | Cadeias de Markov | [Abrir](notebooks/19-cadeias-de-markov/19-cadeias-de-markov.ipynb) |
| 20 | Google PageRank | [Abrir](notebooks/20-google-page-rank/20-google-page-rank.ipynb) |
| 21 | Problemas de mínimos quadráticos | [Abrir](notebooks/21-problemas-de-minimos-quadraticos/21-problemas-de-minimos-quadraticos.ipynb) |
| 22 | Processamento de imagens digitais | [Abrir](notebooks/22-processamento-de-imagens-digitais/22-processamento-de-imagens-digitais.ipynb) |

## Como começar

É necessário ter Python instalado. Para instalar as bibliotecas do projeto e iniciar o JupyterLab:

```bash
python -m venv .venv
```

Ative o ambiente virtual:

```bash
# macOS ou Linux
source .venv/bin/activate
```

```powershell
# Windows PowerShell
.venv\Scripts\Activate.ps1
```

Instale as dependências e inicie o JupyterLab:

```bash
python -m pip install -r requirements.txt
jupyter lab
```

No JupyterLab, abra uma aula em `notebooks/` e execute as células na ordem apresentada. Mantenha os arquivos auxiliares da pasta da aula junto do notebook.

## Organização

```text
.
├── notebooks/       # aulas numeradas e seus recursos locais
├── requirements.txt # dependências Python
├── LICENSE
└── README.md
```

Os números das pastas definem a ordem sugerida de estudo. Os nomes das aulas e dos notebooks usam minúsculas e hífens; os recursos auxiliares permanecem junto da aula que os utiliza.

## Outros materiais

- [Minicurso de Git e GitHub](https://algebralinearufcg.github.io/listadegithub.html)
- [Google Colab](https://colab.research.google.com/)
- [nbviewer](https://nbviewer.org/)
