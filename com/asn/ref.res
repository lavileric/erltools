Ref { 2 3 9 }
DEFINITIONS ::=
BEGIN

    -- INTEGER 
    value1 INTEGER ::= 2;
    
    value2 INTEGER ::= -3;
    
    value3 INTEGER ::= value2;
    
    value3000 [3000] IMPLICIT INTEGER ::= value2;
    
    -- SIMPLE REAL 
    value4 REAL ::= PLUS_INFINITY;
    
    value5 REAL ::= MINUS_INFINITY;
    
    value6 REAL ::= 0;
    
    -- NULL VALUE 
    value7 NULL ::= NULL;
    
    -- BOOLEAN 
    value20 BOOLEAN ::= TRUE;
    
    value21 BOOLEAN ::= FALSE;
    
    -- ENUMERATED 
    TypeEnumerated ::= ENUMERATED {low(-1), medium(0), high(1)};
    
    value30 TypeEnumerated ::= low;
    
    value31 TypeEnumerated ::= medium;
    
    value32 TypeEnumerated ::= high;
    
    -- BIT,OCTET and CHARACTER STRING 
    value40 BIT STRING ::= '001110111011'B;
    
    value41 OCTET STRING ::= '0AE1C'H;
    
    value42 IA5String ::= "HELLO";
    
    value43 IA5String ::= 
    {
        "HELLO",
        " ",
        "BONJOUR",
        " ",
        "IT IS A TEST"
    };
    
    value44 IA5String ::= 
    {
        "HELLO",
        " ",
        {"BONJOUR"},
        {" "},
        "IT IS A TEST"
    };
    
    Couleur ::= [15] BIT STRING { rouge(0), vert(1), bleu(2), marron(15) };
    
    value45 Couleur ::= 
    {
        vert,
        marron
    };
    
    value46 BIT STRING ::= 
    {
        '101'B,
        '0101'B,
        '00001'B,
        'AA'H
    };
    
    value47 OCTET STRING ::= 
    {
        '101'B,
        '0101'B,
        '00001'B,
        'AA'H
    };
    
    -- OBJECT IDENTIFIER 
    value50 OBJECT IDENTIFIER ::= { 2 6 6 247 1 };
    
    value511 OBJECT IDENTIFIER ::= {1};
    
    value512 OBJECT IDENTIFIER ::= 
    {
        1,
        2,
        1
    };
    
    value513 OBJECT IDENTIFIER ::= { value512 value517(5) 8 };
    
    value514 OBJECT IDENTIFIER ::= { value512 value517(5) 8 9 };
    
    value515 OBJECT IDENTIFIER ::= { value512 value517(5) 8 606 };
    
    value516 OBJECT IDENTIFIER ::= { value512 value517(5) 9 999 };
    
    -- SET,SEQUENCE,SET OF,SEQUENCE OF 
    TypSet1 ::= SET
    {   
        p BOOLEAN,
        q INTEGER,
        r BIT STRING
    };
    
    value60 TypSet1 ::= 
    {
        p TRUE,
        r '83F'H,
        q -7
    };
    
    TypSequence1 ::= SEQUENCE
    {   
        p BOOLEAN,
        q INTEGER,
        r BIT STRING
    };
    
    value61 TypSequence1 ::= 
    {
        p TRUE,
        q -7,
        r '83F'H
    };
    
    TypSequence2 ::= SEQUENCE
    {   
        x INTEGER,
        y INTEGER DEFAULT 0
    };
    
    TypSeqOf2 ::= SEQUENCE OF TypSequence2;
    
    value62 SEQUENCE OF TypSequence2 ::= 
    {
        {
            x 1,
            y 2
        },
        {x 1},
        {
            x -1,
            y 9
        }
    };
    
    TypSequence3 ::= SEQUENCE
    {   
        x INTEGER,
        y INTEGER OPTIONAL
    };
    
    TypSeqOf3 ::= SEQUENCE OF TypSequence3;
    
    value63 SEQUENCE OF TypSequence3 ::= 
    {
        {
            x 1,
            y 2
        },
        {x 1},
        {
            x -1,
            y 9
        }
    };
    
    TypSequence4 ::= SEQUENCE
    {   
        name IA5String,
        COMPONENTS OF TypSequence3
    };
    
    value64 TypSequence4 ::= 
    {
        name "coord",
        x 9
    };
    
    value65 TypSequence4 ::= 
    {
        name "coord",
        x 3,
        y 9
    };
    
    TypSequence5 ::= SEQUENCE
    {   
        x [0]          INTEGER,
        y [1] IMPLICIT INTEGER OPTIONAL
    };
    
    value66 TypSequence5 ::= 
    {
        x 3,
        y 9
    };
    
    TypSequence6 ::= SEQUENCE
    {   
        x [0] [3]         INTEGER,
        y [1] IMPLICIT[3] INTEGER OPTIONAL
    };
    
    value67 TypSequence6 ::= 
    {
        x 3,
        y 9
    };
    
    TypSeq7 ::= [3] INTEGER;
    
    TypSequence7 ::= SEQUENCE
    {   
        x TypSeq7,
        y [0] IMPLICIT TypSeq7
    };
    
    value68 TypSequence7 ::= 
    {
        x 3,
        y 9
    };
    
    -- CHOICE 
    TypChoice2 ::= CHOICE
    {   
        elem3 [0] IMPLICIT INTEGER,
        elem4 [1] IMPLICIT IA5String
    };
    
    TypChoice1 ::= CHOICE
    {   
        elem1 [0] IMPLICIT INTEGER,
        elem2 [1]          TypChoice2
    };
    
    value70 TypChoice2 ::= elem3 5;
    
    value71 TypChoice1 ::= elem2 elem4 "Content";
    
    value72 TypChoice1 ::= elem1 9;
    
    -- ANY 
    value80 ANY ::= INTEGER 3;
    
    TypeAny ::= SEQUENCE
    {   
        tag   INTEGER,
        value ANY
    };
    
    value81 TypeAny ::= 
    {
        tag 9,
        value IA5String "Hello"
    };
    
    value82 TypeAny ::= 
    {
        tag 10,
        value [256] IMPLICIT INTEGER 9
    };
    
