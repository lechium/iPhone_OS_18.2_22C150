//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface COSBeamBridgeUserStudyController : NSObject
{
    long long _orientation;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0040000000136938
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (_Bool)continueUserStudyPhase;	// IMP=0x0010000000136ab1
- (void)startNewUserStudy;	// IMP=0x0010000000136a97
- (void)overrideWristAndCrownChoices;	// IMP=0x00100000001369d9
- (id)init;	// IMP=0x001000000013698d

@end
