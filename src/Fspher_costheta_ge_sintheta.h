/*
  Program generated by Fspher.nb
  Function works for m in [0,n] and n<=10
*/
double Fspher_costheta_ge_sintheta(const int &n, const int &m, const double &theta) {

  double X[10], Y[10];

  if (n!=0) {

    std::sincos(theta, Y, X);
    for (int i = 1; i < n; ++i) {X[i]=X[i-1]*(*X); Y[i]=Y[i-1]*(*Y);}

  }

  switch (n) {
    case 0:
      switch (m) {
        case 0: return 0.282094791773878143;
      }

    case 1:
      switch (m) {
        case 0: return 0.488602511902919922*X[0];
        case 1: return -0.345494149471335479*Y[0];
      }

    case 2:
      switch (m) {
        case 0: return 0.315391565252520006*(2 - 3*Y[1]);
        case 1: return -0.772548404046379161*X[0]*Y[0];
        case 2: return 0.38627420202318958*Y[1];
      }

    case 3:
      switch (m) {
        case 0: return 0.373176332590115391*X[0]*(2 - 5*Y[1]);
        case 1: return 0.323180184114150653*Y[0]*(-4 + 5*Y[1]);
        case 2: return 1.02198547643328236*X[0]*Y[1];
        case 3: return -0.41722382363278409*Y[2];
      }

    case 4:
      switch (m) {
        case 0: return 0.105785546915204304*(8 - 40*Y[1] + 35*Y[3]);
        case 1: return 0.473087347878780009*X[0]*Y[0]*(-4 + 7*Y[1]);
        case 2: return -0.334523271778644584*Y[1]*(-6 + 7*Y[1]);
        case 3: return -1.25167147089835227*X[0]*Y[2];
        case 4: return 0.442532692444982633*Y[3];
      }

    case 5:
      switch (m) {
        case 0: return 0.116950322453423596*X[0]*(8 - 56*Y[1] + 63*Y[3]);
        case 1: return -0.320281648576215128*Y[0]*(8 - 28*Y[1] + 21*Y[3]);
        case 2: return 1.69477118326089928*X[0]*(2 - 3*Y[1])*Y[1];
        case 3: return 0.345943719146840213*(-8 + 9*Y[1])*Y[2];
        case 4: return 1.46771489830575116*X[0]*Y[3];
        case 5: return -0.464132203440858161*Y[4];
      }

    case 6:
      switch (m) {
        case 0: return 0.0635692022676284259*(16 - 168*Y[1] + 378*Y[3] - 231*Y[5]);
        case 1: return -0.411975516301140777*X[0]*Y[0]*(8 - 36*Y[1] + 33*Y[3]);
        case 2: return 0.325695242933857869*Y[1]*(16 - 48*Y[1] + 33*Y[3]);
        case 3: return 0.651390485867715738*X[0]*(-8 + 11*Y[1])*Y[2];
        case 4: return -0.356781262853998028*(-10 + 11*Y[1])*Y[3];
        case 5: return -1.6734524581000979*X[0]*Y[4];
        case 6: return 0.483084113580066227*Y[5];
      }

    case 7:
      switch (m) {
        case 0: return 0.0682842769120049419*X[0]*(16 - 216*Y[1] + 594*Y[3] - 429*Y[5]);
        case 1: return 0.0638740922770801477*Y[0]*(-64 + 432*Y[1] - 792*Y[3] + 429*Y[5]);
        case 2: return 0.156458933862294034*X[0]*Y[1]*(48 - 176*Y[1] + 143*Y[3]);
        case 3: return -0.110633173111245658*Y[2]*(80 - 220*Y[1] + 143*Y[3]);
        case 4: return -0.733857449152875582*X[0]*(-10 + 13*Y[1])*Y[3];
        case 5: return 0.366928724576437791*(-12 + 13*Y[1])*Y[4];
        case 6: return 1.87097672671296874*X[0]*Y[5];
        case 7: return -0.500039563570550664*Y[6];
      }

    case 8:
      switch (m) {
        case 0: return 0.00908677049156499629*(128 - 2304*Y[1] + 9504*Y[3] - 13728*Y[5] + 6435*Y[7]);
        case 1: return 0.0771038044040571207*X[0]*Y[0]*(-64 + 528*Y[1] - 1144*Y[3] + 715*Y[5]);
        case 2: return -0.322548355192883008*Y[1]*(-32 + 176*Y[1] - 286*Y[3] + 143*Y[5]);
        case 3: return -0.873465074979714118*X[0]*Y[2]*(16 - 52*Y[1] + 39*Y[3]);
        case 4: return 0.338291568889024547*Y[3]*(40 - 104*Y[1] + 65*Y[3]);
        case 5: return 2.43945519537307291*X[0]*(-4 + 5*Y[1])*Y[4];
        case 6: return 0.376416108728494564*(14 - 15*Y[1])*Y[5];
        case 7: return -2.06171593758913724*X[0]*Y[6];
        case 8: return 0.51542898439728431*Y[7];
      }

    case 9:
      switch (m) {
        case 0: return 0.00960642726438659162*X[0]*(128 - 2816*Y[1] + 13728*Y[3] - 22880*Y[5] + 12155*Y[7]);
        case 1: return -0.0455672854983032341*Y[0]*(128 - 1408*Y[1] + 4576*Y[3] - 5720*Y[5] + 2431*Y[7]);
        case 2: return -0.427459028067230214*X[0]*Y[1]*(-32 + 208*Y[1] - 390*Y[3] + 221*Y[5]);
        case 3: return 0.326477225435055903*Y[2]*(-64 + 312*Y[1] - 468*Y[3] + 221*Y[5]);
        case 4: return 2.88336878334462108*X[0]*Y[3]*(8 - 24*Y[1] + 17*Y[3]);
        case 5: return -0.3446284861115194*(56 - 140*Y[1] + 85*Y[3])*Y[4];
        case 6: return 0.889826924892392468*X[0]*(14 - 17*Y[1])*Y[5];
        case 7: return 0.385306360964099774*(-16 + 17*Y[1])*Y[6];
        case 8: return 2.24670285555956489*X[0]*Y[7];
        case 9: return -0.52955294149244958*Y[8];
      }

    case 10:
      switch (m) {
        case 0: return 0.00504969037678360395*(256 - 7040*Y[1] + 45760*Y[3] - 114400*Y[5] + 121550*Y[7] - 46189*Y[9]);
        case 1: return -0.0529615994769031024*X[0]*Y[0]*(128 - 1664*Y[1] + 6240*Y[3] - 8840*Y[5] + 4199*Y[7]);
        case 2: return 0.0458660905720547238*Y[1]*(384 - 3328*Y[1] + 9360*Y[3] - 10608*Y[5] + 4199*Y[7]);
        case 3: return 0.467744181678242184*X[0]*Y[2]*(-64 + 360*Y[1] - 612*Y[3] + 323*Y[5]);
        case 4: return -0.330745082725237528*Y[3]*(-112 + 504*Y[1] - 714*Y[3] + 323*Y[5]);
        case 5: return -0.209181557262512238*X[0]*(168 - 476*Y[1] + 323*Y[3])*Y[4];
        case 6: return 0.116936045419560546*(224 - 544*Y[1] + 323*Y[3])*Y[5];
        case 7: return 0.964279333413744709*X[0]*(-16 + 19*Y[1])*Y[6];
        case 8: return 0.39366538939579466*(18 - 19*Y[1])*Y[7];
        case 9: return -2.42671643887567141*X[0]*Y[8];
        case 10: return 0.542630291944221461*Y[9];
      }

  }

  return 0.0;
}

