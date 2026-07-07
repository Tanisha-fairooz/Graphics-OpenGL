#include <windows.h>
#include <GL/glut.h>
#include <math.h>

bool isDay= true;
float timeOfDay = 0.0f;

//obj4
void minar()
{
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
        glVertex2f(-50.715351, -41.065789);
        glVertex2f(-20.131203, -36.957660);
        glVertex2f( 24.443531, -36.652225);
        glVertex2f( 44.176896, -39.378545);
        glVertex2f(50.7822998127, -37.5941452464);
        glVertex2f(46.1975589935, -35.7315942886);
        glVertex2f(42.8219774636, -35.0154492742);
        glVertex2f(39.1287402405, -34.8834601379);
        glVertex2f(34.9859045573, -34.3713113261);
        glVertex2f(32.0331287387, -33.9686600782);
        glVertex2f(20.2108222263, -32.9905567578);
        glVertex2f(14.1452733964, -32.9749239000);
        glVertex2f(8.26085806596, -33.0181738086);
        glVertex2f(0.0, -33.0);
        glVertex2f(-6.22550774447, -33.2442388744);
        glVertex2f(-15.2917030851, -33.2818469905);
        glVertex2f(-20.7555106288, -33.5417602912);
        glVertex2f(-27.8134050816, -33.6677941207);
        glVertex2f(-31.4120971050, -34.3062559759);
        glVertex2f(-35.5856357293, -34.3704642624);
        glVertex2f(-39.2618338815, -35.3436739599);
        glVertex2f(-41.9875949112, -35.6512076444);
        glVertex2f(-45.6950431250, -36.5474776663);
        glVertex2f(-49.7971569355, -37.2126853112);
        glVertex2f(-53.5407322507, -38.2566076885);
        glVertex2f(-57.1607519301, -39.0350468666);
        glVertex2f(-50.7153510375, -41.0657896136);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
            glVertex2f(-53.63412608067187, -3.387168593775784);
            glVertex2f(-42.45975158020737, -2.7576263683974993);
            glVertex2f(-41.98759491117366, -35.651207644412885);
            glVertex2f(-53.5407322506933,  -38.25660768850789);
        glEnd();
        glColor3ub(0, 120, 0);
        glBegin(GL_QUADS);
            glVertex2f(-49.79715693552204, -37.212685311247164);
            glVertex2f(-45.69504312495817, -36.54747766629086);
            glVertex2f(-45.91677900661027, -5.726190116648665);
            glVertex2f(-49.57542105386994, -6.834869524909175);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
            glVertex2f(-39.03041590841244,  8.049403448707903);
            glVertex2f(-28.065472740615185, 8.805606425797372);
            glVertex2f(-27.813405081585362, -33.66779412072786);
            glVertex2f(-39.26183388154244, -35.34367395991863);
        glEnd();
        glColor3ub(0, 120, 0);
        glBegin(GL_QUADS);
            glVertex2f(-35.58563572927646, -34.37046426237892);
            glVertex2f(-35.37543485248002,   5.024591540350022);
            glVertex2f(-31.34235230800287,   5.65476068792458);
            glVertex2f(-31.41209710499788, -34.306255975851556);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(20.2108222263, -32.9905567578);
            glVertex2f(32.0331287387, -33.9686600782);
            glVertex2f(32.0331287387, 8.8465892911);
            glVertex2f(20.0, 10.0);
        glEnd();
        glColor3ub(0, 120, 0);
        glBegin(GL_POLYGON);
            glVertex2f(24.3775851326, 6.1453779592);
            glVertex2f(28.2610351277, 5.8466510365);
            glVertex2f(28.3701067044, -33.5325558081);
            glVertex2f(24.2997554174, -33.4588842916);
        glEnd();
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            glVertex2f(34.9859045573, -34.3713113261);
            glVertex2f(35.2543387226, -1.75656023923);
            glVertex2f(46.3943565836, -3.09873106585);
            glVertex2f(46.1975589935, -35.7315942886);
        glEnd();
        glColor3ub(0, 120, 0);
        glBegin(GL_POLYGON);
            glVertex2f(39.1287402405, -34.8834601379);
            glVertex2f(38.8978748971, -5.30438698513);
            glVertex2f(42.7098602474, -5.97709028225);
            glVertex2f(42.8219774636, -35.0154492742);
        glEnd();
        glColor3ub(255, 255, 255);
        glLineWidth(18);
        glBegin(GL_LINE_LOOP);
            glVertex2f(-15.2917030851, -33.2818469905);
            glVertex2f(-14.9841200270, 11.3719454981);
            glVertex2f(-18.6761277020, 25.2169742796);
            glVertex2f(12.9636670512, 25.4485275353);
            glVertex2f(8.0958648832, 11.0021469077);
            glVertex2f(8.2608580660, -33.0181738086);
        glEnd();
        glColor3ub(255, 255, 255);
            glBegin(GL_POLYGON);
            glVertex2f(-6.2255077444729, -33.2442388743723);
            glVertex2f(0, -33);
            glVertex2f(0, 10);
            glVertex2f(-6.3694354517902, 10.7566108855563);
        glEnd();
        glColor3ub(255, 255, 255);
            glBegin(GL_POLYGON);
            glVertex2f(-5.1387662267644, 25.2169742796096);
            glVertex2f(-0.8546100708506, 24.9774499061585);
            glVertex2f(0, 10);
            glVertex2f(-6.3694354517902, 10.7566108855563);
        glEnd();
}

