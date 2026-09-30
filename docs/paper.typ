== Literature review: existing BLAS libraries
 - Numpy
 - OpenBLAS
== Literature review: optimizing strategies
 - The Shonan Challenge @shonan. Generate specialized code when some values are statically known. Or dynamically known, or mixed / partially known. Loop unrolling for known-fixed-sized arrays. Solutions have been proposed using Scala LMS, MetaOCaml
== Foundation
  The Strassen algorithm
== Cases
 - Homogeneous matrices. For example, in computer graphics, it is
common to perform en-mass transformations using homogeneous 4x4
transformation matrices.
 - Sparse matrix
== Benchmark
 - Against Numpy
#bibliography("works.yml")
// vi: set nowrap:
