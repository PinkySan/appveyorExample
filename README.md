# appveyorExample
Example for the usage of appveyor


## Vorgehensweise

* appveyor.yml erstellt
* image fuer *Visual Studio 2017*
* eigenes Build Skript erstellt

## TODO

- [x] installation - *cmake --build . --target INSTALL*
- [x] Installationspaket zur Verfügung stellen - Heureka
- [ ] test erstellen
- [ ] test auf basis von gtest
- [ ] conan muss vor dem bauen der Tests im appveyor über conan installiert werden
    - [ ] conan muss zuvor installiert werden (über *pip*)
    - [ ] conan muss gtest herunterladen
- [] Linux und Windows bauen

### Status
Branch|status
----|----
master | <img src=https://ci.appveyor.com/api/projects/status/github/PinkySan/appveyorExample>

### Download

Master|Link
----|----
Debug| [Download](https://ci.appveyor.com/api/projects/PinkySan/appveyorExample/artifacts/pkgHello.zip?job=Configuration%3A+Debug)
Release| [Download](https://ci.appveyor.com/api/projects/PinkySan/appveyorExample/artifacts/pkgHello.zip?job=Configuration%3A+Release)