//obj6
void minarCircle(){

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
        float r = sqrt(577.1746330428182);
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-4.175310908473, y-4.7175758911342);

}
glEnd();
}

//obj5
void minarBase(){
        glColor3ub(154, 100, 74);
        glBegin(GL_POLYGON);
            glVertex2f(-49.774518422419334, -34.11120901617627);
            glVertex2f(-49.797156935522, -37.2126853112472);
            glVertex2f(-45.6950431249582, -36.5474776662909);
            glVertex2f(-45.71412179894164, -33.89554198258776);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-42.0112941293, -34.0001621167);
            glVertex2f(-39.2537258976, -33.8233496291);
            glVertex2f(-39.2618338815, -35.3436739599);
            glVertex2f(-41.9875949112, -35.6512076444);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-35.5000246806, -33.3431316779);
            glVertex2f(-31.4102668613, -33.2575985330);
            glVertex2f(-31.4120971050, -34.3062559759);
            glVertex2f(-35.5856357293, -34.3704642624);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-27.8187441765, -32.7681566263);
            glVertex2f(-20.7410426045, -32.7079358288);
            glVertex2f(-20.7555106288, -33.5417602912);
            glVertex2f(-27.8134050816, -33.6677941207);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(14.1428582175, -31.9900597808);
            glVertex2f(20.2059926191, -32.0057103999);
            glVertex2f(20.2108222263, -32.9905567578);
            glVertex2f(14.1452733964, -32.9749239000);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(24.3014564834, -32.5932835101);
            glVertex2f(28.3675559129, -32.6116179035);
            glVertex2f(28.3701067044, -33.5325558081);
            glVertex2f(24.2997554174, -33.4588842916);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(32.0331287387, -32.7628348088);
            glVertex2f(34.9963754819, -33.0990939834);
            glVertex2f(34.9859045573, -34.3713113261);
            glVertex2f(32.0331287387, -33.9686600782);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(39.1162631928, -33.2848680605);
            glVertex2f(42.8156290369, -33.3712067543);
            glVertex2f(42.8219774636, -35.0154492742);
            glVertex2f(39.1287402405, -34.8834601379);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(46.2112680722, -33.4583627425);
            glVertex2f(67.3937308730, -34.8383224671);
            glVertex2f(90.1072451432, -37.0918887046);
            glVertex2f(90.7070738535, -35.8111960308);
            glVertex2f(97.9030722308, -36.9132858724);
            glVertex2f(99.9127654714, -37.9505468997);
            glVertex2f(93.7540281214, -40.0898977687);
            glVertex2f(79.0991069320, -38.8799837313);
            glVertex2f(58.9211492199, -38.4294499492);
            glVertex2f(48.8130374289, -36.3031555540);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(-53.5503954772, -34.6487538364);
            glVertex2f(-95.0824772487, -37.0178893627);
            glVertex2f(-95.0, -40.0);
            glVertex2f(-80.7772791547, -38.6329205353);
            glVertex2f(-62.7453239264, -38.1468653272);
            glVertex2f(-53.7708844290, -36.8173187350);
        glEnd();

        glColor3ub(144, 100, 74);
        glBegin(GL_POLYGON);
            glVertex2f(99.9127654713531, -37.9505468997432);
            glVertex2f(99.971971024267, -47.6463823368244);
            glVertex2f(94.5248057852408, -49.4529307043036);
            glVertex2f(84.9639429592045, -41.893656107063);
            glVertex2f(78.9601922495305, -41.9448444467191);
            glVertex2f(79.0991069319616, -38.8799837312578);
            glVertex2f(93.754028121399, -40.0898977686746);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-100.3573886926, -35.6184230613);
            glVertex2f(-102.0798087559, -37.3408431246);
            glVertex2f(-95.0, -40.0);
            glVertex2f(-95.0824772487, -37.0178893627);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-102.0798087559, -37.3408431246);
            glVertex2f(-95.0, -40.0);
            glVertex2f(-95.1838921263, -49.9562687528);
            glVertex2f(-102.1495366095, -47.4056068358);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-80.7772791547, -38.6329205353);
            glVertex2f(-95.0, -40.0);
            glVertex2f(-95.1838921263, -49.9562687528);
            glVertex2f(-84.7033136237, -42.4279722109);
            glVertex2f(-80.4627734632, -41.7779774500);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-80.7772791547, -38.6329205353);
            glVertex2f(-80.4627734632, -41.7779774500);
            glVertex2f(-62.7950521705, -41.4969926475);
            glVertex2f(-62.7453239264, -38.1468653272);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(58.9211492199, -38.4294499492);
            glVertex2f(58.9922914182, -40.7600685514);
            glVertex2f(78.9601922495, -41.9448444467);
            glVertex2f(79.0991069320, -38.8799837313);
        glEnd();
}

