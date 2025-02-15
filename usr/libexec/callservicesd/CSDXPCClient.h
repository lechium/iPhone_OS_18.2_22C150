//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSXPCConnection, RBSAssertion;
@protocol TUFeatureFlags;

@interface CSDXPCClient
{
    _Bool _supportsClientAssertions;	// 8 = 0x8
    int _processIdentifier;	// 12 = 0xc
    NSString *_processName;	// 16 = 0x10
    NSString *_processBundleIdentifier;	// 24 = 0x18
    NSSet *_entitledCapabilities;	// 32 = 0x20
    RBSAssertion *_processAssertion;	// 40 = 0x28
    id <TUFeatureFlags> _featureFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000d2aaf
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(readonly, copy, nonatomic) NSSet *entitledCapabilities; // @synthesize entitledCapabilities=_entitledCapabilities;
@property(nonatomic) _Bool supportsClientAssertions; // @synthesize supportsClientAssertions=_supportsClientAssertions;
- (id)processBundleIdentifier;	// IMP=0x00100000000d2a37
- (id)processName;	// IMP=0x00100000000d2a26
- (int)processIdentifier;	// IMP=0x00100000000d2a16
- (void)invalidate;	// IMP=0x00100000000d2995
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00100000000d291b
- (_Bool)isEntitledForCapability:(id)arg1;	// IMP=0x00100000000d28ad
- (void)performBlockAfterCoalescing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d2760
- (id)acquireAssertionIfNecessary;	// IMP=0x00100000000d265f
- (id)newProcessAssertion;	// IMP=0x00100000000d254d
- (id)objectForBlock;	// IMP=0x00100000000d24fd
- (_Bool)isRemote;	// IMP=0x00100000000d24f5
- (void)dealloc;	// IMP=0x00100000000d24b7
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)propertiesDescription;	// IMP=0x00100000000d23f6
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d20ae

@end

