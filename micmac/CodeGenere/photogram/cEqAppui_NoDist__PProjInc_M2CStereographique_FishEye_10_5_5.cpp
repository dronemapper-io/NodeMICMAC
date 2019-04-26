// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5.h"


cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,53));
   AddIntRef (cIncIntervale("Orient",53,59));
   AddIntRef (cIncIntervale("Tmp_PTer",59,62));
   Close(false);
}



void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::ComputeVal()
{
   double tmp0_ = mCompCoord[53];
   double tmp1_ = mCompCoord[54];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[59];
   double tmp4_ = mCompCoord[60];
   double tmp5_ = mCompCoord[61];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[55];
   double tmp10_ = mLocProjI_x * tmp3_;
   double tmp11_ = mLocProjP0_x + tmp10_;
   double tmp12_ = mLocProjJ_x * tmp4_;
   double tmp13_ = tmp11_ + tmp12_;
   double tmp14_ = mLocProjK_x * tmp5_;
   double tmp15_ = tmp13_ + tmp14_;
   double tmp16_ = mCompCoord[56];
   double tmp17_ = (tmp15_) - tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y * tmp3_;
   double tmp23_ = mLocProjP0_y + tmp22_;
   double tmp24_ = mLocProjJ_y * tmp4_;
   double tmp25_ = tmp23_ + tmp24_;
   double tmp26_ = mLocProjK_y * tmp5_;
   double tmp27_ = tmp25_ + tmp26_;
   double tmp28_ = mCompCoord[57];
   double tmp29_ = (tmp27_) - tmp28_;
   double tmp30_ = mLocProjI_z * tmp3_;
   double tmp31_ = mLocProjP0_z + tmp30_;
   double tmp32_ = mLocProjJ_z * tmp4_;
   double tmp33_ = tmp31_ + tmp32_;
   double tmp34_ = mLocProjK_z * tmp5_;
   double tmp35_ = tmp33_ + tmp34_;
   double tmp36_ = mCompCoord[58];
   double tmp37_ = (tmp35_) - tmp36_;
   double tmp38_ = -(tmp6_);
   double tmp39_ = tmp7_ * tmp20_;
   double tmp40_ = tmp6_ * tmp20_;
   double tmp41_ = tmp38_ * tmp19_;
   double tmp42_ = tmp39_ * tmp21_;
   double tmp43_ = tmp41_ + tmp42_;
   double tmp44_ = (tmp43_) * (tmp17_);
   double tmp45_ = tmp7_ * tmp19_;
   double tmp46_ = tmp40_ * tmp21_;
   double tmp47_ = tmp45_ + tmp46_;
   double tmp48_ = (tmp47_) * (tmp29_);
   double tmp49_ = tmp44_ + tmp48_;
   double tmp50_ = tmp2_ * tmp21_;
   double tmp51_ = tmp50_ * (tmp37_);
   double tmp52_ = tmp49_ + tmp51_;
   double tmp53_ = tmp7_ * tmp2_;
   double tmp54_ = tmp53_ * (tmp17_);
   double tmp55_ = tmp6_ * tmp2_;
   double tmp56_ = tmp55_ * (tmp29_);
   double tmp57_ = tmp54_ + tmp56_;
   double tmp58_ = tmp8_ * (tmp37_);
   double tmp59_ = tmp57_ + tmp58_;
   double tmp60_ = (tmp59_) / (tmp52_);
   double tmp61_ = tmp38_ * tmp21_;
   double tmp62_ = tmp39_ * tmp18_;
   double tmp63_ = tmp61_ + tmp62_;
   double tmp64_ = (tmp63_) * (tmp17_);
   double tmp65_ = tmp7_ * tmp21_;
   double tmp66_ = tmp40_ * tmp18_;
   double tmp67_ = tmp65_ + tmp66_;
   double tmp68_ = (tmp67_) * (tmp29_);
   double tmp69_ = tmp64_ + tmp68_;
   double tmp70_ = tmp2_ * tmp18_;
   double tmp71_ = tmp70_ * (tmp37_);
   double tmp72_ = tmp69_ + tmp71_;
   double tmp73_ = (tmp72_) / (tmp52_);

  mVal[0] = ((mLocNDP0_x + mLocNDdx_x * (tmp60_) + mLocNDdy_x * (tmp73_)) - mLocXIm) * mLocScNorm;

  mVal[1] = ((mLocNDP0_y + mLocNDdx_y * (tmp60_) + mLocNDdy_y * (tmp73_)) - mLocYIm) * mLocScNorm;

}


