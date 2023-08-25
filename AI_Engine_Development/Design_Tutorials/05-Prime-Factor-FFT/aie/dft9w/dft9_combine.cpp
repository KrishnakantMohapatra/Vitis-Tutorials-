//
// Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved.
// SPDX-License-Identifier: MIT
//
// Author: Mark Rollins

#include <adf.h>
#include <aie_api/aie.hpp>

#include "dft9_combine.h"


// ------------------------------------------------------------
// Constructor
// ------------------------------------------------------------

template<class TT_DATA, unsigned NFFT>
dft9_combine<TT_DATA,NFFT>::dft9_combine( void )
{
  aie::set_rounding(aie::rounding_mode::symmetric_inf);
  aie::set_saturation(aie::saturation_mode::saturate);
}

// ------------------------------------------------------------
// Run
// ------------------------------------------------------------

template<class TT_DATA, unsigned NFFT>
void dft9_combine<TT_DATA,NFFT>
::run(  input_buffer<TT_DATA,extents<NSAMP_I> >& __restrict sig0_i,
        input_buffer<TT_DATA,extents<NSAMP_I> >& __restrict sig1_i,
        input_buffer<TT_DATA,extents<NSAMP_I> >& __restrict sig2_i,
       output_stream<TT_DATA>* __restrict sig0_o,
       output_stream<TT_DATA>* __restrict sig1_o )
{
  auto it0ss0 = aie::begin_vector<4,aie_dm_resource::a>( sig0_i );
  auto it1ss0 = aie::begin_vector<4,aie_dm_resource::b>( sig1_i );
  auto it2ss0 = aie::begin_vector<4,aie_dm_resource::b>( sig2_i );
  auto it0ss1 = aie::begin_vector<4,aie_dm_resource::a>( sig0_i );
  auto it1ss1 = aie::begin_vector<4,aie_dm_resource::b>( sig1_i );
  auto it2ss1 = aie::begin_vector<4,aie_dm_resource::b>( sig2_i );
  it0ss1 += 4;
  it1ss1 += 4;
  it2ss1 += 4;
  aie::vector<TT_DATA,16> buffA = aie::zeros<TT_DATA,16>();
  aie::vector<TT_DATA,16> buffB = aie::zeros<TT_DATA,16>();
  // Loop over complete set of DFT-9 required for PFA-1008 transform:
  // --> We will run 7*16 = 112 transforms in total for a complete PFA-1008
  for (unsigned rr=0; rr < NFFT/8; rr++)
    chess_loop_range(NFFT/8,)
    chess_prepare_for_pipelining
  {
    // Buffer 'sig0_i' stores 4 samples of transforms in order a, c, e, g, b ,d ,f ,h
    // Buffer 'sig1_i' stores 4 samples of transforms in order a, c, e, g, b ,d ,f ,h
    // Buffer 'sig2_i' stores 1 samples of transforms in order a, c, e, g, b ,d ,f ,h
    // We want 'sig0_o' to deliver 9-sample transforms in order a, c, e, g
    // We want 'sig1_o' to deliver 9-sample transforms in order b, d, f, h
    buffA.insert(0,*it0ss0++);
    buffA.insert(1,*it1ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(0));
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(1));
    buffA.insert(2,*it2ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.get(8));
    buffB.insert(0,*it0ss1++);
    buffB.insert(1,*it1ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(0));
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(1));
    buffB.insert(2,*it2ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.get(8));
    // ------------------------------------------------------------
    buffA.insert(0,*it0ss0++);
    buffA.insert(1,*it1ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(0));
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(1));
    buffA.insert(2,*it2ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.get(8));
    buffB.insert(0,*it0ss1++);
    buffB.insert(1,*it1ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(0));
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(1));
    buffB.insert(2,*it2ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.get(8));
    // ------------------------------------------------------------
    buffA.insert(0,*it0ss0++);
    buffA.insert(1,*it1ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(0));
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(1));
    buffA.insert(2,*it2ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.get(8));
    buffB.insert(0,*it0ss1++);
    buffB.insert(1,*it1ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(0));
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(1));
    buffB.insert(2,*it2ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.get(8));
    // ------------------------------------------------------------
    buffA.insert(0,*it0ss0++);
    buffA.insert(1,*it1ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(0));
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.template extract<4>(1));
    buffA.insert(2,*it2ss0++);
    writeincr<aie_stream_resource_out::a>(sig0_o,buffA.get(8));
    buffB.insert(0,*it0ss1++);
    buffB.insert(1,*it1ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(0));
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.template extract<4>(1));
    buffB.insert(2,*it2ss1++);
    writeincr<aie_stream_resource_out::b>(sig1_o,buffB.get(8));
    // ------------------------------------------------------------
    it0ss0 += 4;
    it1ss0 += 4;
    it2ss0 += 4;
    it0ss1 += 4;
    it1ss1 += 4;
    it2ss1 += 4;
  } // rr
}


