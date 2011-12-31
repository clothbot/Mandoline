//
//  Defaults.hh
//  Mandoline
//
//  Created by GM on 11/24/10.
//  Copyright 2010 Belfry DevWorks. All rights reserved.
//


#define DEFAULT_FILAMENT_FEED_RATE    0.689f  /* mm/sec */
#define DEFAULT_FILAMENT_DIAMETER     3.0f    /* mm */
#define DEFAULT_LAYER_THICKNESS       0.36f   /* mm */
#define DEFAULT_WIDTH_OVER_HEIGHT     1.75f   /* Width of extruded filament, divided by height */
#define DEFAULT_SHRINKAGE_RATIO       0.98f   /* Ratio of hot part to cooled part size. */
#define DEFAULT_INFILL_DENSITY        0.2     /* Density of infill pattern.  1.0 = solid.  0.0 = hollow. */
#define DEFAULT_PERIMETER_SHELLS      2       /* Number of layers in vertical shell walls */
#define DEFAULT_FLAT_SHELLS           3       /* Number of layers in horizontal shell walls */

#define DEFAULT_WORKER_THREADS        8       /* Number of threads to slice with. */

#define DEFAULT_RAFT_LAYERS           2       /* Number of layers in raft under model. */
#define DEFAULT_RAFT_OUTSET           5.0     /* mm to outset the raft. */

