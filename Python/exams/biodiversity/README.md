# BIODIVERSITY

ElasmoHunt is a non-profit organization dedicated to preserving endangered sharks. In order to monitor the species present in the Mediterranean Sea, ElasmoHunt has organized a research team to estimate biodiversity based on environmental DNA (eDNA) sampling.

Specifically, the ElasmoHunt team extracts DNA fragments from the marine environment (eDNA) to identify and track species presence without capturing them through fishing methods.

ElasmoHunt has contacted you to develop a program that analyzes the eDNA samples collected from different sites in the Ionian Sea. The goal is to count and classify the species present by comparing the eDNA samples with a complete DNA database (*).

Below are the assignment specifications.

## Input Data

The eDNA samples collected by the ElasmoHunt team are stored in the file `edna_samples.txt`. Each line in this file represents a record formatted as follows: `site_id;edna_sequence`. Where:

- `site_id` identifies the sampling location
- `edna_sequence` is the DNA fragment that was collected.

The complete DNA database is stored in the file `species_dna_data.csv`, where each line contains the following fields, separated by a comma:

- `ScientificName`: The scientific name of the species.
- `Phylum`: The species' phylum.
- `Class`: The taxonomic class.
- `Order`: The taxonomic order.
- `Family`: The taxonomic family.
- `DNA_sequence`: The full reference DNA sequence of the species.

## Program Objectives

The program must compare the collected eDNA samples with the DNA of each species; specifically:

1. Read the complete DNA database and store it in a data structure that reflects the taxonomic tree `Order \ Family \ ScientificName`.
2. Identify the species for which the eDNA sample is a substring of the complete DNA of the species (a single eDNA sample may match multiple species).
3. Count how many eDNA samples match each species.
4. If a fragment matches multiple species, it should be assigned to all corresponding species.

The program must output the following information:

1. Identify repeated eDNA samples in the file `edna_samples.txt`. An eDNA sample is considered repeated if another sample with the same site ID and the same eDNA sequence already exists. The program should print the file line where the duplicate appears and the sample data ( ).
2. Print the percentage of correctly classified eDNA samples, i.e., the percentage of samples that match at least one species.
3. Print the taxonomic tree indicating, for each Order, for each Family, and for each ScientificName, the number of traced eDNA samples. The output should include all Orders and Families, but only ScientificNames with at least one (1) matching eDNA sample.
Example Input/Output

Input file:

`edna_samples_short.txt`:

```
h97_a;ACATTAATTCGTGTACGAGGTTCGTATGCGTAGCGTCAAAACGCGACTG
h15_c;TTCGTCCTGCTTACTCGATAACACATGAGACGCAGAAATGGAGAT
f21_b;CACTGACGTCAGATGAGTGACCATCAGGCC
f19_c;CCGGATCTTGGAGGGACTTTGACGTCAGTAACCCCCTGAGTGAATTACC
h97_a;ACATTAATTCGTGTACGAGGTTCGTATGCGTAGCGTCAAAACGCGACTG
h24_b;TTAGAATCACCGGCGTCAGTCCTTTAAA
h81_c;CCTCTGCTTGTCATCGCAGCACCGTCCTTGTCTCAAGACGCGCT
h24_b;CACCGTCATACATTATGTAGATGTTCACTGAC
f19_c;CCGGATCTTGGAGGGACTTTGACGTCAGTAACCCCCTGAGTGAATTACC
f39_a;TTGCGGCATGCATAGGCGCCTTCCA
```

`species_dna_data_short.csv`:

