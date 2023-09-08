//
// Copyright (fid,C) 2023, Advanced Micro Devices, Inc. All rights reserved.
// SPDX-License-Identifier: MIT
//
// Author: Mark Rollins

#define PERM_O_ADDR {\
   0,\
  71,\
 142,\
 213,\
 284,\
 355,\
 426,\
 490,\
 561,\
 569,\
 640,\
 711,\
 782,\
 853,\
 917,\
 988,\
  51,\
 122,\
 130,\
 201,\
 272,\
 336,\
 407,\
 478,\
 549,\
 620,\
 691,\
 699,\
 763,\
 834,\
 905,\
 976,\
  39,\
 110,\
 181,\
 245,\
 253,\
 324,\
 395,\
 466,\
 537,\
 608,\
 672,\
 743,\
 814,\
 822,\
 893,\
 964,\
  27,\
  91,\
 162,\
 233,\
 304,\
 375,\
 383,\
 454,\
 518,\
 589,\
 660,\
 731,\
 802,\
 873,\
 944,\
 945,\
   8,\
  79,\
 150,\
 221,\
 292,\
 363,\
 427,\
 498,\
 506,\
 577,\
 648,\
 719,\
 790,\
 854,\
 925,\
 996,\
  59,\
  67,\
 138,\
 209,\
 273,\
 344,\
 415,\
 486,\
 557,\
 628,\
 636,\
 700,\
 771,\
 842,\
 913,\
 984,\
  47,\
 118,\
 182,\
 190,\
 261,\
 332,\
 403,\
 474,\
 545,\
 609,\
 680,\
 751,\
 759,\
 830,\
 901,\
 972,\
  28,\
  99,\
 170,\
 241,\
 312,\
 320,\
 391,\
 455,\
 526,\
 597,\
 668,\
 739,\
 810,\
 881,\
 882,\
 953,\
  16,\
  87,\
 158,\
 229,\
 300,\
 364,\
 435,\
 443,\
 514,\
 585,\
 656,\
 727,\
 791,\
 862,\
 933,\
1004,\
   4,\
  75,\
 146,\
 210,\
 281,\
 352,\
 423,\
 494,\
 565,\
 573,\
 637,\
 708,\
 779,\
 850,\
 921,\
 992,\
  55,\
 119,\
 127,\
 198,\
 269,\
 340,\
 411,\
 482,\
 546,\
 617,\
 688,\
 696,\
 767,\
 838,\
 909,\
 973,\
  36,\
 107,\
 178,\
 249,\
 257,\
 328,\
 392,\
 463,\
 534,\
 605,\
 676,\
 747,\
 818,\
 819,\
 890,\
 961,\
  24,\
  95,\
 166,\
 237,\
 301,\
 372,\
 380,\
 451,\
 522,\
 593,\
 664,\
 728,\
 799,\
 870,\
 941,\
 949,\
  12,\
  83,\
 147,\
 218,\
 289,\
 360,\
 431,\
 502,\
 510,\
 574,\
 645,\
 716,\
 787,\
 858,\
 929,\
1000,\
  56,\
  64,\
 135,\
 206,\
 277,\
 348,\
 419,\
 483,\
 554,\
 625,\
 633,\
 704,\
 775,\
 846,\
 910,\
 981,\
  44,\
 115,\
 186,\
 194,\
 265,\
 329,\
 400,\
 471,\
 542,\
 613,\
 684,\
 755,\
 756,\
 827,\
 898,\
 969,\
  32,\
 103,\
 174,\
 238,\
 309,\
 317,\
 388,\
 459,\
 530,\
 601,\
 665,\
 736,\
 807,\
 878,\
 886,\
 957,\
  20,\
  84,\
 155,\
 226,\
 297,\
 368,\
 439,\
 447,\
 511,\
 582,\
 653,\
 724,\
 795,\
 866,\
 937,\
