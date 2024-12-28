//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHAttribution, SHEntitlements;

@interface SHClientCredentials : NSObject
{
    SHAttribution *_attribution;	// 8 = 0x8
    SHEntitlements *_entitlements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004375f
@property(readonly, nonatomic) SHEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) _Bool canEnableSpectralOutput;
@property(readonly, nonatomic) long long audioTapClient;
- (_Bool)isEntitledForSource:(long long)arg1;	// IMP=0x0010000000043603
@property(readonly, nonatomic) long long clientType;
- (id)initWithEntitlements:(id)arg1 attribution:(id)arg2;	// IMP=0x001000000004351d
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000043479

@end
