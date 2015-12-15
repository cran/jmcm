// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// linesearch.h: NR3's Line Search routine, modified to use Armadillo
//
// Copyright (C) 2015 Yi Pan and Jianxin Pan
//
// This file is part of jmcm.

#ifndef JMCM_LINESEARCH_H_
#define JMCM_LINESEARCH_H_

#include <algorithm>
#include <cmath>
#include <limits>

#include <RcppArmadillo.h>

namespace pan {

    template <typename T>
    class LineSearch {	
    public:	
	LineSearch();  // constructor
	~LineSearch(); 
	
	void GetStep(T &func, arma::vec &x, arma::vec &p,
		     const double kStepMax);

        void set_message(bool message) { message_ = message; }

    protected:
        bool message_;
	bool IsInfOrNaN(double x);
    }; // class LineSearch
    
#include "linesearch-impl.h"    

} // namespace pan

#endif // JMCM_LINESEARCH_H_
