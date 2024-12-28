//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOMobileAssetResourceUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_updateWorkQueue;	// 8 = 0x8
    _Bool _running;	// 16 = 0x10
}

+ (void)run;	// IMP=0x0040000000017f20
+ (id)sharedUpdater;	// IMP=0x0010000000017dbc
- (void).cxx_destruct;	// IMP=0x0020000000018e4a
- (void)_pruneOldResourcesIn:(id)arg1;	// IMP=0x00100000000189b9
- (void)_processResources:(id)arg1 group:(id)arg2;	// IMP=0x001000000001866f
- (void)_fetchAssets;	// IMP=0x00100000000182dd
- (void)_updateComplete;	// IMP=0x001000000001825b
- (void)_updateOnQueue;	// IMP=0x0010000000017fd2
- (void)_update:(id)arg1;	// IMP=0x0010000000017f71
- (void)triggerUpdate:(id)arg1;	// IMP=0x0010000000017f5f
- (id)initInternal;	// IMP=0x0010000000017e21

@end