1001,\
   1,\
  72,\
 143,\
 214,\
 285,\
 356,\
 420,\
 491,\
 562,\
 570,\
 641,\
 712,\
 783,\
 847,\
 918,\
 989,\
  52,\
 123,\
 131,\
 202,\
 266,\
 337,\
 408,\
 479,\
 550,\
 621,\
 692,\
 693,\
 764,\
 835,\
 906,\
 977,\
  40,\
 111,\
 175,\
 246,\
 254,\
 325,\
 396,\
 467,\
 538,\
 602,\
 673,\
 744,\
 815,\
 823,\
 894,\
 965,\
  21,\
  92,\
 163,\
 234,\
 305,\
 376,\
 384,\
 448,\
 519,\
 590,\
 661,\
 732,\
 803,\
 874,\
 938,\
 946,\
   9,\
  80,\
 151,\
 222,\
 293,\
 357,\
 428,\
 499,\
 507,\
 578,\
 649,\
 720,\
 784,\
 855,\
 926,\
 997,\
  60,\
  68,\
 139,\
 203,\
 274,\
 345,\
 416,\
 487,\
 558,\
 629,\
 630,\
 701,\
 772,\
 843,\
 914,\
 985,\
  48,\
 112,\
 183,\
 191,\
 262,\
 333,\
 404,\
 475,\
 539,\
 610,\
 681,\
 752,\
 760,\
 831,\
 902,\
 966,\
  29,\
 100,\
 171,\
 242,\
 313,\
 321,\
 385,\
 456,\
 527,\
 598,\
 669,\
 740,\
 811,\
 875,\
 883,\
 954,\
  17,\
  88,\
 159,\
 230,\
 294,\
 365,\
 436,\
 444,\
 515,\
 586,\
 657,\
 721,\
 792,\
 863,\
 934,\
1005,\
   5,\
  76,\
 140,\
 211,\
 282,\
 353,\
 424,\
 495,\
 566,\
 567,\
 638,\
 709,\
 780,\
 851,\
 922,\
 993,\
  49,\
 120,\
 128,\
 199,\
 270,\
 341,\
 412,\
 476,\
 547,\
 618,\
 689,\
 697,\
 768,\
 839,\
 903,\
 974,\
  37,\
 108,\
 179,\
 250,\
 258,\
 322,\
 393,\
 464,\
 535,\
 606,\
 677,\
 748,\
 812,\
 820,\
 891,\
 962,\
  25,\
  96,\
 167,\
 231,\
 302,\
 373,\
 381,\
 452,\
 523,\
 594,\
 658,\
 729,\
 800,\
 871,\
 942,\
 950,\
  13,\
  77,\
 148,\
 219,\
 290,\
 361,\
 432,\
 503,\
 504,\
 575,\
 646,\
 717,\
 788,\
 859,\
 930,\
 994,\
  57,\
  65,\
 136,\
 207,\
 278,\
 349,\
 413,\
 484,\
 555,\
 626,\
 634,\
 705,\
 776,\
 840,\
 911,\
 982,\
  45,\
 116,\
 187,\
 195,\
 259,\
 330,\
 401,\
 472,\
 543,\
 614,\
 685,\
 749,\
 757,\
 828,\
 899,\
 970,\
  33,\
 104,\
 168,\
 239,\
 310,\
 318,\
 389,\
 460,\
 531,\
 595,\
 666,\
 737,\
 808,\
 879,\
 887,\
 958,\
  14,\
  85,\
 156,\
 227,\
 298,\
 369,\
 440,\
 441,\
 512,\
 583,\
 654,\
 725,\
 796,\
 867,\
 931,\
1002,\
   2,\
  73,\
 144,\
 215,\
 286,\
 350,\
 421,\
 492,\
 563,\
 571,\
 642,\
 713,\
 777,\
 848,\
 919,\
 990,\
  53,\
 124,\
 132,\
 196,\
 267,\
 338,\
 409,\
 480,\
 551,\
 622,\
 686,\
 694,\
 765,\
 836,\
 907,\
 978,\
  41,\
 105,\
 176,\
 247,\
 255,\
 326,\
 397,\
 468,\
 532,\
 603,\
 674,\
 745,\
 816,\
 824,\
 895,\
 959,\
  22,\
  93,\
 164,\
 235,\
 306,\
 377,\
 378,\
 449,\
 520,\
 591,\
 662,\
 733,\
 804,\
 868,\
 939,\
 947,\
  10,\
  81,\
 152,\
 223,\
 287,\
 358,\
 429,\
 500,\
 508,\
 579,\
 650,\
 714,\
 785,\
 856,\
 927,\
 998,\
  61,\
  69,\
 133,\
 204,\
 275,\
 346,\
 417,\
 488,\
 559,\
 623,\
 631,\
 702,\
 773,\
 844,\
 915,\
 986,\
  42,\
 113,\
 184,\
 192,\
 263,\
 334,\
 405,\
 469,\
 540,\
 611,\
 682,\
 753,\
 761,\
 832,\
 896,\
 967,\
  30,\
 101,\
 172,\
 243,\
 314,\
 315,\
 386,\
 457,\
 528,\
 599,\
 670,\
 741,\
 805,\
 876,\
 884,\
 955,\
  18,\
  89,\
 160,\
 224,\
 295,\
 366,\
 437,\
 445,\
 516,\
 587,\
 651,\
 722,\
 793,\
 864,\
 935,\