//obj7
minarStair(){
        glColor3ub(144, 100, 74);
        glBegin(GL_POLYGON);
            glVertex2f(-84.7033136237, -42.4279722109);
            glVertex2f(-85.7715371166, -43.1952870328);
            glVertex2f(-41.2193406558, -53.4651291049);
            glVertex2f(-41.1617479583, -51.9865813160);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(-41.1617479583, -51.9865813160);
            glVertex2f(-41.2193406558, -53.4651291049);
            glVertex2f(43.5850576004, -55.1807842395);
            glVertex2f(43.7072662299, -52.7658766144);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(43.7072662299, -52.7658766144);
            glVertex2f(43.5850576004, -55.1807842395);
            glVertex2f(86.4358400511, -43.0574082180);
            glVertex2f(84.9639429592, -41.8936561071);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(88.6151594201, -44.7804821545);
            glVertex2f(89.9831524483, -45.8620827522);
            glVertex2f(49.9280875820, -59.1209602979);
            glVertex2f(49.7226318998, -56.7496804995);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(92.8049481159, -48.0931291229);
            glVertex2f(94.5248057852, -49.4529307043);
            glVertex2f(59.1304562201, -64.6813998539);
            glVertex2f(59.0836129963, -61.8568035751);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(49.7226318998, -56.7496804995);
            glVertex2f(49.9280875820, -59.1209602979);
            glVertex2f(-45.5863710997, -57.8424754591);
            glVertex2f(-45.7027857035, -56.0656448356);

        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(-45.7027857035, -56.0656448356);
            glVertex2f(-45.5863710997, -57.8424754591);
            glVertex2f(-88.6190539306, -45.2406847156);
            glVertex2f(-87.4660950509, -44.4125036811);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(-48.3471262050, -62.0815855496);
            glVertex2f(-48.6182887513, -65.0581437174);
            glVertex2f(-95.1838921263, -49.9562687528);
            glVertex2f(-92.2430909039, -47.8438640160);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(59.0836129963, -61.8568035751);
            glVertex2f(59.1304562201, -64.6813998539);
            glVertex2f(-48.6182887513, -65.0581437174);
            glVertex2f(-48.3471262050, -62.0815855496);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(-53.7708844290, -36.8173187350);
            glVertex2f(-62.7453239264, -38.1468653272);
            glVertex2f(-60.8566567045, -39.7614033212);
            glVertex2f(-53.5407322507, -38.2566076885);
        glEnd();

glLineWidth(4);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-62.7453239264, -38.1468653272);
        glVertex2f(-60.8566567045, -39.7614033212);
        glVertex2f(-40.7857454697, -45.0744079526);
        glVertex2f(-0.7592873725, -46.7137168166);
        glVertex2f(29.8411447563, -44.6645807366);
        glVertex2f(49.6804282613, -41.9353132206);
        glVertex2f(55.9004121690, -40.3227248001);
        glVertex2f(58.9211492199, -38.4294499492);
        glVertex2f(58.9922914182, -40.7600685514);
        glVertex2f(56.1607744200, -42.9191002625);
        glVertex2f(50.0, -45.0);
        glVertex2f(30.7331947668, -47.9217494514);
        glVertex2f(0.0, -50.0);
        glVertex2f(-41.1801883713, -48.3132863746);
        glVertex2f(-58.3041968183, -44.1224157764);
        glVertex2f(-62.7950521705, -41.4969926475);
    glEnd();

}

