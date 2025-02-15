//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ABSContactsReclusterizer : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    NSMutableDictionary *_clusters;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000015165
- (void).cxx_destruct;	// IMP=0x00200000000164bd
- (void)_insureContact:(id)arg1 isClustered:(id)arg2;	// IMP=0x0010000000015d2a
- (void)_insureContactsAreSolo:(id)arg1;	// IMP=0x001000000001597e
- (void)_processClusters;	// IMP=0x00100000000153f0
- (void)_registerForNotifications;	// IMP=0x0010000000015355
- (void)stashCluster:(id)arg1 forGuid:(id)arg2;	// IMP=0x0010000000015247
- (id)init;	// IMP=0x00100000000151ba

@end