void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[53];
   double tmp1_ = mCompCoord[54];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[59];
   double tmp4_ = mCompCoord[60];
   double tmp5_ = mCompCoord[61];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[55];
   double tmp10_ = mLocProjI_x * tmp3_;
   double tmp11_ = mLocProjP0_x + tmp10_;
   double tmp12_ = mLocProjJ_x * tmp4_;
   double tmp13_ = tmp11_ + tmp12_;
   double tmp14_ = mLocProjK_x * tmp5_;
   double tmp15_ = tmp13_ + tmp14_;
   double tmp16_ = mCompCoord[56];
   double tmp17_ = (tmp15_) - tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y * tmp3_;
   double tmp23_ = mLocProjP0_y + tmp22_;
   double tmp24_ = mLocProjJ_y * tmp4_;
   double tmp25_ = tmp23_ + tmp24_;
   double tmp26_ = mLocProjK_y * tmp5_;
   double tmp27_ = tmp25_ + tmp26_;
   double tmp28_ = mCompCoord[57];
   double tmp29_ = (tmp27_) - tmp28_;
   double tmp30_ = mLocProjI_z * tmp3_;
   double tmp31_ = mLocProjP0_z + tmp30_;
   double tmp32_ = mLocProjJ_z * tmp4_;
   double tmp33_ = tmp31_ + tmp32_;
   double tmp34_ = mLocProjK_z * tmp5_;
   double tmp35_ = tmp33_ + tmp34_;
   double tmp36_ = mCompCoord[58];
   double tmp37_ = (tmp35_) - tmp36_;
   double tmp38_ = -(tmp6_);
   double tmp39_ = tmp7_ * tmp20_;
   double tmp40_ = tmp6_ * tmp20_;
   double tmp41_ = tmp38_ * tmp19_;
   double tmp42_ = tmp39_ * tmp21_;
   double tmp43_ = tmp41_ + tmp42_;
   double tmp44_ = (tmp43_) * (tmp17_);
   double tmp45_ = tmp7_ * tmp19_;
   double tmp46_ = tmp40_ * tmp21_;
   double tmp47_ = tmp45_ + tmp46_;
   double tmp48_ = (tmp47_) * (tmp29_);
   double tmp49_ = tmp44_ + tmp48_;
   double tmp50_ = tmp2_ * tmp21_;
   double tmp51_ = tmp50_ * (tmp37_);
   double tmp52_ = tmp49_ + tmp51_;
   double tmp53_ = tmp7_ * tmp2_;
   double tmp54_ = tmp53_ * (tmp17_);
   double tmp55_ = tmp6_ * tmp2_;
   double tmp56_ = tmp55_ * (tmp29_);
   double tmp57_ = tmp54_ + tmp56_;
   double tmp58_ = tmp8_ * (tmp37_);
   double tmp59_ = tmp57_ + tmp58_;
   double tmp60_ = -(1);
   double tmp61_ = tmp60_ * tmp6_;
   double tmp62_ = -(tmp7_);
   double tmp63_ = tmp61_ * tmp20_;
   double tmp64_ = tmp39_ * tmp18_;
   double tmp65_ = tmp38_ * tmp21_;
   double tmp66_ = tmp65_ + tmp64_;
   double tmp67_ = (tmp66_) * (tmp17_);
   double tmp68_ = tmp7_ * tmp21_;
   double tmp69_ = tmp40_ * tmp18_;
   double tmp70_ = tmp68_ + tmp69_;
   double tmp71_ = (tmp70_) * (tmp29_);
   double tmp72_ = tmp67_ + tmp71_;
   double tmp73_ = tmp2_ * tmp18_;
   double tmp74_ = tmp73_ * (tmp37_);
   double tmp75_ = tmp72_ + tmp74_;
   double tmp76_ = tmp62_ * tmp19_;
   double tmp77_ = tmp63_ * tmp21_;
   double tmp78_ = tmp76_ + tmp77_;
   double tmp79_ = (tmp78_) * (tmp17_);
   double tmp80_ = tmp61_ * tmp19_;
   double tmp81_ = tmp80_ + tmp42_;
   double tmp82_ = (tmp81_) * (tmp29_);
   double tmp83_ = tmp79_ + tmp82_;
   double tmp84_ = ElSquare(tmp52_);
   double tmp85_ = tmp60_ * tmp8_;
   double tmp86_ = -(tmp2_);
   double tmp87_ = tmp86_ * tmp7_;
   double tmp88_ = tmp86_ * tmp6_;
   double tmp89_ = tmp87_ * tmp21_;
   double tmp90_ = tmp89_ * (tmp17_);
   double tmp91_ = tmp88_ * tmp21_;
   double tmp92_ = tmp91_ * (tmp29_);
   double tmp93_ = tmp90_ + tmp92_;
   double tmp94_ = tmp85_ * tmp21_;
   double tmp95_ = tmp94_ * (tmp37_);
   double tmp96_ = tmp93_ + tmp95_;
   double tmp97_ = -(tmp21_);
   double tmp98_ = tmp60_ * tmp18_;
   double tmp99_ = tmp97_ * tmp38_;
   double tmp100_ = tmp98_ * tmp39_;
   double tmp101_ = tmp99_ + tmp100_;
   double tmp102_ = (tmp101_) * (tmp17_);
   double tmp103_ = tmp97_ * tmp7_;
   double tmp104_ = tmp98_ * tmp40_;
   double tmp105_ = tmp103_ + tmp104_;
   double tmp106_ = (tmp105_) * (tmp29_);
   double tmp107_ = tmp102_ + tmp106_;
   double tmp108_ = tmp98_ * tmp2_;
   double tmp109_ = tmp108_ * (tmp37_);
   double tmp110_ = tmp107_ + tmp109_;
   double tmp111_ = tmp60_ * (tmp43_);
   double tmp112_ = tmp60_ * (tmp47_);
   double tmp113_ = tmp60_ * tmp50_;
   double tmp114_ = mLocProjI_x * (tmp43_);
   double tmp115_ = mLocProjI_y * (tmp47_);
   double tmp116_ = tmp114_ + tmp115_;
   double tmp117_ = mLocProjI_z * tmp50_;
   double tmp118_ = tmp116_ + tmp117_;
   double tmp119_ = mLocProjJ_x * (tmp43_);
   double tmp120_ = mLocProjJ_y * (tmp47_);
   double tmp121_ = tmp119_ + tmp120_;
   double tmp122_ = mLocProjJ_z * tmp50_;
   double tmp123_ = tmp121_ + tmp122_;
   double tmp124_ = mLocProjK_x * (tmp43_);
   double tmp125_ = mLocProjK_y * (tmp47_);
   double tmp126_ = tmp124_ + tmp125_;
   double tmp127_ = mLocProjK_z * tmp50_;
   double tmp128_ = tmp126_ + tmp127_;
   double tmp129_ = (tmp59_) / (tmp52_);
   double tmp130_ = (tmp75_) / (tmp52_);
   double tmp131_ = tmp61_ * tmp2_;
   double tmp132_ = tmp131_ * (tmp17_);
   double tmp133_ = tmp53_ * (tmp29_);
   double tmp134_ = tmp132_ + tmp133_;
   double tmp135_ = (tmp134_) * (tmp52_);
   double tmp136_ = (tmp59_) * (tmp83_);
   double tmp137_ = tmp135_ - tmp136_;
   double tmp138_ = (tmp137_) / tmp84_;
   double tmp139_ = tmp62_ * tmp21_;
   double tmp140_ = tmp63_ * tmp18_;
   double tmp141_ = tmp139_ + tmp140_;
   double tmp142_ = (tmp141_) * (tmp17_);
   double tmp143_ = tmp61_ * tmp21_;
   double tmp144_ = tmp143_ + tmp64_;
   double tmp145_ = (tmp144_) * (tmp29_);
   double tmp146_ = tmp142_ + tmp145_;
   double tmp147_ = (tmp146_) * (tmp52_);
   double tmp148_ = (tmp75_) * (tmp83_);
   double tmp149_ = tmp147_ - tmp148_;
   double tmp150_ = (tmp149_) / tmp84_;
   double tmp151_ = tmp85_ * tmp7_;
   double tmp152_ = tmp151_ * (tmp17_);
   double tmp153_ = tmp85_ * tmp6_;
   double tmp154_ = tmp153_ * (tmp29_);
   double tmp155_ = tmp152_ + tmp154_;
   double tmp156_ = tmp2_ * (tmp37_);
   double tmp157_ = tmp155_ + tmp156_;
   double tmp158_ = (tmp157_) * (tmp52_);
   double tmp159_ = (tmp59_) * (tmp96_);
   double tmp160_ = tmp158_ - tmp159_;
   double tmp161_ = (tmp160_) / tmp84_;
   double tmp162_ = tmp87_ * tmp18_;
   double tmp163_ = tmp162_ * (tmp17_);
   double tmp164_ = tmp88_ * tmp18_;
   double tmp165_ = tmp164_ * (tmp29_);
   double tmp166_ = tmp163_ + tmp165_;
   double tmp167_ = tmp85_ * tmp18_;
   double tmp168_ = tmp167_ * (tmp37_);
   double tmp169_ = tmp166_ + tmp168_;
   double tmp170_ = (tmp169_) * (tmp52_);
   double tmp171_ = (tmp75_) * (tmp96_);
   double tmp172_ = tmp170_ - tmp171_;
   double tmp173_ = (tmp172_) / tmp84_;
   double tmp174_ = (tmp59_) * (tmp110_);
   double tmp175_ = -(tmp174_);
   double tmp176_ = tmp175_ / tmp84_;
   double tmp177_ = tmp98_ * tmp38_;
   double tmp178_ = tmp21_ * tmp39_;
   double tmp179_ = tmp177_ + tmp178_;
   double tmp180_ = (tmp179_) * (tmp17_);
   double tmp181_ = tmp98_ * tmp7_;
   double tmp182_ = tmp21_ * tmp40_;
   double tmp183_ = tmp181_ + tmp182_;
   double tmp184_ = (tmp183_) * (tmp29_);
   double tmp185_ = tmp180_ + tmp184_;
   double tmp186_ = tmp21_ * tmp2_;
   double tmp187_ = tmp186_ * (tmp37_);
   double tmp188_ = tmp185_ + tmp187_;
   double tmp189_ = (tmp188_) * (tmp52_);
   double tmp190_ = (tmp75_) * (tmp110_);
   double tmp191_ = tmp189_ - tmp190_;
   double tmp192_ = (tmp191_) / tmp84_;
   double tmp193_ = tmp60_ * tmp53_;
   double tmp194_ = tmp193_ * (tmp52_);
   double tmp195_ = (tmp59_) * tmp111_;
   double tmp196_ = tmp194_ - tmp195_;
   double tmp197_ = (tmp196_) / tmp84_;
   double tmp198_ = tmp60_ * (tmp66_);
   double tmp199_ = tmp198_ * (tmp52_);
   double tmp200_ = (tmp75_) * tmp111_;
   double tmp201_ = tmp199_ - tmp200_;
   double tmp202_ = (tmp201_) / tmp84_;
   double tmp203_ = tmp60_ * tmp55_;
   double tmp204_ = tmp203_ * (tmp52_);
   double tmp205_ = (tmp59_) * tmp112_;
   double tmp206_ = tmp204_ - tmp205_;
   double tmp207_ = (tmp206_) / tmp84_;
   double tmp208_ = tmp60_ * (tmp70_);
   double tmp209_ = tmp208_ * (tmp52_);
   double tmp210_ = (tmp75_) * tmp112_;
   double tmp211_ = tmp209_ - tmp210_;
   double tmp212_ = (tmp211_) / tmp84_;
   double tmp213_ = tmp85_ * (tmp52_);
   double tmp214_ = (tmp59_) * tmp113_;
   double tmp215_ = tmp213_ - tmp214_;
   double tmp216_ = (tmp215_) / tmp84_;
   double tmp217_ = tmp60_ * tmp73_;
   double tmp218_ = tmp217_ * (tmp52_);
   double tmp219_ = (tmp75_) * tmp113_;
   double tmp220_ = tmp218_ - tmp219_;
   double tmp221_ = (tmp220_) / tmp84_;
   double tmp222_ = mLocProjI_x * tmp53_;
   double tmp223_ = mLocProjI_y * tmp55_;
   double tmp224_ = tmp222_ + tmp223_;
   double tmp225_ = mLocProjI_z * tmp8_;
   double tmp226_ = tmp224_ + tmp225_;
   double tmp227_ = (tmp226_) * (tmp52_);
   double tmp228_ = (tmp59_) * (tmp118_);
   double tmp229_ = tmp227_ - tmp228_;
   double tmp230_ = (tmp229_) / tmp84_;
   double tmp231_ = mLocProjI_x * (tmp66_);
   double tmp232_ = mLocProjI_y * (tmp70_);
   double tmp233_ = tmp231_ + tmp232_;
   double tmp234_ = mLocProjI_z * tmp73_;
   double tmp235_ = tmp233_ + tmp234_;
   double tmp236_ = (tmp235_) * (tmp52_);
   double tmp237_ = (tmp75_) * (tmp118_);
   double tmp238_ = tmp236_ - tmp237_;
   double tmp239_ = (tmp238_) / tmp84_;
   double tmp240_ = mLocProjJ_x * tmp53_;
   double tmp241_ = mLocProjJ_y * tmp55_;
   double tmp242_ = tmp240_ + tmp241_;
   double tmp243_ = mLocProjJ_z * tmp8_;
   double tmp244_ = tmp242_ + tmp243_;
   double tmp245_ = (tmp244_) * (tmp52_);
   double tmp246_ = (tmp59_) * (tmp123_);
   double tmp247_ = tmp245_ - tmp246_;
   double tmp248_ = (tmp247_) / tmp84_;
   double tmp249_ = mLocProjJ_x * (tmp66_);
   double tmp250_ = mLocProjJ_y * (tmp70_);
   double tmp251_ = tmp249_ + tmp250_;
   double tmp252_ = mLocProjJ_z * tmp73_;
   double tmp253_ = tmp251_ + tmp252_;
   double tmp254_ = (tmp253_) * (tmp52_);
   double tmp255_ = (tmp75_) * (tmp123_);
   double tmp256_ = tmp254_ - tmp255_;
   double tmp257_ = (tmp256_) / tmp84_;
   double tmp258_ = mLocProjK_x * tmp53_;
   double tmp259_ = mLocProjK_y * tmp55_;
   double tmp260_ = tmp258_ + tmp259_;
   double tmp261_ = mLocProjK_z * tmp8_;
   double tmp262_ = tmp260_ + tmp261_;
   double tmp263_ = (tmp262_) * (tmp52_);
   double tmp264_ = (tmp59_) * (tmp128_);
   double tmp265_ = tmp263_ - tmp264_;
   double tmp266_ = (tmp265_) / tmp84_;
   double tmp267_ = mLocProjK_x * (tmp66_);
   double tmp268_ = mLocProjK_y * (tmp70_);
   double tmp269_ = tmp267_ + tmp268_;
   double tmp270_ = mLocProjK_z * tmp73_;
   double tmp271_ = tmp269_ + tmp270_;
   double tmp272_ = (tmp271_) * (tmp52_);
   double tmp273_ = (tmp75_) * (tmp128_);
   double tmp274_ = tmp272_ - tmp273_;
   double tmp275_ = (tmp274_) / tmp84_;

  mVal[0] = ((mLocNDP0_x + mLocNDdx_x * (tmp129_) + mLocNDdy_x * (tmp130_)) - mLocXIm) * mLocScNorm;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = 0;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = 0;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mCompDer[0][20] = 0;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mCompDer[0][45] = 0;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = 0;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = 0;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = 0;
  mCompDer[0][52] = 0;
  mCompDer[0][53] = ((tmp138_) * mLocNDdx_x + (tmp150_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][54] = ((tmp161_) * mLocNDdx_x + (tmp173_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][55] = ((tmp176_) * mLocNDdx_x + (tmp192_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][56] = ((tmp197_) * mLocNDdx_x + (tmp202_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][57] = ((tmp207_) * mLocNDdx_x + (tmp212_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][58] = ((tmp216_) * mLocNDdx_x + (tmp221_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][59] = ((tmp230_) * mLocNDdx_x + (tmp239_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][60] = ((tmp248_) * mLocNDdx_x + (tmp257_) * mLocNDdy_x) * mLocScNorm;
  mCompDer[0][61] = ((tmp266_) * mLocNDdx_x + (tmp275_) * mLocNDdy_x) * mLocScNorm;
  mVal[1] = ((mLocNDP0_y + mLocNDdx_y * (tmp129_) + mLocNDdy_y * (tmp130_)) - mLocYIm) * mLocScNorm;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = 0;
  mCompDer[1][23] = 0;
  mCompDer[1][24] = 0;
  mCompDer[1][25] = 0;
  mCompDer[1][26] = 0;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = 0;
  mCompDer[1][34] = 0;
  mCompDer[1][35] = 0;
  mCompDer[1][36] = 0;
  mCompDer[1][37] = 0;
  mCompDer[1][38] = 0;
  mCompDer[1][39] = 0;
  mCompDer[1][40] = 0;
  mCompDer[1][41] = 0;
  mCompDer[1][42] = 0;
  mCompDer[1][43] = 0;
  mCompDer[1][44] = 0;
  mCompDer[1][45] = 0;
  mCompDer[1][46] = 0;
  mCompDer[1][47] = 0;
  mCompDer[1][48] = 0;
  mCompDer[1][49] = 0;
  mCompDer[1][50] = 0;
  mCompDer[1][51] = 0;
  mCompDer[1][52] = 0;
  mCompDer[1][53] = ((tmp138_) * mLocNDdx_y + (tmp150_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][54] = ((tmp161_) * mLocNDdx_y + (tmp173_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][55] = ((tmp176_) * mLocNDdx_y + (tmp192_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][56] = ((tmp197_) * mLocNDdx_y + (tmp202_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][57] = ((tmp207_) * mLocNDdx_y + (tmp212_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][58] = ((tmp216_) * mLocNDdx_y + (tmp221_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][59] = ((tmp230_) * mLocNDdx_y + (tmp239_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][60] = ((tmp248_) * mLocNDdx_y + (tmp257_) * mLocNDdy_y) * mLocScNorm;
  mCompDer[1][61] = ((tmp266_) * mLocNDdx_y + (tmp275_) * mLocNDdy_y) * mLocScNorm;
}


void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5 Has no Der Sec");
}

void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDP0_x(double aVal){ mLocNDP0_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDP0_y(double aVal){ mLocNDP0_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDdx_x(double aVal){ mLocNDdx_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDdx_y(double aVal){ mLocNDdx_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDdy_x(double aVal){ mLocNDdy_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetNDdy_y(double aVal){ mLocNDdy_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "NDP0_x") return & mLocNDP0_x;
   if (aName == "NDP0_y") return & mLocNDP0_y;
   if (aName == "NDdx_x") return & mLocNDdx_x;
   if (aName == "NDdx_y") return & mLocNDdx_y;
   if (aName == "NDdy_x") return & mLocNDdy_x;
   if (aName == "NDdy_y") return & mLocNDdy_y;
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::mTheAuto("cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5",cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::Alloc);


cElCompiledFonc *  cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5::Alloc()
{  return new cEqAppui_NoDist__PProjInc_M2CStereographique_FishEye_10_5_5();
}


