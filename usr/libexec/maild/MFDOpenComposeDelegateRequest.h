//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFDOpenComposeDelegateConfigurationStore, NSString;

@interface MFDOpenComposeDelegateRequest
{
    MFDOpenComposeDelegateConfigurationStore *_store;	// 8 = 0x8
}

+ (id)endpointInfo;	// IMP=0x002000000007b1ee
+ (id)exportedInterface;	// IMP=0x001000000007b1ce
+ (id)log;	// IMP=0x001000000007b0f1
- (void).cxx_destruct;	// IMP=0x002000000007b56f
- (void)checkInComposeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b3e6
- (id)initWithClient:(id)arg1 store:(id)arg2;	// IMP=0x001000000007b35a
- (id)initWithClient:(id)arg1;	// IMP=0x001000000007b2c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