```
ScientificName,Phylum,Class,Order,Family,DNA_sequence
Aetomyleus,Chordata,Elasmobranchii,Myliobatiformes,Myliobatidae,ATCTGTGGAC...
Aetomylus maculatus,Chordata,Elasmobranchii,Myliobatiformes,Myliobatidae,TATGTATCTG...
Aetomylus milvus,Chordata,Elasmobranchii,Myliobatiformes,Myliobatidae,GTCACATTGG...
Aetomylus vespertilio,Chordata,Elasmobranchii,Myliobatiformes,Myliobatidae,GGTAAGCCCTG...
Aetoplatea,Chordata,Elasmobranchii,Myliobatiformes,Gymnuridae,CCGATCCTAGG...
Aetoplatea tentaculata,Chordata,Elasmobranchii,Myliobatiformes,Gymnuridae,TCGCCGTTGA...
Amphotistius kuhlii,Chordata,Elasmobranchii,Myliobatiformes,Dasyatidae,TGTCGCACCA...
Anacanthus,Chordata,Elasmobranchii,Myliobatiformes,Dasyatidae,GCAGAGAGTAA...
Anacanthus,Chordata,Elasmobranchii,Myliobatiformes,Dasyatidae,GTCTAGCAAC...
Bathytoshia,Chordata,Elasmobranchii,Myliobatiformes,Dasyatidae,GATTTCCACT...
```

N.B. In the shown example, DNA sequences are truncated with ... for brevity, but the actual file contains full sequences. For full inspection, open the files in VSCode.

Output with files `edna_samples_short.txt` and `species_dna_data_short.csv`:

```
Repeated sample (line=4): h97_a;ACATTAATTCGTGTACGAGGTTCGTATGCGTAGCGTCAAAACGCGACTG
Repeated sample (line=8): f19_c;CCGGATCTTGGAGGGACTTTGACGTCAGTAACCCCCTGAGTGAATTACC

Match percentage: 87.50%

Taxonomic tree:
Myliobatiformes
 \_ Myliobatidae
 |      \_ Aetomyleus (2)
 |      \_ Aetomylus maculatus (3)
 \_ Gymnuridae
 \_ Dasyatidae
 |      \_ Anacanthus (2)
```

Output with files `edna_samples.txt` and `species_dna_data.csv`:

```
Repeated sample (line=10): h97_a;GCAGATAACCGCTGGCAATCCGTTTCGCACCAGATCCGGC
Repeated sample (line=23): h97_a;GCAGATAACCGCTGGCAATCCGTTTCGCACCAGATCCGGC
Repeated sample (line=25): h97_a;GCAGATAACCGCTGGCAATCCGTTTCGCACCAGATCCGGC
Repeated sample (line=34): h97_a;GCAGATAACCGCTGGCAATCCGTTTCGCACCAGATCCGGC

Match percentage: 92.00%

Taxonomic tree:
Squaliformes
 \_ Squalidae
 \_ Etmopteridae
 |     \_ Acanthidium aciculatum (5)
 \_ Centrophoridae
 |
Rajiformes
 \_ Anacanthobatidae
 |     \_ Acanthobatis marmoratus (1)
 |     \_ Anacanthobatis americana (3)
 \_ Rajidae
 |     \_ Arctoraja smirnovi (2)
 \_ Arhynchobatidae
 |     \_ Bathyraja matsubarai (2)
 |     \_ Bathyraja minispinosa (2)
 |     \_ Bathyraja nigerrima (2)
 |
Rhinopristiformes
 \_ Rhinobatidae
 \_ Pristidae
 \_ Trygonorrhinidae
 |
Myliobatiformes
 \_ Aetobatidae
 |     \_ Aetobates (3)
 |     \_ Aetobatis (2)
 |     \_ Aetobatis latirostris (1)
 |     \_ Aetobatis narinari (2)
 \_ Myliobatidae
 |     \_ Aetomyleus (2)
 |     \_ Aetomylus maculatus (3)
 \_ Gymnuridae
 \_ Dasyatidae
 |     \_ Anacanthus (2)
 \_ Mobulidae
 |
Carcharhiniformes
 \_ Scyliorhinidae
 \_ Triakidae
 \_ Carcharhinidae
 |     \_ Apeionodon acutidens (2)
 \_ Pentanchidae
 |     \_ Apristurus breviventralis (2)
 |     \_ Apristurus bucephalus (2)
 |     \_ Apristurus exsanguis (1)
 |     \_ Asymbolus funebris (2)
 |     \_ Asymbolus parvus (1)
 |     \_ Asymbolus vincenti (1)
 |
Lamniformes
 \_ Alopiidae
 |     \_ Alopias macrourus (3)
 |
Chimaeriformes
 \_ Rhinochimaeridae
 |
Torpediniformes
 \_ Narcinidae
```
