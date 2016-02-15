Relevant Deadlines:
====================
#### 1. March 28 - UMBSOP Research day: PKPDsim as an alternative to Pheonix NLME **POSTER**
#### 2. June ?? - ACOP 2016: Comparison of open source PKPD modeling software in R

#Plan of attack
______________________
##### 1. Devise standardized, evidence based test scenarios 
  * avoid making post-hoc changes 
  * incrementally increase complexity in following order
    * multiple doses
    * multiple tau
    * multiple patients
    * param covariates
    * more? 
    
##### 2. Remake vignettes 
  * recreate vignettes of R packages AND phoenix using the standardized dataset
  * need clarification - @vjd

##### 3. Evaluate 
  * Ability to accomidate complexity 
  * Ease of use for lay-person (potential for use in education)
  * Ease of use for expert 
  * Computational efficiency 
    * try to find big O?
    * do all these use compiled code? may not be relevant.