long double Fspher_costheta_ge_sintheta(const int &n, const int &m, const long double &theta) {

  long double X[10], Y[10];

  if (n!=0) {

    std::sincos(theta, Y, X);
    for (int i = 1; i < n; ++i) {X[i]=X[i-1]*(*X); Y[i]=Y[i-1]*(*Y);}

  }

  switch (n) {
    case 0:
      switch (m) {
        case 0: return 0.282094791773878143474L;
      }

    case 1:
      switch (m) {
        case 0: return 0.4886025119029199215864L*X[0];
        case 1: return -0.3454941494713354792652L*Y[0];
      }

    case 2:
      switch (m) {
        case 0: return 0.3153915652525200060309L*(2 - 3*Y[1]);
        case 1: return -0.7725484040463791606844L*X[0]*Y[0];
        case 2: return 0.3862742020231895803422L*Y[1];
      }

    case 3:
      switch (m) {
        case 0: return 0.3731763325901153914144L*X[0]*(2 - 5*Y[1]);
        case 1: return 0.3231801841141506530074L*Y[0]*(-4 + 5*Y[1]);
        case 2: return 1.021985476433282363396L*X[0]*Y[1];
        case 3: return -0.4172238236327840897244L*Y[2];
      }

    case 4:
      switch (m) {
        case 0: return 0.1057855469152043038028L*(8 - 40*Y[1] + 35*Y[3]);
        case 1: return 0.4730873478787800090463L*X[0]*Y[0]*(-4 + 7*Y[1]);
        case 2: return -0.3345232717786445839761L*Y[1]*(-6 + 7*Y[1]);
        case 3: return -1.251671470898352269173L*X[0]*Y[2];
        case 4: return 0.4425326924449826327592L*Y[3];
      }

    case 5:
      switch (m) {
        case 0: return 0.1169503224534235964397L*X[0]*(8 - 56*Y[1] + 63*Y[3]);
        case 1: return -0.3202816485762151275372L*Y[0]*(8 - 28*Y[1] + 21*Y[3]);
        case 2: return 1.694771183260899275816L*X[0]*(2 - 3*Y[1])*Y[1];
        case 3: return 0.345943719146840213166L*(-8 + 9*Y[1])*Y[2];
        case 4: return 1.467714898305751163052L*X[0]*Y[3];
        case 5: return -0.464132203440858160658L*Y[4];
      }

    case 6:
      switch (m) {
        case 0: return 0.06356920226762842593283L*(16 - 168*Y[1] + 378*Y[3] - 231*Y[5]);
        case 1: return -0.4119755163011407774037L*X[0]*Y[0]*(8 - 36*Y[1] + 33*Y[3]);
        case 2: return 0.3256952429338578687834L*Y[1]*(16 - 48*Y[1] + 33*Y[3]);
        case 3: return 0.6513904858677157375668L*X[0]*(-8 + 11*Y[1])*Y[2];
        case 4: return -0.3567812628539980276179L*(-10 + 11*Y[1])*Y[3];
        case 5: return -1.673452458100097901243L*X[0]*Y[4];
        case 6: return 0.483084113580066226973L*Y[5];
      }

    case 7:
      switch (m) {
        case 0: return 0.06828427691200494190896L*X[0]*(16 - 216*Y[1] + 594*Y[3] - 429*Y[5]);
        case 1: return 0.06387409227708014771226L*Y[0]*(-64 + 432*Y[1] - 792*Y[3] + 429*Y[5]);
        case 2: return 0.1564589338622940336467L*X[0]*Y[1]*(48 - 176*Y[1] + 143*Y[3]);
        case 3: return -0.1106331731112456581898L*Y[2]*(80 - 220*Y[1] + 143*Y[3]);
        case 4: return -0.733857449152875581526L*X[0]*(-10 + 13*Y[1])*Y[3];
        case 5: return 0.366928724576437790763L*(-12 + 13*Y[1])*Y[4];
        case 6: return 1.870976726712968736762L*X[0]*Y[5];
        case 7: return -0.5000395635705506640113L*Y[6];
      }

    case 8:
      switch (m) {
        case 0: return 0.009086770491564996293837L*(128 - 2304*Y[1] + 9504*Y[3] - 13728*Y[5] + 6435*Y[7]);
        case 1: return 0.07710380440405712065935L*X[0]*Y[0]*(-64 + 528*Y[1] - 1144*Y[3] + 715*Y[5]);
        case 2: return -0.3225483551928830083232L*Y[1]*(-32 + 176*Y[1] - 286*Y[3] + 143*Y[5]);
        case 3: return -0.8734650749797141184436L*X[0]*Y[2]*(16 - 52*Y[1] + 39*Y[3]);
        case 4: return 0.3382915688890245473738L*Y[3]*(40 - 104*Y[1] + 65*Y[3]);
        case 5: return 2.439455195373072912414L*X[0]*(-4 + 5*Y[1])*Y[4];
        case 6: return 0.3764161087284945637195L*(14 - 15*Y[1])*Y[5];
        case 7: return -2.0617159375891372389L*X[0]*Y[6];
        case 8: return 0.515428984397284309725L*Y[7];
      }

    case 9:
      switch (m) {
        case 0: return 0.009606427264386591622935L*X[0]*(128 - 2816*Y[1] + 13728*Y[3] - 22880*Y[5] + 12155*Y[7]);
        case 1: return -0.04556728549830323414764L*Y[0]*(128 - 1408*Y[1] + 4576*Y[3] - 5720*Y[5] + 2431*Y[7]);
        case 2: return -0.4274590280672302136148L*X[0]*Y[1]*(-32 + 208*Y[1] - 390*Y[3] + 221*Y[5]);
        case 3: return 0.3264772254350559025029L*Y[2]*(-64 + 312*Y[1] - 468*Y[3] + 221*Y[5]);
        case 4: return 2.883368783344621075758L*X[0]*Y[3]*(8 - 24*Y[1] + 17*Y[3]);
        case 5: return -0.3446284861115193998846L*(56 - 140*Y[1] + 85*Y[3])*Y[4];
        case 6: return 0.8898269248923924677614L*X[0]*(14 - 17*Y[1])*Y[5];
        case 7: return 0.3853063609640997736719L*(-16 + 17*Y[1])*Y[6];
        case 8: return 2.246702855559564889651L*X[0]*Y[7];
        case 9: return -0.5295529414924495795502L*Y[8];
      }

    case 10:
      switch (m) {
        case 0: return 0.005049690376783603953241L*(256 - 7040*Y[1] + 45760*Y[3] - 114400*Y[5] + 121550*Y[7] - 46189*Y[9]);
        case 1: return -0.05296159947690310236924L*X[0]*Y[0]*(128 - 1664*Y[1] + 6240*Y[3] - 8840*Y[5] + 4199*Y[7]);
        case 2: return 0.04586609057205472384538L*Y[1]*(384 - 3328*Y[1] + 9360*Y[3] - 10608*Y[5] + 4199*Y[7]);
        case 3: return 0.4677441816782421841904L*X[0]*Y[2]*(-64 + 360*Y[1] - 612*Y[3] + 323*Y[5]);
        case 4: return -0.3307450827252375277463L*Y[3]*(-112 + 504*Y[1] - 714*Y[3] + 323*Y[5]);
        case 5: return -0.2091815572625122376554L*X[0]*(168 - 476*Y[1] + 323*Y[3])*Y[4];
        case 6: return 0.1169360454195605460476L*(224 - 544*Y[1] + 323*Y[3])*Y[5];
        case 7: return 0.9642793334137447090895L*X[0]*(-16 + 19*Y[1])*Y[6];
        case 8: return 0.3936653893957946601992L*(18 - 19*Y[1])*Y[7];
        case 9: return -2.426716438875671414852L*X[0]*Y[8];
        case 10: return 0.5426302919442214607382L*Y[9];
      }

  }

  return 0.0L;
}

