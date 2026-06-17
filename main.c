#include <stdio.h>
#include <string.h>

int main()
{
    char nome_aluno[20][20];
    float nota1_aluno[10];
    float nota2_aluno[10];
    int i;
    int qnt_alunos;
    float media_aluno[10];
    float media_geral = 0;
    float maior_media = 0;
    int qnt_aprovados = 0;
    int qnt_recuperacao = 0;
    int qnt_reprovados = 0;

    printf("Cadastros de alunos!\n");
    printf("Quantos alunos serão cadastrados?(max.10):");
    scanf(" %d", &qnt_alunos);
    if (qnt_alunos > 10 || qnt_alunos <= 0)
    {
        printf("Quantidade invalida!");
    }
    else
    {
        for (i = 0; i < qnt_alunos; i++)
        {
            printf("Nome do aluno:");
            scanf("%s", nome_aluno[i]);
            printf("Primeira nota do aluno:");
            scanf("%f", &nota1_aluno[i]);
            printf("Segunda nota do aluno:");
            scanf("%f", &nota2_aluno[i]);
            media_aluno[i] = (nota1_aluno[i] + nota2_aluno[i]) / 2;
            media_geral += media_aluno[i];
            if (maior_media < media_aluno[i])
            {
                maior_media = media_aluno[i];
            }
        }
        media_geral = (media_geral / qnt_alunos);

        for (i = 0; i < qnt_alunos; i++)
        {
            printf("\n=========================\n");
            printf("Aluno:%s\n", nome_aluno[i]);
            printf("Primeira nota: %f\n", nota1_aluno[i]);
            printf("Segunda nota: %f\n", nota2_aluno[i]);
            printf("Media do aluno:%f\n", media_aluno[i]);
            if (media_aluno[i] >= 7)
            {
                printf("Aluno aprovado!\n");
                qnt_aprovados++;
            }
            else if (media_aluno[i] < 7 && media_aluno[i] >= 5)
            {
                printf("Aluno em Recuperação.\n");
                qnt_recuperacao++;
            }
            else if (media_aluno[i] < 5)
            {
                printf("Aluno reprovado.\n");
                qnt_reprovados++;
            }
            printf("\n=========================\n");
        }
        printf("A media geral da turma foi: %.2f\n", media_geral);
        printf("A maior media da turma foi: %.2f\n", maior_media);
        printf("Quantidade de Aprovados: %d\n", qnt_aprovados);
        printf("Quantidade de Recuperação: %d\n", qnt_recuperacao);
        printf("Quantidade de Reprovados: %d\n", qnt_reprovados);
    }
    return 0;
}