//obj21
ground(){
    if(isDay){
    glColor3ub(168, 125, 93);
    }
    if (!isDay){
    glColor3ub(134, 100, 74);
    }
    glBegin(GL_POLYGON);

        glVertex2f(94.0652778422, -36.0848775712);
        glVertex2f(94.0514404024, -34.6684037440);
        glVertex2f(102.4594786924, -35.3745990377);
        glVertex2f(144.7901605140, -58.6496905436);

        glVertex2f(144.7901605140, -60.6582996047);
        glVertex2f(90.1563591398, -73.1921922859);
        glVertex2f(67.8285813284, -77.9419327681);
        glVertex2f(34.0433199629, -84.9075101085);
        glVertex2f(-0.5341179468, -85.2767535037);
        glVertex2f(-49.9016076640, -78.4378778945);

        glVertex2f(-124.9723118712, -56.1870983149);
        glVertex2f(-135.75, -53.5);
        glVertex2f(-130.0, -50.0);
        glVertex2f(-109.7779696580, -35.3503457162);

        glVertex2f(-95.0, -35.0);
        glVertex2f(-100.3573886926, -35.6184230613);
        glVertex2f(-95.0824772487, -37.0178893627);
        glVertex2f(-102.0798087559, -37.3408431246);

        glVertex2f(-102.1495366095, -47.4056068358);
        glVertex2f(-95.1838921263, -49.9562687528);

        glVertex2f(-48.6182887513, -65.0581437174);
        glVertex2f(59.1304562201, -64.6813998539);

        glVertex2f(94.5248057852, -49.4529307043);
        glVertex2f(99.9719710243, -47.6463823368);
        glVertex2f(99.9127654714, -37.9505468997);
        glVertex2f(97.9030722308, -36.9132858724);
    glEnd();

    glColor3ub(144, 100, 74);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);

        glVertex2f(94.0652778422, -36.0848775712);
        glVertex2f(94.0514404024, -34.6684037440);
        glVertex2f(102.4594786924, -35.3745990377);
        glVertex2f(144.7901605140, -58.6496905436);

        glVertex2f(144.7901605140, -60.6582996047);
        glVertex2f(90.1563591398, -73.1921922859);
        glVertex2f(67.8285813284, -77.9419327681);
        glVertex2f(34.0433199629, -84.9075101085);
        glVertex2f(-0.5341179468, -85.2767535037);
        glVertex2f(-49.9016076640, -78.4378778945);

        glVertex2f(-124.9723118712, -56.1870983149);
        glVertex2f(-135.75, -53.5);
        glVertex2f(-130.0, -50.0);
        glVertex2f(-109.7779696580, -35.3503457162);

        glVertex2f(-95.0, -35.0);
        glVertex2f(-100.3573886926, -35.6184230613);
        glVertex2f(-95.0824772487, -37.0178893627);
        glVertex2f(-102.0798087559, -37.3408431246);

        glVertex2f(-102.1495366095, -47.4056068358);
        glVertex2f(-95.1838921263, -49.9562687528);

        glVertex2f(-48.6182887513, -65.0581437174);
        glVertex2f(59.1304562201, -64.6813998539);

        glVertex2f(94.5248057852, -49.4529307043);
        glVertex2f(99.9719710243, -47.6463823368);
        glVertex2f(99.9127654714, -37.9505468997);
        glVertex2f(97.9030722308, -36.9132858724);
    glEnd();
}

//obj12
void sun(float a, float b, float c) {

    glColor3f(a,b,c);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
        float r = sqrt(36);
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 66, y + 80);
    }
    glEnd();
    }

void wheel(float b, float cx, float cy){

    glColor3ub(50, 60, 60);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
         float r = sqrt(b);
         float x = r * cos(A);
         float y = r * sin(A);
        glVertex2f(x+cx, y+cy);

}
glEnd();
}
//obj14
bool ambulanceRunning = false;
float ambulanceX = 0.0f;
float ambulanceSpeed = 1.5f;

