//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICLiveLinkIdentity, MPCPlaybackSharedListeningProperties, NSString;

__attribute__((visibility("hidden")))
@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject
{
    MPCPlaybackSharedListeningProperties *_sharedListeningProperties;	// 8 = 0x8
    ICLiveLinkIdentity *_identity;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000250727
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x00100000002e769e
- (void).cxx_destruct;	// IMP=0x0000000000250897
@property(copy, nonatomic) ICLiveLinkIdentity *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties; // @synthesize sharedListeningProperties=_sharedListeningProperties;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002507f8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025072f
- (id)mpc_jsonValue;	// IMP=0x00000000002e4a87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
