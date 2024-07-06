# Consumption and Production Analysis

An energy company has collected the energy consumption of a series of households by sampling data every 15 minutes. The company wants to estimate the energy benefit of installing photovoltaic systems in various households. For each household, the size of the installable photovoltaic system (in m2) and the system's efficiency are known. Additionally, the company has collected solar radiation data for the area of interest. The goal is to analyze these data to calculate self-consumption, self-sufficiency, self-consumed energy, produced energy, and energy fed into the grid for each household (and for the aggregate of households). To do this, various indicators need to be calculated and a statistics report generated.

## Indicator Definitions

* **Produced Energy**: Total amount of energy produced by the photovoltaic system. Calculable with the following formula: `produced_energy = system_efficiency × system_size × solar_radiation`
* **Energy Fed into the Grid**: Amount of produced energy that exceeds consumption and is fed into the grid.
* **Self-consumed Energy**: Amount of energy produced by the photovoltaic system and consumed internally.
* **Self-consumption**: Percentage of energy consumed by the household that is produced internally. Calculated as `(self-consumed energy / total production) * 100`.
* **Self-sufficiency**: Percentage of self-produced energy relative to total consumption. Calculated as `(self-consumed energy / total consumption) * 100`.

For each household and for each time instant, calculate:

1. Produced Energy
2. Energy Fed into the Grid
3. Self-consumed Energy

and print the following statistics for the aggregate of all households:

1. Total consumption
2. Self-consumed Energy
3. Produced Energy
4. Energy Fed into the Grid
5. Self-consumption
6. Self-sufficiency

Additionally, print the IDs of the three households with the highest self-consumption, and the IDs of the three households with the highest self-sufficiency.

The data are provided in three text files:

* `consumptions.txt`
* `systems.txt`
* `weather.txt`

Each file has the following format:

### `consumptions.txt`

```
Household_ID;Date;Time;Energy_consumption
ID1;01/01/2023;00:00;1.86
ID2;01/01/2023;00:00;1.69
ID3;01/01/2023;00:00;2.64
ID4;01/01/2023;00:00;1.61
ID5;01/01/2023;00:00;1.65
ID6;01/01/2023;00:00;2.2
ID7;01/01/2023;00:00;2.89
ID8;01/01/2023;00:00;1.27
ID9;01/01/2023;00:00;2.05
ID10;01/01/2023;00:00;2.01
ID1;01/01/2023;00:15;2.07
ID2;01/01/2023;00:15;2.69
ID3;01/01/2023;00:15;1.08
ID4;01/01/2023;00:15;1.97
ID5;01/01/2023;00:15;2.28
ID6;01/01/2023;00:15;1.62
ID7;01/01/2023;00:15;1.95
ID8;01/01/2023;00:15;1.51
ID9;01/01/2023;00:15;1.79
ID10;01/01/2023;00:15;1.03
```

* **Household_ID**: Unique identifier of the household (a string without spaces).
* **Date**: Date in "DD/MM/YYYY" format (day/month/year).
* **Time**: Time in "HH:MM" format (hours:minutes).
* **Energy_consumption**: Energy consumption every 15 minutes in kWh (decimal number).

### `systems.txt`

```
Household_ID;System_size;Efficiency
ID1;23.51;0.19
ID2;30.33;0.25
ID3;41.99;0.2
ID4;14.38;0.23
ID5;30.67;0.18
ID6;52.65;0.21
ID7;16.84;0.23
ID8;28.15;0.16
ID9;81.43;0.22
ID10;24.33;0.25
```

* **Household_ID**: Unique identifier of the household (a string without spaces).
* **System_size**: Size of the photovoltaic system in m2 (decimal number).
* **Efficiency**: System efficiency

### `weather.txt`

```
DATE;TIME;GHI
01/01/2023;00:00;0
01/01/2023;00:15;0
01/01/2023;00:30;0
01/01/2023;00:45;0
01/01/2023;01:00;0
01/01/2023;01:15;0
01/01/2023;01:30;0
01/01/2023;01:45;0
01/01/2023;02:00;0
...
...
01/01/2023;09:15;0.0986
01/01/2023;09:30;0.1291
01/01/2023;09:45;0.1582
01/01/2023;10:00;0.1887
01/01/2023;10:15;0.2211
01/01/2023;10:30;0.2503
01/01/2023;10:45;0.278
01/01/2023;11:00;0.3021
01/01/2023;11:15;0.3225
01/01/2023;11:30;0.3345
```

* **Date**: Date in "DD/MM/YYYY" format (day/month/year).
* **Time**: Time in "HH:MM" format (hours:minutes).
* **GHI**: Solar radiation in kWh/m2 (decimal number)

## Execution Example

```
Aggregate report:
Produced Energy:1747.96 kWh
Consumed Energy:1885.54 kWh
Self-consumed Energy:565.67 kWh
Energy Fed into the Grid:1182.29 kWh
Self-consumption Percentage:32.36%
Self-sufficiency Percentage:30.00%
```