void windoww(float a, float b, float c, float d, float e, float f, float g, float h){

    glColor3ub(186, 224, 245);
    glBegin(GL_QUADS);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
        glVertex2f(g,h);
    glEnd();
}
void ambulance(){
    glPushMatrix();
    glTranslatef(ambulanceX, 0.0f, 0.0f);
    glScalef(1.25f, 1.25f, 1.0f);

    glColor3ub(245,245,220);
    glBegin(GL_POLYGON);
        glVertex2f(-58, -84.5);
        glVertex2f(-48.5, -82.5);
        glVertex2f(-48.5, -93);
        glVertex2f(-58, -96);
    glEnd();
    glColor3ub(245,245,220);
    glBegin(GL_POLYGON);
        glVertex2f(-58, -84.5);
        glVertex2f(-58, -96);
        glVertex2f(-77, -89.4);
        glVertex2f(-78, -87.5);
        glVertex2f(-78, -79);
    glEnd();
    glColor3ub(245,245,220);
    glBegin(GL_POLYGON);
        glVertex2f(-78, -79);
        glVertex2f(-70.05, -75.25);
        glVertex2f(-55, -79);
        glVertex2f(-48.5, -82.5);
        glVertex2f(-58, -84.5);
    glEnd();

    glColor3ub(212, 192, 159);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-78, -79);
        glVertex2f(-70.05, -75.25);
        glVertex2f(-55, -79);
        glVertex2f(-48.5, -82.5);
        glVertex2f(-58, -84.5);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(-78, -79);
        glVertex2f(-70.05, -75.25);
        glVertex2f(-55, -79);
        glVertex2f(-48.5, -82.5);
        glVertex2f(-58, -84.5);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(-58, -84.5);
        glVertex2f(-48.5, -82.5);
        glVertex2f(-48.5, -93);
        glVertex2f(-58, -96);
    glEnd();

    glColor3ub(212,0,0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
         float r = sqrt(0.25);
         float x = r * cos(A);
         float y = r * sin(A);
        glVertex2f(x-65, y-78);

}
glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(-65.5, -79);
        glVertex2f(-64.5, -79);
        glVertex2f(-64.5,-78);
        glVertex2f(-65.5,-78);
    glEnd();

    wheel(4.84,-74,-90);
    wheel(5,-61,-94);
    windoww(-76.5, -84,-67, -87,-67, -83,-76.5, -80.5);
    windoww(-63.4, -84.4, -59.5, -85.5,-59.5, -89.5, -63.4, -88.4);
    windoww(-56.5, -85.5,-56.5, -90.5, -50, -88.5,-50, -84);
    glPopMatrix();

}
//F1
void updateAmbulance() {
    if (ambulanceRunning){
    ambulanceX += ambulanceSpeed;

    if (ambulanceX > 150) {
        ambulanceX = -150;
    }
    }
}
//obj13
float car1X = 0.0f;
float car1Speed = 1.0f;
bool car1Running = false;

void car1(){
    glPushMatrix();
    glTranslatef(car1X, 0.0f, 0.0f);

    glColor3ub(0,0,220);
    glBegin(GL_POLYGON);
        glVertex2f(50, -86);
        glVertex2f(76, -86);
        glVertex2f(76, -96);
        glVertex2f(50, -96);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(54, -86);
        glVertex2f(56, -82);
        glVertex2f(68, -82);
        glVertex2f(72,-86);
    glEnd();

    wheel(10,69,-98);
    wheel(10,54,-98);
    windoww(54, -88,62, -88,62, -90,52, -90);
    windoww(64, -88,64, -90,74, -90,72, -88);

    glPopMatrix();
}
//F2
void updateCar1(){

    if (car1Running == true) {
        car1X -= car1Speed;
        if (car1X < -150){
            car1X = 150;
        }
    }
}

//obj3
void sky(int x, int y, int z){
    glColor3ub(x,y,z);
    glBegin(GL_QUADS);
        glVertex2f(150,20);
        glVertex2f(-150,20);
        glVertex2f(-150,150);
        glVertex2f(150,150);
    glEnd();


}

void treeCircle(float b, float x, float y, float cx, float cy){

    glColor3ub(0, 120, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
         float r = sqrt(b);
         x = r * cos(A);
         y = r * sin(A);
        glVertex2f(x+cx, y+cy);

}
glEnd();
}

//obj1
void trees(){
    glColor3ub(0, 89, 0);
    glBegin(GL_POLYGON);
        glVertex2f(150, 20);
        glVertex2f(150, -10);
        glVertex2f(-150, -10);
        glVertex2f(-150, 20);
    glEnd();

    glColor3ub(0, 120, 0);
    glBegin(GL_POLYGON);
        glVertex2f(150, -10);
        glVertex2f(150, -32);
        glVertex2f(-150, -37.2);
        glVertex2f(-150, -10);
    glEnd();

    treeCircle(100,-135,-10,-145,-10);
    treeCircle(100,-140,-10,-130,-10);
    treeCircle(400,-80,-10,-100,-10);
    treeCircle(256,-54,-10,-70,-10);
    treeCircle(100,65,-10,55,-10);
    treeCircle(100,60,-10,70,-10);
    treeCircle(225,105,-10,90,-10);
    treeCircle(225,105,-10,120,-10);
    treeCircle(100,130,-10,140,-10);
}
//obj8

