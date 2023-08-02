# Project EL MAMOUN-GACHET (2022)

This project is a collaborative work between Kawtar El Mamoun and myself. Our objective was to develop a C application for preprocessing provided time series data to predict and better explain the evolution of the target feature (i.e., the average rate of material removal on the surface) using historical data. Please note that this project was coded overnight, so there might be a few optimization errors in the code.

## Project Documents:
- **Report EL MAMOUN-GACHET.pdf**: Complete project report in response to the provided problem statement.
- **Presentation EL MAMOUN-GACHET**: Presentation slides used during the defense in front of the teaching staff.
- **Sujet.pdf**: Initial problem statement distributed during the Algorithmics and Programming course.

## Directories:
- **data_trié**: Contains 19 `.csv` files representing sorted data for the 19 time series.
- **dataset**: Contains all the `.csv` files provided in the problem statement (e.g., CMP-training-0xx.csv).
- **histogrammes_tracés**: Dedicated folder for generated histograms related to question 3, associated with the 19 time series.

## Files:
- **agregation_unique.csv**: List of unique WAFER_IDs. Repeated occurrences are consolidated into one table.
- **agregation.csv**: List of WAFER_IDs, including repetitions.
- **CMP-training-removalrate.csv**: Specific file provided to address question 5.
- **concat.c**: C code for merging all text files in the dataset into one file (`resultat.csv`).
- **histogram.py**: Python script to visualize histograms mentioned in question 3 (refer to the PDF report for more details).
- **histogrammes.txt**: Console output after executing the code for question 3, for each time series.
- **histogrammes ksigma.txt**: Same output as above, but after applying the ksigma rule discussed in question 2.
- **main.c**: Main source code of the project.
- **README.txt**: This file containing general and descriptive information about the project.
- **resultats.csv**: Compilation of all dataset files.
- **saut_ligne.csv**: File necessary for the proper functioning of `concat.c`.
- **statistiques descriptives.txt**: Console output after running the code for question 1.
- **statistiques descriptives ksigma.txt**: Similar output as above, but post-application of the ksigma rule (question 2).

---

For any questions or additional clarifications regarding the project, please refer to the report or contact the authors directly.
