//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsSessionInternal : HMFObject
{
    HMDAccessory *_accessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    unsigned long long _maxBytes;	// 32 = 0x20
    unsigned long long _bytesWritten;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003cb651
- (void).cxx_destruct;	// IMP=0x00000000003cb611
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(nonatomic) unsigned long long maxBytes; // @synthesize maxBytes=_maxBytes;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x00000000003cb527
- (void)setUpWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003cb463
- (void)shutDown;	// IMP=0x00000000003cb3bb
- (id)attributeDescriptions;	// IMP=0x00000000003cb2ef
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000003cb23d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