void treeTrunk(float a, float b, float c, float d, float e, float f, float g, float h){
    glColor3ub(144, 100, 74);
    glBegin(GL_POLYGON);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
        glVertex2f(g,h);
    glEnd();

}
float leafOffset = 0.0f;
bool animateTree = true;
void bigTree1(){

    glColor3f(0.0f, 0.6f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2f(125 + leafOffset, 0);
        glVertex2f(137.5 + leafOffset, 19.5);
        glVertex2f(150 + leafOffset, 0);
    glEnd();
}
//obj9
void smallTree2(){
    treeTrunk(-134, -40,-130, -40,-130, -2,-134, -2);
        glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-144 ,-20);
        glVertex2f(-120,-20);
        glVertex2f(-132,-10);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(-142, -14);
        glVertex2f(-122, -14);
        glVertex2f(-132, -4);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(-140, -8);
        glVertex2f(-124, -8);
        glVertex2f(-132, 2);
    glEnd();
}
//obj10
void smallTree1(){
        glColor3f(0.0f, 0.8f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2f(110 + leafOffset, -20);
        glVertex2f(134 + leafOffset, -20);
        glVertex2f(122 + leafOffset, 0);
    glEnd();

}
//obj11
void bigTree2(){
        glColor3f(0.0f, 0.7f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2f(-128 + leafOffset, 2);
        glVertex2f(-108 + leafOffset, 2);
        glVertex2f(-118 + leafOffset, 22);
    glEnd();
}


void renderTree() {

    treeTrunk(135,-50,140,-50,140,15,135,15);
    bigTree1();

    treeTrunk(120,-45,125,-45,125,-15,120,-15);
    smallTree1();

    treeTrunk(-120, 4,-116, 4,-116, -40, -120, -40);
    bigTree2();

}
//F3
void timer(int value) {
    if (animateTree) {
        leafOffset = 0.5f * sin(value * 0.08f);
        glutPostRedisplay();
    }
    glutTimerFunc(30, timer, value + 1);
}

//obj15
void bulding1() {
    glColor3ub(220, 206, 240);
    glBegin(GL_QUADS);
        glVertex2f(-70,46.7);
        glVertex2f(-111.4, 46.6);
        glVertex2f(-111.4, 20.0387299512227);
        glVertex2f(-70, 20.0387299512227);
    glEnd();

    glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-109, 40);
        glVertex2f(-101, 40);
        glVertex2f(-101, 36);
        glVertex2f(-109, 36);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-109, 40);
        glVertex2f(-101, 40);
        glVertex2f(-101, 36);
        glVertex2f(-109, 36);
    glEnd();

     glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-96, 40);
        glVertex2f(-88, 40);
        glVertex2f(-88, 36);
        glVertex2f(-96, 36);
    glEnd();


    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-96, 40);
        glVertex2f(-88, 40);
        glVertex2f(-88, 36);
        glVertex2f(-96, 36);
    glEnd();

    glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-84, 40);
        glVertex2f(-74, 40);
        glVertex2f(-74, 36);
        glVertex2f(-84, 36);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-84, 40);
        glVertex2f(-74, 40);
        glVertex2f(-74, 36);
        glVertex2f(-84, 36);
    glEnd();

    glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-109, 30);
        glVertex2f(-101, 30);
        glVertex2f(-101, 26);
        glVertex2f(-109, 26);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-109, 30);
        glVertex2f(-101, 30);
        glVertex2f(-101, 26);
        glVertex2f(-109, 26);
    glEnd();

    glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-96, 30);
        glVertex2f(-88, 30);
        glVertex2f(-88, 26);
        glVertex2f(-96, 26);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-96, 30);
        glVertex2f(-88, 30);
        glVertex2f(-88, 26);
        glVertex2f(-96, 26);
    glEnd();

    glColor3ub(105, 100, 235);
    glBegin(GL_QUADS);
        glVertex2f(-84, 30);
        glVertex2f(-74, 30);
        glVertex2f(-74, 26);
        glVertex2f(-84, 26);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-84, 30);
        glVertex2f(-74, 30);
        glVertex2f(-74, 26);
        glVertex2f(-84, 26);
    glEnd();

}
void win( float a, float b, float c, float d, float e, float f, float g, float h){

    glColor3ub(105, 140, 235);
    glBegin(GL_QUADS);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
        glVertex2f(g,h);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
        glVertex2f(g,h);
    glEnd();

}
//obj16
void bulding2() {
    glColor3ub(170, 120, 130);
    glBegin(GL_QUADS);
        glVertex2f(-87, 46.6);
        glVertex2f(-87, 68);
        glVertex2f(-41, 68);
        glVertex2f(-41, 46.6);
    glEnd();
    glColor3ub(155, 120, 125);
    glBegin(GL_QUADS);
        glVertex2f(-74, 72);
        glVertex2f(-61, 72);
        glVertex2f(-61, 68);
        glVertex2f(-74, 68);
    glEnd();

}

