//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSCurrentPasscodeService, NSString;
@protocol LAPSPasscodeChangeSystem;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeSystemRemovalAdapter : NSObject
{
    LAPSCurrentPasscodeService *_currentPasscodeService;	// 8 = 0x8
    id <LAPSPasscodeChangeSystem> _changeSystem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000049db
- (void)verifyNewPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000049c5
- (void)changePasscode:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000049af
- (_Bool)canChangePasscodeWithError:(id *)arg1;	// IMP=0x0000000000004999
- (void)verifyPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004983
- (_Bool)hasPasscode;	// IMP=0x000000000000496d
- (id)lastPasscodeChange;	// IMP=0x0000000000004957
- (id)newPasscodeRequest;	// IMP=0x0000000000004946
- (id)oldPasscodeRequest;	// IMP=0x0000000000004930
- (id)initWithPersistence:(id)arg1;	// IMP=0x000000000000487a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
