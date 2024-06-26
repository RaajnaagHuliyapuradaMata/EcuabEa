#pragma once
/******************************************************************************/
/* File   : EcuabEa.hpp                                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabEa.hpp"
#include "CfgEcuabEa.hpp"
#include "EcuabEa_core.hpp"
#include "infEcuabEa_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabEa:
      INTERFACES_EXPORTED_EA
      public abstract_module
   ,  public class_EcuabEa_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabEa_Type* lptrConst = (ConstEcuabEa_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, EA_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, EA_CONST,       EA_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) MainFunction   (void);
      EA_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabEa, EA_VAR) EcuabEa;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

