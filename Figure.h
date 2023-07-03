#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#define duzina 8
#define sirina 2*duzina

#define cp 177
#define bp 178
#define cf 0
#define bf 219

struct POLJE{int polje_figure[duzina][sirina];};

int POLJE[8][8]={{19,16,11,4,7,12,15,20},
                 {24,23,24,23,24,23,24,23},
                 {25,26,25,26,25,26,25,26},
                 {26,25,26,25,26,25,26,25},
                 {25,26,25,26,25,26,25,26},
                 {26,25,26,25,26,25,26,25},
                 {21,22,21,22,21,22,21,22},
                 {18,13,10,1,6,9,14,17}};



struct POLJE inicijalizacija(struct POLJE init_polja, int x){
struct POLJE konj(int a, int b);
struct POLJE kralj(int a, int b);
struct POLJE lovac(int a, int b);
struct POLJE piun(int a, int b);
struct POLJE kraljica(int a, int b);
struct POLJE top(int a, int b);
struct POLJE boja_polja(int a, int b);
struct POLJE bijeli_lovac(int a, int b);
struct POLJE slovo_a(int a, int b);
struct POLJE slovo_b(int a, int b);
struct POLJE slovo_c(int a, int b);
struct POLJE slovo_d(int a, int b);
struct POLJE slovo_e(int a, int b);
struct POLJE slovo_f(int a, int b);
struct POLJE Slovo_g(int a, int b);
struct POLJE slovo_h(int a, int b);
struct POLJE broj_8(int a, int b);
struct POLJE broj_7(int a, int b);
struct POLJE broj_6(int a, int b);
struct POLJE broj_5(int a, int b);
struct POLJE broj_4(int a, int b);
struct POLJE broj_3(int a, int b);
struct POLJE broj_2(int a, int b);
struct POLJE broj_1(int a, int b);


    switch(x){



            /*kralj*/
case 1:
    init_polja=kralj(bp,bf);
    return init_polja;
    break;
case 2:
    init_polja=kralj(cp,bf);
    return init_polja;
    break;
case 3:
    init_polja=kralj(bp,cf);
    return init_polja;
    break;
case 4:
    init_polja=kralj(cp,cf);
    return init_polja;
    break;



            /*kraljica*/

case 5:
    init_polja=kraljica(bp,bf);
    return init_polja;
    break;
case 6:
    init_polja=kraljica(cp,bf);
    return init_polja;
    break;
case 7:
    init_polja=kraljica(bp,cf);
    return init_polja;
    break;
case 8:
    init_polja=kraljica(cp,cf);
    return init_polja;
    break;



            /*lovac*/

case 9:
    init_polja=bijeli_lovac(bp,bf);
    return init_polja;
    break;
case 10:
    init_polja=bijeli_lovac(cp,bf);
    return init_polja;
    break;
case 11:
    init_polja=lovac(bp,cf);
    return init_polja;
    break;
case 12:
    init_polja=lovac(cp,cf);
    return init_polja;
    break;



            /*konj*/

case 13:
    init_polja=konj(bp,bf);
    return init_polja;
    break;
case 14:
    init_polja=konj(cp,bf);
    return init_polja;
    break;
case 15:
    init_polja=konj(bp,cf);
    return init_polja;
    break;
case 16:
    init_polja=konj(cp,cf);
    return init_polja;
    break;



            /*top*/

case 17:
    init_polja=top(bp,bf);
    return init_polja;
    break;
case 18:
    init_polja=top(cp,bf);
    return init_polja;
    break;
case 19:
    init_polja=top(bp,cf);
    return init_polja;
    break;
case 20:
    init_polja=top(cp,cf);
    return init_polja;
    break;



            /*piun*/

case 21:
    init_polja=piun(bp,bf);
    return init_polja;
    break;
case 22:
    init_polja=piun(cp,bf);
    return init_polja;
    break;
case 23:
    init_polja=piun(bp,cf);
    return init_polja;
    break;
case 24:
    init_polja=piun(cp,cf);
    return init_polja;
    break;



            /*polja*/
case 25:
    init_polja=boja_polja(bp,cf);
    return init_polja;
    break;
case 26:
    init_polja=boja_polja(cp,cf);
    return init_polja;
    break;
case 27:
    init_polja=boja_polja(cf,cf);
    return init_polja;
    break;
/*       SLOVA         */

case 28:
    init_polja=slovo_a(cf,bf);
    return init_polja;
    break;
case 29:
    init_polja=slovo_b(cf,bf);
    return init_polja;
    break;
case 30:
    init_polja=slovo_c(cf,bf);
    return init_polja;
    break;
case 31:
    init_polja=slovo_d(cf,bf);
    return init_polja;
    break;
case 32:
    init_polja=slovo_e(cf,bf);
    return init_polja;
    break;
case 33:
    init_polja=slovo_f(cf,bf);
    return init_polja;
    break;
case 34:
    init_polja=Slovo_g(cf,bf);
    return init_polja;
    break;
case 35:
    init_polja=slovo_h(cf,bf);
    return init_polja;
    break;


    /* BROJEVI   */


case 36:
    init_polja=broj_8(cf,bf);
    return init_polja;
    break;
case 37:
    init_polja=broj_7(cf,bf);
    return init_polja;
    break;
case 38:
    init_polja=broj_6(cf,bf);
    return init_polja;
    break;
case 39:
    init_polja=broj_5(cf,bf);
    return init_polja;
    break;
case 40:
    init_polja=broj_4(cf,bf);
    return init_polja;
    break;
case 41:
    init_polja=broj_3(cf,bf);
    return init_polja;
    break;
case 42:
    init_polja=broj_2(cf,bf);
    return init_polja;
    break;
case 43:
    init_polja=broj_1(cf,bf);
    return init_polja;
    break;




    default: break;
    }
    };