1006,\
   6,\
  70,\
 141,\
 212,\
 283,\
 354,\
 425,\
 496,\
 560,\
 568,\
 639,\
 710,\
 781,\
 852,\
 923,\
 987,\
  50,\
 121,\
 129,\
 200,\
 271,\
 342,\
 406,\
 477,\
 548,\
 619,\
 690,\
 698,\
 769,\
 833,\
 904,\
 975,\
  38,\
 109,\
 180,\
 251,\
 252,\
 323,\
 394,\
 465,\
 536,\
 607,\
 678,\
 742,\
 813,\
 821,\
 892,\
 963,\
  26,\
  97,\
 161,\
 232,\
 303,\
 374,\
 382,\
 453,\
 524,\
 588,\
 659,\
 730,\
 801,\
 872,\
 943,\
 951,\
   7,\
  78,\
 149,\
 220,\
 291,\
 362,\
 433,\
 497,\
 505,\
 576,\
 647,\
 718,\
 789,\
 860,\
 924,\
 995,\
  58,\
  66,\
 137,\
 208,\
 279,\
 343,\
 414,\
 485,\
 556,\
 627,\
 635,\
 706,\
 770,\
 841,\
 912,\
 983,\
  46,\
 117,\
 188,\
 189,\
 260,\
 331,\
 402,\
 473,\
 544,\
 615,\
 679,\
 750,\
 758,\
 829,\
 900,\
 971,\
  34,\
  98,\
 169,\
 240,\
 311,\
 319,\
 390,\
 461,\
 525,\
 596,\
 667,\
 738,\
 809,\
 880,\
 888,\
 952,\
  15,\
  86,\
 157,\
 228,\
 299,\
 370,\
 434,\
 442,\
 513,\
 584,\
 655,\
 726,\
 797,\
 861,\
 932,\
1003,\
   3,\
  74,\
 145,\
 216,\
 280,\
 351,\
 422,\
 493,\
 564,\
 572,\
 643,\
 707,\
 778,\
 849,\
 920,\
 991,\
  54,\
 125,\
 126,\
 197,\
 268,\
 339,\
 410,\
 481,\
 552,\
 616,\
 687,\
 695,\
 766,\
 837,\
 908,\
 979,\
  35,\
 106,\
 177,\
 248,\
 256,\
 327,\
 398,\
 462,\
 533,\
 604,\
 675,\
 746,\
 817,\
 825,\
 889,\
 960,\
  23,\
  94,\
 165,\
 236,\
 307,\
 371,\
 379,\
 450,\
 521,\
 592,\
 663,\
 734,\
 798,\
 869,\
 940,\
 948,\
  11,\
  82,\
 153,\
 217,\
 288,\
 359,\
 430,\
 501,\
 509,\
 580,\
 644,\
 715,\
 786,\
 857,\
 928,\
 999,\
  62,\
  63,\
 134,\
 205,\
 276,\
 347,\
 418,\
 489,\
 553,\
 624,\
 632,\
 703,\
 774,\
 845,\
 916,\
 980,\
  43,\
 114,\
 185,\
 193,\
 264,\
 335,\
 399,\
 470,\
 541,\
 612,\
 683,\
 754,\
 762,\
 826,\
 897,\
 968,\
  31,\
 102,\
 173,\
 244,\
 308,\
 316,\
 387,\
 458,\
 529,\
 600,\
 671,\
 735,\
 806,\
 877,\
 885,\
 956,\
  19,\
  90,\
 154,\
 225,\
 296,\
 367,\
 438,\
 446,\
 517,\
 581,\
 652,\
 723,\
 794,\
 865,\
 936,\
1007 \
}