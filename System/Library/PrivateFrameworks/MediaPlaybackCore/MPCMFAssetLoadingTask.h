//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MFAssetLoadingTask;

__attribute__((visibility("hidden")))
@interface MPCMFAssetLoadingTask : NSObject
{
    id <MFAssetLoadingTask> _mfTask;	// 8 = 0x8
}

+ (id)wrap:(id)arg1;	// IMP=0x00100000001dce4a
- (void).cxx_destruct;	// IMP=0x00000000001dce3a
- (_Bool)isCancelled;	// IMP=0x00000000001dce24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

