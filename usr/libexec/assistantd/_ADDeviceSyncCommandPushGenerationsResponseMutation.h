//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPushGenerationsResponse, NSString;

@interface _ADDeviceSyncCommandPushGenerationsResponseMutation : NSObject
{
    ADDeviceSyncCommandPushGenerationsResponse *_base;	// 8 = 0x8
    _mutationFlags_7a087e8a _mutationFlags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000184aed
- (_Bool)isDirty;	// IMP=0x0010000000184ae2
- (id)initWithBase:(id)arg1;	// IMP=0x0010000000184a77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
