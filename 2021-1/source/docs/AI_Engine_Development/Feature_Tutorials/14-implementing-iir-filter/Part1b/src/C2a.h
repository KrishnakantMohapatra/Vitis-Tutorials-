/****************************************************************
# Support
GitHub issues will be used for tracking requests and bugs. For questions go to [forums.xilinx.com](http://forums.xilinx.com/).

# License
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at [http://www.apache.org/licenses/LICENSE-2.0]( http://www.apache.org/licenses/LICENSE-2.0 )

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

<p align="center"><sup>XD0xx | &copy; Copyright 2021 Xilinx, Inc.</sup></p>
****************************************************************/

#ifndef __C2A_H__
  #define __C2A_H__

  // SIMD matrix of coefficients for IIR filter stage 2
  alignas(16) const float C2a[96] = {

    -6.94628195366440492897198e-01,	// Ky0_ym2
    -1.00671463181915399331956e+00,	// Ky1_ym2
    -9.76508676248098561600841e-01,	// Ky2_ym2
    -7.15947582048055530812292e-01,	// Ky3_ym2
    -3.59302052117098535966022e-01,	// Ky4_ym2
    -2.34139085923521471366282e-02,	// Ky5_ym2
    +2.15647895796987482119889e-01,	// Ky6_ym2
    +3.28799348302143024103117e-01,	// Ky7_ym2

    +1.44928558692910103289364e+00,	// Ky0_ym1
    +1.40580051711398845704082e+00,	// Ky1_ym1
    +1.03069179573162639229622e+00,	// Ky2_ym1
    +5.17258087871820704251036e-01,	// Ky3_ym1
    +3.37071094270806267956253e-02,	// Ky4_ym1
    -3.10450824247388568188910e-01,	// Ky5_ym1
    -4.73345813624351852144656e-01,	// Ky6_ym1
    -4.70365369522014131753451e-01,	// Ky7_ym1

    +1.29627982214088416368369e-01,	// Ky0_xm2
    +1.87867966285580195728855e-01,	// Ky1_xm2
    +1.82231084429008372005399e-01,	// Ky2_xm2
    +1.33606497765306114766659e-01,	// Ky3_xm2
    +6.70511222147417568217875e-02,	// Ky4_xm2
    +4.36938458130193847078759e-03,	// Ky5_xm2
    -4.02431139238895660414919e-02,	// Ky6_xm2
    -6.13588627096106828395783e-02,	// Ky7_xm2

    -1.39133559908373224262013e-02,	// Ky0_xm1
    +1.09463555910754212208147e-01,	// Ky1_xm1
    +1.68308563238870056988361e-01,	// Ky2_xm1
    +1.67890702558158855239867e-01,	// Ky3_xm1
    +1.26409701849605649037755e-01,	// Ky4_xm1
    +6.65821432018606773617364e-02,	// Ky5_xm1
    +8.68879741670472612036225e-03,	// Ky6_xm1
    -3.36572851121614280422989e-02,	// Ky7_xm1

    +1.29627982214088388612794e-01,	// Ky0_x0
    +1.73954610294742822995673e-01,	// Ky1_x0
    +2.91694640339762556457970e-01,	// Ky2_x0
    +3.01915061004176143999445e-01,	// Ky3_x0
    +2.34941824772900598183867e-01,	// Ky4_x0
    +1.30779086430907603988416e-01,	// Ky5_x0
    +2.63390292779711113202445e-02,	// Ky6_x0
    -5.26700652929059445761517e-02,	// Ky7_x0

    +0.00000000000000000000000e+00,	// Ky0_x1
    +1.29627982214088388612794e-01,	// Ky1_x1
    +1.73954610294742822995673e-01,	// Ky2_x1
    +2.91694640339762556457970e-01,	// Ky3_x1
    +3.01915061004176143999445e-01,	// Ky4_x1
    +2.34941824772900598183867e-01,	// Ky5_x1
    +1.30779086430907603988416e-01,	// Ky6_x1
    +2.63390292779711113202445e-02,	// Ky7_x1

    +0.00000000000000000000000e+00,	// Ky0_x2
    +0.00000000000000000000000e+00,	// Ky1_x2
    +1.29627982214088388612794e-01,	// Ky2_x2
    +1.73954610294742822995673e-01,	// Ky3_x2
    +2.91694640339762556457970e-01,	// Ky4_x2
    +3.01915061004176143999445e-01,	// Ky5_x2
    +2.34941824772900598183867e-01,	// Ky6_x2
    +1.30779086430907603988416e-01,	// Ky7_x2

    +0.00000000000000000000000e+00,	// Ky0_x3
    +0.00000000000000000000000e+00,	// Ky1_x3
    +0.00000000000000000000000e+00,	// Ky2_x3
    +1.29627982214088388612794e-01,	// Ky3_x3
    +1.73954610294742822995673e-01,	// Ky4_x3
    +2.91694640339762556457970e-01,	// Ky5_x3
    +3.01915061004176143999445e-01,	// Ky6_x3
    +2.34941824772900598183867e-01,	// Ky7_x3

    +0.00000000000000000000000e+00,	// Ky0_x4
    +0.00000000000000000000000e+00,	// Ky1_x4
    +0.00000000000000000000000e+00,	// Ky2_x4
    +0.00000000000000000000000e+00,	// Ky3_x4
    +1.29627982214088388612794e-01,	// Ky4_x4
    +1.73954610294742822995673e-01,	// Ky5_x4
    +2.91694640339762556457970e-01,	// Ky6_x4
    +3.01915061004176143999445e-01,	// Ky7_x4

    +0.00000000000000000000000e+00,	// Ky0_x5
    +0.00000000000000000000000e+00,	// Ky1_x5
    +0.00000000000000000000000e+00,	// Ky2_x5
    +0.00000000000000000000000e+00,	// Ky3_x5
    +0.00000000000000000000000e+00,	// Ky4_x5
    +1.29627982214088388612794e-01,	// Ky5_x5
    +1.73954610294742822995673e-01,	// Ky6_x5
    +2.91694640339762556457970e-01,	// Ky7_x5

    +0.00000000000000000000000e+00,	// Ky0_x6
    +0.00000000000000000000000e+00,	// Ky1_x6
    +0.00000000000000000000000e+00,	// Ky2_x6
    +0.00000000000000000000000e+00,	// Ky3_x6
    +0.00000000000000000000000e+00,	// Ky4_x6
    +0.00000000000000000000000e+00,	// Ky5_x6
    +1.29627982214088388612794e-01,	// Ky6_x6
    +1.73954610294742822995673e-01,	// Ky7_x6

    +0.00000000000000000000000e+00,	// Ky0_x7
    +0.00000000000000000000000e+00,	// Ky1_x7
    +0.00000000000000000000000e+00,	// Ky2_x7
    +0.00000000000000000000000e+00,	// Ky3_x7
    +0.00000000000000000000000e+00,	// Ky4_x7
    +0.00000000000000000000000e+00,	// Ky5_x7
    +0.00000000000000000000000e+00,	// Ky6_x7
    +1.29627982214088388612794e-01	// Ky7_x7

  };

#endif // __C2A_H__