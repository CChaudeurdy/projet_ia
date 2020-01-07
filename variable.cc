#include "variable.hh"
#include <vector>

Variable::Variable(){}

int Variable::estimationSommeMax(std::vector<std::string> listeMots, std::string motResultat){
    int sizeMotresultat =motResultat.size();
    int differenceMin=0;
    for(auto const elem: listeMots){
       int diff = sizeMotresultat-elem.size();
       if (diff<0){
           return -1;
       }
       if()
    }
    
}

// function check for correct solution
/*
int Variable::check(std::vector<variable>, const int count, string s1,
                            string s2, string s3)
{
    int val1 = 0, val2 = 0, val3 = 0, m = 1, j, i;

    // calculate number corresponding to first string
    for (i = s1.length() - 1; i >= 0; i--)
    {
        char ch = s1[i];
        for (j = 0; j < count; j++)
            if (nodeArr[j].c == ch)
                break;

        val1 += m * nodeArr[j].v;
        m *= 10;
    }
    m = 1;

    // calculate number corresponding to second string
    for (i = s2.length() - 1; i >= 0; i--)
    {
        char ch = s2[i];
        for (j = 0; j < count; j++)
            if (nodeArr[j].c == ch)
                break;

        val2 += m * nodeArr[j].v;
        m *= 10;
    }
    m = 1;

    // calculate number corresponding to third string
    for (i = s3.length() - 1; i >= 0; i--)
    {
        char ch = s3[i];
        for (j = 0; j < count; j++)
            if (nodeArr[j].c == ch)
                break;

        val3 += m * nodeArr[j].v;
        m *= 10;
    }

    // sum of first two number equal to third return true
    if (val3 == (val1 + val2))
        return 1;

    // else return false
    return 0;
} */




/*
Pour résoudre ce genre de problème il est possible de le formuler comme une CSP (Constraint Satisfaction Problem) pour lequel on doit définir :

des domaines de valeurs : D={d1,...,dm}
des variables : V={v1,...,vn}
des contraintes C={c1,...,ck} exprimées entre les variables
Pour SEND+MORE=MONEY, on a donc :

D={d1,d2} avec d1={0,1} et d2={0,...,9}
V={S,E,N,D,M,O,R,Y,R1,R2,R3,R4}
les variables {S,E,N,D,M,O,R,Y} prennent leurs valeurs dans d2
les retenues {R1,R2,R3,R4} prennent leurs valeurs dans d1
des contraintes C={c1,c2,c3,c4} sont les suivantes :
c1 (addition) : D+E=Y+10×R1
c2 (addition) : R1+N+R=E+10×R2
c3 (addition) : R2+E+O=N+10×R3
c4 (addition) : R3+S+M=O+10×R4
c5 (égalité) : R4=M
c6 (alldiff) : S,E,N,D,M,O,R,Y
*/