//obj17
void bulding3() {
        glColor3ub(93,233,202);
    glBegin(GL_QUADS);
        glVertex2f(-20,50);
        glVertex2f(-50,50);
        glVertex2f(-50,90);
        glVertex2f(-20,90);
    glEnd();

    win(-45, 85,-45, 80,-38, 80,-38, 85);
    win(-45, 75,-45, 70,-38, 70,-38, 75);
    win(-32,60,-25, 60,-25, 65,-32, 65);
    win(-32, 70,-25, 70,-25, 75,-32, 75);
    win(-32, 80,-32, 85,-25, 85,-25, 80);


}

//obj18
void bulding4() {
        glColor3ub(170, 120, 130);
    glBegin(GL_QUADS);
        glVertex2f(50, 20);
        glVertex2f(50, 45);
        glVertex2f(98, 45);
        glVertex2f(98, 20);
    glEnd();
    win(60, 25,85, 25,85, 30,60, 30);
    win(60, 35,60, 40,85, 40,85, 35);

}

//obj19
void medical() {
    glColor3ub(174, 74, 41);
    glBegin(GL_QUADS);
        glVertex2f(-70, 20.0387299512227);
        glVertex2f(-60, 20);
        glVertex2f(-60, 50);
        glVertex2f(-70, 46.7);
    glEnd();
    glColor3ub(194, 74, 41);
    glBegin(GL_QUADS);
        glVertex2f(-60, 20);
        glVertex2f(-60, 50);
        glVertex2f(50,50);
        glVertex2f(50,20);

    glEnd();
    glColor3ub(174, 74, 41);
    glBegin(GL_QUADS);
        glVertex2f(30,50);
        glVertex2f(30, 58);
        glVertex2f(-5, 58);
        glVertex2f(-5, 50);
    glEnd();
    win(-52, 38,-44, 38, -44, 32,-52, 32);
    win(-36, 38,-28, 38,-28, 32,-36,32);
    win(-24, 38,-24, 32,-16, 32,-16, 38);
    win(-12, 38,-12, 32,-4, 32,-4, 38);
    win(4, 38,12, 38,12, 32,4, 32);
    win(18, 38,26, 38,26, 32,18, 32);
    win(32, 38,40, 38,40, 32,32, 32);
}

void drawText(const char* text, float x, float y, void* font = GLUT_BITMAP_HELVETICA_18) {
    glRasterPos2f(x, y);
    for (const char* c = text; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}


void win2(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j){
        glColor3ub(149, 176, 177);
        glBegin(GL_POLYGON);
        glVertex2f(a,b);
        glVertex2f(c,d);
        glVertex2f(e,f);
        glVertex2f(g,h);
        glVertex2f(i,j);

    glEnd();

}
//obj20
void mosque() {

    glColor3ub(250,245, 215);
    glBegin(GL_QUADS);
        glVertex2f(98, 20);
        glVertex2f(116, 20);
        glVertex2f(116, 44);
        glVertex2f(98, 44);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(116, 20);
        glVertex2f(125, 20);
        glVertex2f(125, 83);
        glVertex2f(116, 83);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(125, 20);
        glVertex2f(150, 20);
        glVertex2f(150, 50);
        glVertex2f(125, 50);
    glEnd();

    glColor3ub(235,225, 190);
    glBegin(GL_POLYGON);

    for (int i = 0; i <= 180; i++) {
        float pi = 3.1416;
        float a  = i * pi / 180;

        glVertex2f(137.5+ 12.5 * cos(a),50.0   + 12.5 * sin(a));
    }

    glEnd();
    glColor3ub(235,225, 190);
    glBegin(GL_POLYGON);

    for (int i = 0; i <= 180; i++) {

        float pi = 3.1416;
        float a  = i * pi / 180;

        glVertex2f(120.5 + 4.5 * cos(a),83  + 4.5 * sin(a));
    }

    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(135.7338390221283, 62.3826565393857);
        glVertex2f(137.4794120693869, 65.2476190663066);
        glVertex2f(139.0295413198416, 62.3826565393857);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(120, 87.4);
        glVertex2f(121, 87.4);
        glVertex2f(120.5, 89.5);
    glEnd();

    win2(103,20,103, 34,104.5242160093495, 36.1403164842386,106, 34,106, 20);
    win2(108,20,108,34,110.1220951432259, 36.4120978634829,112, 34,112,20);
    win2(114, 20,114, 34,115.6151956776667, 36.1688580085211,117, 34, 117, 20);
    win2(126, 20, 129,20, 129, 32, 127.5, 34.2, 126, 32);
    win2(132,20,132,32,133.5, 34.2,135, 32,135,20);
    win2(138,20,141,20,141,32,139.5, 34.2,138, 32);

}

void cloudCircle(float b,  float cx, float cy){

    if(isDay){
    glColor3ub(255,255,255);
    }
    if(!isDay){
    glColor3ub(105,105,105);
    }

    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
         float r = sqrt(b);
         float x = r * cos(A);
         float y = r * sin(A);
        glVertex2f(x+cx, y+cy);

}
glEnd();
}
float x1 = 15;
float x2 = -114;
float x3 = 95;