END

-- INTEGER 
value1 INTEGER ::= 2;
02 01 02




====> Integer value not found
-3
In
INTEGER

value2 INTEGER ::= -3;
02 01 FD

-- BOOLEAN 
value20 BOOLEAN ::= TRUE;
01 01 FF

value21 BOOLEAN ::= FALSE;
01 01 00




====> Integer value not found
-3
In
INTEGER

value3 INTEGER ::= -3;
02 01 FD

value30 TypeEnumerated ::= low;
0A 01 FF




====> Integer value not found
-3
In
INTEGER

value3000 [3000] IMPLICIT INTEGER ::= -3;
9F9738 01 FD

value31 TypeEnumerated ::= medium;
0A 01 00

value32 TypeEnumerated ::= high;
0A 01 01

-- SIMPLE REAL 
value4 REAL ::= PLUS_INFINITY;
09 01 40

-- BIT,OCTET and CHARACTER STRING 
value40 BIT STRING ::= '001110111011'B;
03 04 04 3B 00 B0

value41 OCTET STRING ::= '0AE1C'H;
04 03 0A E1 C0

value42 IA5String ::= "HELLO";
16 05 48 45 4C 4C 4F

value43 IA5String ::= 
{
    "HELLO",
    " ",
    "BONJOUR",
    " ",
    "IT IS A TEST"
};
16 1A 48 45 4C 4C 4F 20 42 4F 4E 4A 4F 55 52 20 49 54 20 49 53 20 41 20 54 45
  53 54

value44 IA5String ::= 
36 24
{
    "HELLO"
    16 05 48 45 4C 4C 4F,
    " "
    16 01 20,
    {
        "BONJOUR"
    }
    16 07 42 4F 4E 4A 4F 55 52
    ,
    {
        " "
    }
    16 01 20
    ,
    "IT IS A TEST"
    16 0C 49 54 20 49 53 20 41 20 54 45 53 54
};

value45 Couleur ::= 
{
    vert,
    marron
};
AF0503 03 00 40 01

