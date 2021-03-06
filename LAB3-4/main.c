
#include "MedRepository.h"
#include "MedController.h"
#include "MedUI.h"
#include "tests.h"

void startProgram() {
    /*
     * Bootstrap program core components (Repo, Controller, UI)
     */

    //runTests();


    MedRepository* medRepository = createRepository();
    MedController* medController = createController(medRepository);
    MedUi* medUi = createUI(medController);

    startUI(medUi);
}



int main() {
    startProgram();
    return 0;
}