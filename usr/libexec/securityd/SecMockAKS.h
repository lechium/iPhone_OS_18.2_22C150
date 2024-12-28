//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000f4d7
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000f4cb
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000f429
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000f3e1
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000f326
+ (void)unlockAllClasses;	// IMP=0x001000000000f2b6
+ (void)lockClassA_C;	// IMP=0x001000000000f246
+ (void)lockClassA;	// IMP=0x001000000000f1d6
+ (_Bool)useGenerationCount;	// IMP=0x001000000000f1ce
+ (_Bool)isSEPDown;	// IMP=0x001000000000f1c6
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000f1be
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000f1b6
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000f0e0
+ (void)reset;	// IMP=0x001000000000f070
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000f064
+ (unsigned int)keybag_state;	// IMP=0x001000000000f058
+ (id)mutabilityQueue;	// IMP=0x001000000000f028
+ (id)lockedStates;	// IMP=0x001000000000efdb
+ (void)trapdoor;	// IMP=0x001000000000efb7

@end
