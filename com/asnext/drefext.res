


====> Integer value not found
ub-common-name-length
In
INTEGER




====> Integer value not found
ub-bit-options
In
INTEGER




====> Integer value not found
ub-extension-types
In
INTEGER


topEntry OBJECT IDENTIFIER ::= {0 1}
06 01 01

topEntry INTEGER ::= 16
02 01 10

topEntry INTEGER ::= 1
02 01 01

topEntry INTEGER ::= 3
02 01 03

topEntry ExtensionTest ::= 
31 30
{
    name "NameTest"
    A00A16 08 4E 61 6D 65 54 65 73 74,
    extensions 
    A32231 20
    {
        30 0E
        {
            standard-extension recipient-reassignment-prohibited
            80 01 01,
            criticality 
            {
                for-submission
            }
            A10403 02 05 80,
            value RecipientReassignmentProhibited recipient-reassignment-allowed
            A2030A 01 00
        },
        30 0E
        {
            standard-extension originator-requested-alternate-recipient
            80 01 02,
            criticality 
            {
                for-transfer
            }
            A10403 02 05 40,
            value OriginatorRequestedAlternateRecipient 8
            A20302 01 08
        }
    }
}

topEntry ExtensionTest ::= 
31 20
{
    name "NameTest"
    A00A16 08 4E 61 6D 65 54 65 73 74,
    extensions 
    A31231 10
    {
        30 0E
        {
            standard-extension originator-requested-alternate-recipient
            80 01 02,
            criticality 
            {
                for-transfer
            }
            A10403 02 05 40,
            value OriginatorRequestedAlternateRecipient 0
            A20302 01 00
        }
    }
}

topEntry ExtensionTest ::= 
31 4F
{
    name "NameTest"
    A00A16 08 4E 61 6D 65 54 65 73 74,
    extensions 
    A34131 3F
    {
        30 0D
        {
            unknown-field '8000'H
            80 00 ,
            unknown-field 
            A1 04
            {
                unknown-field '03020580'H
                03 02 05 80
            },
            unknown-field 
            A2 03
            {
                unknown-field '0A0101'H
                0A 01 01
            }
        },
        30 0E
        {
            standard-extension recipient-reassignment-prohibited
            80 01 01,
            criticality 
            {
                for-submission
            }
            A10403 02 05 80,
            value RecipientReassignmentProhibited recipient-reassignment-prohibited
            A2030A 01 01
        },
        30 0E
        {
            unknown-field '800103'H
            80 01 03,
            unknown-field 
            A1 04
            {
                unknown-field '03020580'H
                03 02 05 80
            },
            unknown-field 
            A2 03
            {
                unknown-field '0A0101'H
                0A 01 01
            }
        },
        30 0E
        {
            standard-extension originator-requested-alternate-recipient
            80 01 02,
            criticality 
            {
                for-transfer
            }
            A10403 02 05 40,
            value OriginatorRequestedAlternateRecipient 8
            A20302 01 08
        }
    }
}

topEntry INTEGER ::= 2
02 01 02

topEntry INTEGER ::= 1
02 01 01

topEntry ExtensionAttribute ::= 
30 0C
{
    extension-attribute-type common-name
    A00302 01 01,
    extension-attribute-value CommonName "fff"
    A10513 03 66 66 66
}

topEntry ExtensionAttribute ::= 
30 0A
{
    extension-attribute-type common-name
    A00302 01 01,
    unexpected-tag '020105'H
    A10302 01 05
}

invalid-field ExtensionAttribute ::= 
30 0B
{
    unknown-field 'A00202'H
    A00202 00 ,
    unknown-field 
    A1 05
    {
        unknown-field '1303666666'H
        13 03 66 66 66
    }
}

topEntry Token ::= 
30 08
{
    token-type-identifier asymmetricToken
    80 01 01,
    token INTEGER 5
    A10302 01 05
}

topEntry Token ::= 
30 0A
{
    token-type-identifier asymmetricToken
    80 01 01,
    unexpected-tag '1603616161'H
    A10516 03 61 61 61
}

No matching type Found
30 06 
      80 A103020106 <<  >>

topEntry TokenData ::= 
30 09
{
    type bind-token-signed-data
    80 01 10,
    value BindTokenSignedData '10'B
    A10403 02 06 80
}

topEntry TokenData ::= 
30 08
{
    type bind-token-signed-data
    80 01 10,
    unexpected-tag '020107'H
    A10302 01 07
}

invalid-field Token ::= 
30 08
{
    unknown-field '8000'H
    80 00 ,
    unknown-field 
    A1 04
    {
        unknown-field '03020680'H
        03 02 06 80
    }
}



