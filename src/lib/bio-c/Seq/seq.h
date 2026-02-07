typedef char* Dna;
typedef char* Rna;
typedef char* Protein;

Dna seq_dna(char *value);
Rna seq_rna(char *value);
Protein seq_protein(char *value);

Rna dna_transcribe(Dna dna);
Protein dna_translate(Dna dna, int toStop);

Protein rna_translate(Rna rna, int toStop);

Dna dna_reverse_complement(Dna dna);