struct POLJE konj(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219
if(i==1){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}

if(i==2){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}







return pomocni;};

struct POLJE kralj(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219
if(i==1){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==2){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}







return pomocni;};

struct POLJE lovac(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==7)pomocni.polje_figure[i][j]=219;
                    if(j==8)pomocni.polje_figure[i][j]=219;}
if(i==3){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
            }}}







return pomocni;};

struct POLJE bijeli_lovac(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==7)pomocni.polje_figure[i][j]=0;
                    if(j==8)pomocni.polje_figure[i][j]=0;}
if(i==3){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
            }}}







return pomocni;};

struct POLJE piun(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==3){
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
            }}}







return pomocni;};

struct POLJE kraljica(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==1){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==2){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE top(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219


if(i==2){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE boja_polja(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;}}//219
return pomocni;};



struct POLJE slovo_a(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_b(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219


if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_c(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219


if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_d(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_e(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_f(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE Slovo_g(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE slovo_h(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219


if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};



struct POLJE broj_8(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_7(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_6(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_5(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_4(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_3(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_2(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;
                    if(j==5)pomocni.polje_figure[i][j]=b;
                    if(j==6)pomocni.polje_figure[i][j]=b;
                    if(j==7)pomocni.polje_figure[i][j]=b;
                    if(j==8)pomocni.polje_figure[i][j]=b;
                    if(j==9)pomocni.polje_figure[i][j]=b;
                    if(j==10)pomocni.polje_figure[i][j]=b;
                    if(j==11)pomocni.polje_figure[i][j]=b;
                    if(j==12)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};

struct POLJE broj_1(int a, int b){
    int i,j;

    struct POLJE pomocni;
            for(i=0;i<8;i++){
            for(j=0;j<16;j++){
                 pomocni.polje_figure[i][j]=a;//219

if(i==2){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==3){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==4){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==5){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
if(i==6){
                    if(j==3)pomocni.polje_figure[i][j]=b;
                    if(j==4)pomocni.polje_figure[i][j]=b;}
            }}






return pomocni;};


void ispis_polja(struct POLJE ispis){
    struct POLJE radi;
    radi=ispis;
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<16;j++){
            printf("%c",radi.polje_figure[i][j]);

                }printf("\n");

            }


}

void ispis_reda(struct POLJE ispis, int red){
    int j;
    struct POLJE radi;
    radi=ispis;
    for(j=0;j<16;j++){
        printf("%c",radi.polje_figure[red][j]);

    }

}

void ispis_table(void){
    struct POLJE inicijalizacija(struct POLJE init_polja, int x);
    void ispis_reda(struct POLJE ispis, int red);

    struct POLJE posebna;
    struct POLJE posebna2;
    int i=0,d=0,k=0,l=0;
    for(i=0;i<8;i++){
        for(d=0;d<8;d++){
            for(k=0;k<8;k++){
                int l;
                l=POLJE[i][k];
                posebna2=inicijalizacija(posebna,l);
                ispis_reda(posebna2, d);

            }printf("\n");
        }
    }
}



/*Napraviti .h fajl (ili dodati u postojeći) koji će sadržavati funkcije za pomjeranje figura u zadatku 2.
Dozvoliti korisniku programa da odabere koji će potez napraviti. Voditi računa o tome da li postoji figura na mjestu sa kojeg se traži pomjeranje.
Odabrana figura se može pomjeriti na bilo koje mjesto na tabli. Doraditi šahovsku tablu sa dva niza tipa POLJE od kojih će jedan predstavljati slova
(koji treba da bude iznad table) a drugi brojeve (koji treba da bude sa lijeve strane table) kao na slici. Korisnik bira slovo i broj sa kojeg će se
pomjeriti figura, i slovo i broj na koji će se pomjeriti figura.
*/


int POLJE_TABLE[9][9]={{27,28,29,30,31,32,33,34,35},
                      {36,19,16,11,4,7,12,15,20},
                      {37,24,23,24,23,24,23,24,23},
                      {38,25,26,25,26,25,26,25,26},
                      {39,26,25,26,25,26,25,26,25},
                      {40,25,26,25,26,25,26,25,26},
                      {41,26,25,26,25,26,25,26,25},
                      {42,21,22,21,22,21,22,21,22},
                      {43,18,13,10,1,6,9,14,17}};


char slova[9]={'a','b','c','d','e','f','g','h','\0'};
char brojeva[9]={'8','7','6','5','4','3','2','1','\0'};


void ispis_table_saha(void){
    struct POLJE inicijalizacija(struct POLJE init_polja, int x);
    void ispis_reda(struct POLJE ispis, int red);

    struct POLJE posebna;
    struct POLJE posebna2;
    int i=0,d=0,k=0,l=0;
    for(i=0;i<9;i++){
        for(d=0;d<8;d++){
            for(k=0;k<9;k++){
                int l;
                l=POLJE_TABLE[i][k];
                posebna2=inicijalizacija(posebna,l);
                ispis_reda(posebna2, d);

            }printf("\n");
        }
    }
}


void pomjeranje_figure(char a, char b, char c, char d){
    struct POLJE inicijalizacija(struct POLJE init_polja, int x);
    void ispis_reda(struct POLJE ispis, int red);
    int koordinata_x (char x);
    int koordinata_y (char x);

    int i=0,j=0,k=0,m=0;

    i=koordinata_x(a);
    j=koordinata_y(b);
    k=koordinata_x(c);
    m=koordinata_y(d);
        //printf("%d%d%d%d",i,j,k,m);

    int pomocno_polje[9][9];
    int o, z;

    for(o=0;o<9;o++){
        for(z=0;z<9;z++){
            pomocno_polje[o][z]=POLJE_TABLE[o][z];
        }
    }



    if(pomocno_polje[j][i]<25){
        if( ((pomocno_polje[m][k]%2)==0)==((pomocno_polje[j][i]%2)==0) ){
        pomocno_polje[m][k]=pomocno_polje[j][i];
        if((pomocno_polje[j][i]%2)==0){
            pomocno_polje[j][i]=26;}
        else{
        pomocno_polje[j][i]=25;
        //printf("ide gdje ne treba");
        }}

        if( ((pomocno_polje[m][k]%2)==0)!=((pomocno_polje[j][i]%2)==0) ){

        if((pomocno_polje[m][k]%2)==0){
        pomocno_polje[m][k]=pomocno_polje[j][i]+1;}
        else{
        pomocno_polje[m][k]=pomocno_polje[j][i]-1;}

        if((pomocno_polje[j][i]%2)==0){
            pomocno_polje[j][i]=26;}
        else{
        pomocno_polje[j][i]=25;}

        }



    int q,w,e;
    struct POLJE posebna;
    struct POLJE posebna2;

    for(q=0;q<9;q++){
        for(w=0;w<8;w++){
            for(e=0;e<9;e++){
                int l=0;
                l=pomocno_polje[q][e];
                posebna2=inicijalizacija(posebna,l);
                ispis_reda(posebna2, w);

            }printf("\n");
        }
    }
}else printf("Na poziciji sa koje zelite pomjerit nema figure.");


}

int koordinata_x (char x){
    int i;
    i=strchr(slova, x)-slova+1;
    return i;
}

int koordinata_y (char x){
    int i;
    i=strchr(brojeva, x)-brojeva+1;
    return i;
}

void pravila_pomjeranja(void){
    void pomjeranje_figure(char a, char b, char c, char d);
    void ispis_table_saha(void);
    char a,b,c,d;
    int koordinata_x (char x);
    int koordinata_y (char x);
    int i=0,j=0,k=0,m=0;


    printf("Unesite sa kojeg polja hocete pomjeriti figuru i na koje polje hocete pomjerit figuru\n");
    printf("Unesite slovo i broj za odabir polja\nNpr:a8a3\n");

ispis_table_saha();

    printf("Unesite sa kojeg polja hocete pomjeriti figuru i na koje polje hocete pomjerit figuru\n");
    printf("Unesite slovo i broj za odabir polja\nNpr:a8a3\n");
    scanf("%c%c%c%c", &a, &b,&c,&d);


    i=koordinata_x(a);
    j=koordinata_y(b);
    k=koordinata_x(c);
    m=koordinata_y(d);
int x=1;
    if(POLJE_TABLE[j][i]<25){
                //KRALJ
                if((POLJE_TABLE[j][i]<5)&&(POLJE_TABLE[j][i]>0)){

                    if(m<=j){
                        if((j-m==1) || (j-m==0)){
                            if(k<=i){
                                if((i-k==1) || (i-k==0)){
                                    pomjeranje_figure(a,b,c,d);
                                    x=0;
                                }
                            }
                            if(k>i){
                                if(i-k==-1){
                                    pomjeranje_figure(a,b,c,d);
                                    x=0;
                                }
                            }
                        }
                    }
                    if(m>j){
                        if((j-m==-1)){
                            if(k<=i){
                                if((i-k==1) || (i-k==0)){
                                    pomjeranje_figure(a,b,c,d);
                                    x=0;
                                }
                            }
                            if(k>i){
                                if(i-k==-1){
                                    pomjeranje_figure(a,b,c,d);
                                    x=0;
                                }
                            }
                        }
                    }
                }
                    //KRALJICA
                if((POLJE_TABLE[j][i]<9)&&(POLJE_TABLE[j][i]>4)){
                        int pomocna1, pomocna2;
                        if(i>k){pomocna1=i-k;
                        }else pomocna1=k-i;

                        if(j>m){pomocna2=j-m;
                        }else pomocna2=m-j;

                        if(pomocna1==pomocna2){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                        }
                        if((j-k==0) || (i-k==0)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                        }
                }
                        //LOVAC
                if((POLJE_TABLE[j][i]<13)&&(POLJE_TABLE[j][i]>8)){
                        int pomocna1, pomocna2;
                        if(i>k){pomocna1=i-k;
                        }else pomocna1=k-i;

                        if(j>m){pomocna2=j-m;
                        }else pomocna2=m-j;

                        if(pomocna1==pomocna2){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                        }
                }
                            //TOP
                if((POLJE_TABLE[j][i]<21)&&(POLJE_TABLE[j][i]>16)){
                        if((j-m==0) || (i-k==0)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                        }
                }
                                //KONJ
                if((POLJE_TABLE[j][i]<17)&&(POLJE_TABLE[j][i]>12)){
                                //printf("%d%d%d%d",i,j,k,m);

                        //printf("test");
                        if((i-k==-1) && (j-m==-2)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==-1) && (j-m==2)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==-2) && (j-m==-1)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==-2) && (j-m==1)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==1) && (j-m==-2)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==1) && (j-m==2)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==2) && (j-m==-1)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                        if((i-k==2) && (j-m==1)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                            }
                }
                                    //PIUN
                if((POLJE_TABLE[j][i]<25)&&(POLJE_TABLE[j][i]>20)){
                        printf("test");
                printf("%c%c%c%c",a,b,c,d);
                    if((j-m==-1)||(j-m==1) && (i-k==0)){
                            pomjeranje_figure(a,b,c,d);
                            x=0;
                        }
                    }
                }else printf("Polje koje zelite pomjeriti nema figure");
                if (x==1) printf("Ta figura ne moze se tako pomjerat!");
                if (x==0) printf("Figura je uspjesno pomjerena");
}




#endif // FIGURE_H_INCLUDED
