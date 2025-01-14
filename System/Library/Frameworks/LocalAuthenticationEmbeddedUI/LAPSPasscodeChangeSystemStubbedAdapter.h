//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeSystemStubbedAdapter : NSObject
{
}

- (void)changePasscode:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012676
- (_Bool)canChangePasscodeWithError:(id *)arg1;	// IMP=0x000000000001266e
- (void)verifyNewPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000125c2
- (void)verifyPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012452
- (_Bool)hasPasscode;	// IMP=0x000000000001244a
- (id)lastPasscodeChange;	// IMP=0x00000000000123eb
- (id)newPasscodeRequest;	// IMP=0x00000000000121e3
- (id)oldPasscodeRequest;	// IMP=0x000000000001215e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

