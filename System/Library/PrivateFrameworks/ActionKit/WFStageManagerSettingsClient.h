//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFSettingsClient.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface WFStageManagerSettingsClient : WFSettingsClient
{
    MISSING_TYPE *$__lazy_storage_$_manager;	// 8 = 0x8
}

+ (void)createClientWithCompletionHandler:(void (^)(WFSettingsClient *, NSError *))arg1;	// IMP=0x00100000000061b3
- (void).cxx_destruct;	// IMP=0x00000000000065f0
- (id)init;	// IMP=0x00000000000065af
@property(nonatomic) _Bool showDock;
@property(nonatomic) _Bool showRecentApps;
- (void)setState:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000000698b
- (void)getStateWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00000000000066d2

@end

