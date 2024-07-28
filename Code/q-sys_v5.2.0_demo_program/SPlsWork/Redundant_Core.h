namespace Redundant_Core;
        // class declarations
         class RedundantCore;
     class RedundantCore 
    {
        // class delegates
        delegate FUNCTION CoreRedundancyStatus ( INTEGER iStatus );

        // class events

        // class functions
        FUNCTION CheckStatus ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING IP_Address[];

        // class properties
        DelegateProperty CoreRedundancyStatus delCoreRedundancyStatus;
    };

