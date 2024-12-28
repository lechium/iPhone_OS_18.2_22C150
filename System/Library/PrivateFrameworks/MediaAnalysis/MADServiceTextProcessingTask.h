//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMABaseTask.h"

@class MADServiceTextAsset, NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MADServiceTextProcessingTask : VCPMABaseTask
{
    NSArray *_requests;	// 8 = 0x8
    MADServiceTextAsset *_asset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    NSMutableArray *_subtasks;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022b105
@property(retain, nonatomic) NSString *signpostPayload; // @synthesize signpostPayload=_signpostPayload;
- (void)cancel;	// IMP=0x000000000022af46
- (_Bool)run:(id *)arg1;	// IMP=0x000000000022a2c0
- (_Bool)interruptBackgroundTasks;	// IMP=0x000000000022a2b8
- (_Bool)cachesResources;	// IMP=0x000000000022a2b0
- (id)initWithRequests:(id)arg1 asset:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022a0b2

@end
