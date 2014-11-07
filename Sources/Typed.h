//
//  Typed.h
//  Typed
//
//  Created by Martin Kiss on 30.10.14.
//  Copyright (c) 2014 Triceratops. All rights reserved.
//

#import "TCollections.h"
#import "TAssociativeCollections.h"

#import "TMutableArray.h"
#import "TMutableSet.h"
#import "TCountedSet.h"
#import "TMutableOrderedSet.h"
#import "TMutableDictionary.h"
#import "TCache.h"

//TODO: TPointerArray (Strong or Weak)
//TODO: THashTable (Strong or Weak)
//TODO: TMapTable (Strong or Weak Keys, Strong or Weak Values)

//TODO: -enumerationType
//TODO: -elementType
//TODO: -keyType
//TODO: -valueType
//TODO: TForIn(string, strings) { ... }

//TODO: TGenerate with a pointer star as a second argument: TGenerate(NSString,*), TGenerate(TArray(NSString),)



TGenerate(NSString,*) // Useds for KVC methods.
TGenerate(NSSortDescriptor,*) // Used by sorting methods.
TAssociativeGenerate(NSString, NSObject) // Useds for KVC methods.


TGenerate(NSObject,*)
TGenerate(NSDate,*)
TGenerate(NSNumber,*)
TGenerate(NSURL,*)

TAssociativeGenerate(NSObject, NSObject)
TAssociativeGenerate(NSString, NSString)
TAssociativeGenerate(NSString, NSNumber)
TAssociativeGenerate(NSNumber, NSObject)
TAssociativeGenerate(NSNumber, NSString)
TAssociativeGenerate(NSNumber, NSNumber)