value46 BIT STRING ::= 
23 11
{
    '101'B
    03 03 05 00 A0,
    '0101'B
    03 02 04 50,
    '00001'B
    03 02 03 08,
    'AA'H
    03 02 00 AA
};

value47 OCTET STRING ::= 
24 0D
{
    '101'B
    04 02 00 A0,
    '0101'B
    04 01 50,
    '00001'B
    04 01 08,
    'AA'H
    04 01 AA
};

value5 REAL ::= MINUS_INFINITY;
09 01 41

-- OBJECT IDENTIFIER 
value50 OBJECT IDENTIFIER ::= { 2 6 6 247 1 };
06 05 56 06 81 77 01

value511 OBJECT IDENTIFIER ::= 
{
    1
};
06 01 28

value512 OBJECT IDENTIFIER ::= 
{
    1,
    2,
    1
};
06 02 2A 01

value513 OBJECT IDENTIFIER ::= { value512 value517(5) 8 };
06 04 2A 01 05 08

value514 OBJECT IDENTIFIER ::= { value512 value517(5) 8 9 };
06 05 2A 01 05 08 09

value515 OBJECT IDENTIFIER ::= { value512 value517(5) 8 606 };
06 06 2A 01 05 08 84 5E

value516 OBJECT IDENTIFIER ::= { value512 value517(5) 9 999 };
06 06 2A 01 05 09 87 67

value6 REAL ::= 0;
09 00




====> Integer value not found
-7
In
INTEGER

value60 TypSet1 ::= 
31 0B
{
    p TRUE
    01 01 FF,
    r '83F'H
    03 03 04 83 F0,
    q -7
    02 01 F9
};




====> Integer value not found
-7
In
INTEGER

value61 TypSequence1 ::= 
30 0B
{
    p TRUE
    01 01 FF,
    q -7
    02 01 F9,
    r '83F'H
    03 03 04 83 F0
};




====> Integer value not found
-1
In
INTEGER

value62 SEQUENCE OF TypSequence2 ::= 
30 15
{
    30 06
    {
        x 1
        02 01 01,
        y 2
        02 01 02
    },
    30 03
    {
        x 1
        02 01 01
    },
    30 06
    {
        x -1
        02 01 FF,
        y 9
        02 01 09
    }
};




====> Integer value not found
-1
In
INTEGER

value63 SEQUENCE OF TypSequence3 ::= 
30 15
{
    30 06
    {
        x 1
        02 01 01,
        y 2
        02 01 02
    },
    30 03
    {
        x 1
        02 01 01
    },
    30 06
    {
        x -1
        02 01 FF,
        y 9
        02 01 09
    }
};

value64 TypSequence4 ::= 
30 0A
{
    name "coord"
    16 05 63 6F 6F 72 64,
    x 9
    02 01 09
};

value65 TypSequence4 ::= 
30 0D
{
    name "coord"
    16 05 63 6F 6F 72 64,
    x 3
    02 01 03,
    y 9
    02 01 09
};

value66 TypSequence5 ::= 
30 08
{
    x 3
    A00302 01 03,
    y 9
    81 01 09
};

value67 TypSequence6 ::= 
30 0C
{
    x 3
    A005A30302 01 03,
    y 9
    A10302 01 09
};

value68 TypSequence7 ::= 
30 0A
{
    x 3
    A30302 01 03,
    y 9
    A00302 01 09
};

-- NULL VALUE 
value7 NULL ::= NULL;
05 00 

value70 TypChoice2 ::= elem3 5;
80 01 05

value71 TypChoice1 ::= elem2 elem4 "Content";
A10981 07 43 6F 6E 74 65 6E 74

value72 TypChoice1 ::= elem1 9;
80 01 09

-- ANY 
value80 ANY ::= INTEGER 3;
02 01 03

value81 TypeAny ::= 
30 0A
{
    tag 9
    02 01 09,
    value IA5String "Hello"
    16 05 48 65 6C 6C 6F
};

value82 TypeAny ::= 
30 08
{
    tag 10
    02 01 0A,
    value [256] IMPLICIT INTEGER 9
    9F8200 01 09
};