float speed = 0.3f;
int direction = 1;


void drawCloud(float x, float y, float scale = 1.0f) {
    cloudCircle(9 * scale, x, y);
    cloudCircle(16 * scale, x + 5, y);
    cloudCircle(13 * scale, x + 12, y+1);
}

//obj3
void clouds(){
    drawCloud(x1, 79);

    glPushMatrix();
    glTranslatef(x2, 0, 0);
    glScalef(1.4f, 1.4f, 1.0f);
    drawCloud(x1, 79);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x3, 0, 0);
    glScalef(1.2f, 1.2f, 1.0f);
    drawCloud(x1, 79);
    glPopMatrix();
}
//F4
void cloudTimer(int value) {

    x1 += direction * speed;
    x2 += direction * speed;
    x3 += direction * speed;

    if (x1 > 150) x1 = -150;
    if (x1 < -150) x1 = 150;

    if (x2 > 150) x2 = -150;
    if (x2 < -150) x2 = 150;

    if (x3 > 150) x3 = -150;
    if (x3 < -150) x3 = 150;


    glutPostRedisplay();
    glutTimerFunc(30, cloudTimer, 0);
}
//F5
void keyboard(unsigned char key, int x, int y)
{
 // Tree Animation
    if (key == 't' || key == 'T') { // stop or start tree
        animateTree = !animateTree;
    }

 // Cloud Animation
    if (key == 'l' || key == 'L') {
        direction = -1; // move cloud left
    }
    else if (key == 'r' || key == 'R') {
        direction = 1;  // move cloud right
    }
    else if (key == 'c' || key == 'C') {
        direction = !direction ;  // start or stop cloud
    }

 // Ambulance animation
    if (key == 'a' || key == 'A') {
            ambulanceRunning = !ambulanceRunning;
    }
//Car animation
        if (key == 'b' || key == 'B'){ //start or stop car
        car1Running = !car1Running;
    }

}
//F6
void mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) { // decrease speed
            if (car1Speed > 0.5f) {
                car1Speed -= 0.5f;
            }
        }
        else if (button == GLUT_RIGHT_BUTTON) { // increase speed
            if (car1Speed < 8.0f) {
                car1Speed += 0.8f;
            }
        }
    }
}

void renderDayScene(){
    glClearColor(0.5, 0.5, 0.5, 1.0f);
    sky(135,206,235);
    sun(1,1,0);

}

void renderNightScene(){
    glClearColor(0.2, 0.2, 0.2, 1.0f);
    sky(0,0,0);
    sun(1,1,1);

    glColor3ub(255,255,255);
    glPointSize(5.0);
    glBegin(GL_POINTS);
        glVertex2f(-90, 80);
        glVertex2f(-70, 90);
        glVertex2f(-100, 90);
        glVertex2f(-10, 80);
        glVertex2f(40, 90);
        glVertex2f(60, 60);
        glVertex2f(100, 60);
    glEnd();

}
//F8
void timer2(int value) {
    timeOfDay += 0.006f;
    if (timeOfDay >= 1.0f) {
        timeOfDay = 0.0f;
        isDay = !isDay;
    }

    if (isDay) {
        renderDayScene();
    } else {
        renderNightScene();
    }

    glutTimerFunc(30, timer2, 0);
}

//F7
void specialKey(int key, int x, int y) {
    if (key == GLUT_KEY_LEFT) { // toggle day/night
        isDay = !isDay;
    }
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (isDay) {
        renderDayScene(); // Render the day scene
    } else {
        renderNightScene(); // Render the night scene
    }

    clouds();
    bulding1();
    bulding3();
    bulding2();
    medical();
    bulding4();
    mosque();

    glColor3ub(0, 0, 0);
    drawText("DHAKA MEDICAL", -30, 40);

    trees();
    ground();

    minarCircle();
    minar();
    minarBase();
    minarStair();

    renderTree();
    smallTree2();

    updateAmbulance();
    ambulance();

    updateCar1();
    car1();

    glutSwapBuffers();
}


void init() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-150, 150, -150, 150);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("shaheed minar");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKey);
    glutMouseFunc(mouse);
    glutTimerFunc(0, timer, 0);
    glutTimerFunc(0, cloudTimer, 0);
    glutTimerFunc(30, timer2, 0);
    glutMainLoop();
    return 0;
}

