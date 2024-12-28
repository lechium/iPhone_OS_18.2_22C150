//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSError, SBSystemAction, SBSystemActionInteractionContext;
@protocol BSInvalidatable, SBSystemActionPreviewCoordinating;

@protocol SBSystemActionExecuting <NSObject>
@property(readonly, nonatomic) _Bool requiresAuthenticationAtLeastOnceSinceBootBeforeExecution;
@property(readonly, nonatomic) double executionEndTime;
@property(readonly, nonatomic) double executionStartTime;
@property(readonly, nonatomic) unsigned long long executionGeneration;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, nonatomic) _Bool canBeExecuted;
@property(readonly, nonatomic) SBSystemAction *systemAction;
- (id <BSInvalidatable>)executeWithContext:(SBSystemActionInteractionContext *)arg1 executionHandler:(void (^)(void (^)(_Bool, NSError *)))arg2 completion:(void (^)(id <SBSystemActionExecuting>, NSError *))arg3;
- (void)cancelPreviewing;
- (NSError *)previewWithCoordinator:(id <SBSystemActionPreviewCoordinating>)arg1;
@end
