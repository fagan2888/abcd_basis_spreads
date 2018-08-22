#include <calibrate.h>

/*
Idea from IterativeBootstrap.
What I don' t like about this is implementation is that is required to use as input the global error.
( It is necessary otherwise calibrate loses its general form  in oder to use a particular object)
Would be better for the user just to calibrate, without building a global error
Anyway, not so bad if we think that in QL exists function like MakeSchedule and so on..

*/

void CalibratedModel::calibrate(
	boost::shared_ptr<GlobalError> globalError;
	/*std::vector<boost::shared_ptr<CalibratedModel>>& calibratedModel,
	//std::vector<boost::shared_ptr<CalibrationData>>& calibrationData,
	//boost::shared_ptr<Solver1D> solver,
	//Real & accuracy,
	//Real & guess,
	//Real & min,
	//Real & max*/
    ) {

	//create the error
	//GlobalError globalError_(calibratedModel,calibrationData);
	
	//solver
	int i = globalError->innerErrorNumber_;
	globalError->calibrateData_[i]->solver_->solve(*globalError, globalError->calibrateData_[i]->accuracy(), globalError->calibrateData_[i]->.guess(),
				   globalError->calibrateData_[i]->min(), globalError->calibrateData_[i]->max());
	//firstSolver_.solve(*errors_[i], accuracy, guess, min, max);
    }




