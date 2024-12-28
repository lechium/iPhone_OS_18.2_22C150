//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@class NSError;

@interface PQLConnection (GSAdditions)
- (_Bool)checkForDBUpgrade;	// IMP=0x002000000000d9e3
- (_Bool)saveLibraryState:(id)arg1;	// IMP=0x001000000000d9c5
- (id)loadLibraryState;	// IMP=0x001000000000d939
- (_Bool)openAtPath:(id)arg1 isReadOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000000d33c
- (_Bool)_installFunctions;	// IMP=0x001000000000d1ce
- (_Bool)_setupPragmas;	// IMP=0x001000000000cefc
- (_Bool)_setupPragmasNotUpsetAboutWAL_17553237;	// IMP=0x001000000000cce6
- (_Bool)_setupDBIfNeeded;	// IMP=0x001000000000cc68
- (_Bool)_upgradeDB:(long long)arg1;	// IMP=0x001000000000cb43
- (_Bool)_gotoV5;	// IMP=0x001000000000c9fa
- (_Bool)_gotoV4;	// IMP=0x001000000000c6b8
- (_Bool)_gotoV3;	// IMP=0x001000000000c55e
- (_Bool)_gotoV2;	// IMP=0x001000000000c3c4
- (_Bool)_initializeDB;	// IMP=0x001000000000c1fb
@property(readonly, nonatomic) NSError *translatedError;
- (void)setCorruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bc99
@end