#if defined(_QUAD)
quad Fspher_costheta_ge_sintheta(const int &n, const int &m, const quad &theta) {

  quad X[10], Y[10];

  if (n!=0) {

    std::sincos(theta, Y, X);
    for (int i = 1; i < n; ++i) {X[i]=X[i-1]*(*X); Y[i]=Y[i-1]*(*Y);}

  }

  switch (n) {
    case 0:
      switch (m) {
        case 0: return 0.2820947917738781434740397257803862929Q;
      }

    case 1:
      switch (m) {
        case 0: return 0.4886025119029199215863846228383470046Q*X[0];
        case 1: return -0.3454941494713354792652446460318896831Q*Y[0];
      }

    case 2:
      switch (m) {
        case 0: return 0.3153915652525200060308936902957104933Q*(2 - 3*Y[1]);
        case 1: return -0.7725484040463791606843854706229778262Q*X[0]*Y[0];
        case 2: return 0.3862742020231895803421927353114889131Q*Y[1];
      }

    case 3:
      switch (m) {
        case 0: return 0.3731763325901153914143959131989972678Q*X[0]*(2 - 5*Y[1]);
        case 1: return 0.3231801841141506530073941633302585841Q*Y[0]*(-4 + 5*Y[1]);
        case 2: return 1.021985476433282363396114491700468591Q*X[0]*Y[1];
        case 3: return -0.4172238236327840897244270157367259007Q*Y[2];
      }

    case 4:
      switch (m) {
        case 0: return 0.1057855469152043038027648971676448598Q*(8 - 40*Y[1] + 35*Y[3]);
        case 1: return 0.47308734787878000904634053544356574Q*X[0]*Y[0]*(-4 + 7*Y[1]);
        case 2: return -0.3345232717786445839760561948559529857Q*Y[1]*(-6 + 7*Y[1]);
        case 3: return -1.251671470898352269173281047210177702Q*X[0]*Y[2];
        case 4: return 0.4425326924449826327592077081561215125Q*Y[3];
      }

    case 5:
      switch (m) {
        case 0: return 0.1169503224534235964397151920902780822Q*X[0]*(8 - 56*Y[1] + 63*Y[3]);
        case 1: return -0.3202816485762151275371614328469480112Q*Y[0]*(8 - 28*Y[1] + 21*Y[3]);
        case 2: return 1.694771183260899275815691555510769158Q*X[0]*(2 - 3*Y[1])*Y[1];
        case 3: return 0.3459437191468402131659664204325332115Q*(-8 + 9*Y[1])*Y[2];
        case 4: return 1.467714898305751163052026147528871839Q*X[0]*Y[3];
        case 5: return -0.4641322034408581606579986055338926516Q*Y[4];
      }

    case 6:
      switch (m) {
        case 0: return 0.06356920226762842593282703106055636315Q*(16 - 168*Y[1] + 378*Y[3] - 231*Y[5]);
        case 1: return -0.4119755163011407774037479850727788164Q*X[0]*Y[0]*(8 - 36*Y[1] + 33*Y[3]);
        case 2: return 0.3256952429338578687833976039498176629Q*Y[1]*(16 - 48*Y[1] + 33*Y[3]);
        case 3: return 0.6513904858677157375667952078996353257Q*X[0]*(-8 + 11*Y[1])*Y[2];
        case 4: return -0.3567812628539980276178671897471599056Q*(-10 + 11*Y[1])*Y[3];
        case 5: return -1.673452458100097901242992085976027083Q*X[0]*Y[4];
        case 6: return 0.4830841135800662269729611232353985951Q*Y[5];
      }

    case 7:
      switch (m) {
        case 0: return 0.06828427691200494190896160661266802517Q*X[0]*(16 - 216*Y[1] + 594*Y[3] - 429*Y[5]);
        case 1: return 0.06387409227708014771225715573127928697Q*Y[0]*(-64 + 432*Y[1] - 792*Y[3] + 429*Y[5]);
        case 2: return 0.1564589338622940336466601309012722127Q*X[0]*Y[1]*(48 - 176*Y[1] + 143*Y[3]);
        case 3: return -0.1106331731112456581898019270390303781Q*Y[2]*(80 - 220*Y[1] + 143*Y[3]);
        case 4: return -0.7338574491528755815260130737644359195Q*X[0]*(-10 + 13*Y[1])*Y[3];
        case 5: return 0.3669287245764377907630065368822179597Q*(-12 + 13*Y[1])*Y[4];
        case 6: return 1.870976726712968736761698224238043685Q*X[0]*Y[5];
        case 7: return -0.5000395635705506640113342640447765657Q*Y[6];
      }

    case 8:
      switch (m) {
        case 0: return 0.00908677049156499629383734324279580373Q*(128 - 2304*Y[1] + 9504*Y[3] - 13728*Y[5] + 6435*Y[7]);
        case 1: return 0.07710380440405712065934817099569413841Q*X[0]*Y[0]*(-64 + 528*Y[1] - 1144*Y[3] + 715*Y[5]);
        case 2: return -0.3225483551928830083231698908667884667Q*Y[1]*(-32 + 176*Y[1] - 286*Y[3] + 143*Y[5]);
        case 3: return -0.8734650749797141184435640907846032384Q*X[0]*Y[2]*(16 - 52*Y[1] + 39*Y[3]);
        case 4: return 0.338291568889024547373816097099268763Q*Y[3]*(40 - 104*Y[1] + 65*Y[3]);
        case 5: return 2.439455195373072912413942750649892657Q*X[0]*(-4 + 5*Y[1])*Y[4];
        case 6: return 0.3764161087284945637194861652659241916Q*(14 - 15*Y[1])*Y[5];
        case 7: return -2.061715937589137238900061517097635127Q*X[0]*Y[6];
        case 8: return 0.5154289843972843097250153792744087818Q*Y[7];
      }

    case 9:
      switch (m) {
        case 0: return 0.009606427264386591622935379442831634149Q*X[0]*(128 - 2816*Y[1] + 13728*Y[3] - 22880*Y[5] + 12155*Y[7]);
        case 1: return -0.04556728549830323414763759995698202081Q*Y[0]*(128 - 1408*Y[1] + 4576*Y[3] - 5720*Y[5] + 2431*Y[7]);
        case 2: return -0.4274590280672302136147581203608627233Q*X[0]*Y[1]*(-32 + 208*Y[1] - 390*Y[3] + 221*Y[5]);
        case 3: return 0.3264772254350559025028866699547274086Q*Y[2]*(-64 + 312*Y[1] - 468*Y[3] + 221*Y[5]);
        case 4: return 2.88336878334462107575828035230041286Q*X[0]*Y[3]*(8 - 24*Y[1] + 17*Y[3]);
        case 5: return -0.3446284861115193998845720691006091384Q*(56 - 140*Y[1] + 85*Y[3])*Y[4];
        case 6: return 0.8898269248923924677614393505624882445Q*X[0]*(14 - 17*Y[1])*Y[5];
        case 7: return 0.3853063609640997736718892525212360335Q*(-16 + 17*Y[1])*Y[6];
        case 8: return 2.246702855559564889650833827532072076Q*X[0]*Y[7];
        case 9: return -0.5295529414924495795501886531365751707Q*Y[8];
      }

    case 10:
      switch (m) {
        case 0: return 0.005049690376783603953240533802035290376Q*(256 - 7040*Y[1] + 45760*Y[3] - 114400*Y[5] + 121550*Y[7] - 46189*Y[9]);
        case 1: return -0.05296159947690310236924036110971153619Q*X[0]*Y[0]*(128 - 1664*Y[1] + 6240*Y[3] - 8840*Y[5] + 4199*Y[7]);
        case 2: return 0.04586609057205472384537581711027724497Q*Y[1]*(384 - 3328*Y[1] + 9360*Y[3] - 10608*Y[5] + 4199*Y[7]);
        case 3: return 0.4677441816782421841904245560595109213Q*X[0]*Y[2]*(-64 + 360*Y[1] - 612*Y[3] + 323*Y[5]);
        case 4: return -0.3307450827252375277462750611247400631Q*Y[3]*(-112 + 504*Y[1] - 714*Y[3] + 323*Y[5]);
        case 5: return -0.2091815572625122376553740107470033854Q*X[0]*(168 - 476*Y[1] + 323*Y[3])*Y[4];
        case 6: return 0.1169360454195605460476061390148777303Q*(224 - 544*Y[1] + 323*Y[3])*Y[5];
        case 7: return 0.9642793334137447090894870239870757481Q*X[0]*(-16 + 19*Y[1])*Y[6];
        case 8: return 0.3936653893957946601992323349452103516Q*(18 - 19*Y[1])*Y[7];
        case 9: return -2.426716438875671414852076751225263282Q*X[0]*Y[8];
        case 10: return 0.5426302919442214607381833881851072394Q*Y[9];
      }

  }

  return 0.0Q;
}

#endif // if defined(_QUAD)
