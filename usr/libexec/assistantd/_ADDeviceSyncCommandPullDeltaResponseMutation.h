//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullDeltaResponse, NSArray, NSString;

@interface _ADDeviceSyncCommandPullDeltaResponseMutation : NSObject
{
    ADDeviceSyncCommandPullDeltaResponse *_base;	// 8 = 0x8
    NSArray *_incrementalChanges;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIncrementalChanges:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001024ac
- (void)setIncrementalChanges:(id)arg1;	// IMP=0x001000000010248c
- (id)getIncrementalChanges;	// IMP=0x0010000000102454
- (_Bool)isDirty;	// IMP=0x0010000000102449
- (id)initWithBase:(id)arg1;	// IMP=0x00100000001023de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
