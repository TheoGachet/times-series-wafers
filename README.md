# Project EL MAMOUN-GACHET - 2022

This project is a collaborative work between Kawtar El Mamoun and myself (Théo Gachet). Our objective was to develop an application in C for preprocessing the provided time series data to predict and better explain the evolution of the target characteristic (i.e., the average rate of surface material removal) using historical data. Please note that this project was coded overnight, so there might be a few optimization errors in the code.

## Objectives and Functionalities

The objective of this project is to develop an application in C that facilitates the pre-processing and analysis of given time series data. The main goal is to predict and better explain the evolution of a specific target characteristic, which, in this case, is the average rate of surface material removal. To achieve this, the application offers the following functionalities:

1. Central and Dispersion Descriptive Statistics:
   - For each time series, the application calculates essential descriptive statistics, including mean, minimum, maximum, standard deviation, median, and quartiles.
   - These statistics are crucial for understanding the central tendency and variability of the data.

2. Detection of Atypical Observations:
   - The application identifies and removes atypical observations in each time series.
   - This process is carried out using the kσ rule, where observations outside the range of k times the standard deviation (σ) are considered atypical.
   - The flexibility to set k to 2 or 3 allows users to control the sensitivity of the outlier detection.

3. Empirical Distributions:
   - The application constructs histograms for each time series to visualize the empirical distributions of the data.
   - Data is grouped into bins, and the frequency of observations in each bin is calculated.
   - A default number of bins is provided for convenient visualization.

4. Extraction of Aggregated Characteristics by Wafer:
   - Time series data is aggregated by wafer, providing a consolidated view of the data for each individual wafer.
   - The mean value is used as the aggregation criterion, giving insights into the overall behavior of wafers.

5. Correlation (Optional):
   - The application offers an optional functionality to calculate the correlation between the extracted aggregated characteristics and the average rate of surface material removal.
   - Correlation analysis helps understand potential relationships between different variables and the target characteristic.

6. Prediction (Optional):
   - Another optional functionality allows users to predict the average rate of surface material removal using one or more extracted aggregated features.
   - Linear regression is utilized for prediction purposes, enabling insights into potential predictors for the target characteristic.

By combining these functionalities, the application provides a comprehensive analysis of time series data, allowing researchers and analysts to gain deeper insights into the behavior of the target characteristic. It offers opportunities for data pre-processing, outlier detection, visualization of empirical distributions, and correlation analysis. Additionally, the optional prediction feature allows users to explore predictive relationships between extracted characteristics and the target variable.

## Project Documents

- **Report EL MAMOUN-GACHET.pdf**: Complete project report in response to the provided problem statement.
- **Presentation EL MAMOUN-GACHET**: Presentation slides used during the defense in front of the teaching staff.
- **Sujet.pdf**: Initial problem statement distributed during the Algorithmics and Programming course.

## Directories

- **data_trié**: Contains 19 `.csv` files representing sorted data for the 19 time series.
- **dataset**: Contains all the `.csv` files provided in the problem statement (e.g., CMP-training-0xx.csv).
- **histogrammes_tracés**: Dedicated folder for generated histograms related to question 3, associated with the 19 time series.

## Files

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
