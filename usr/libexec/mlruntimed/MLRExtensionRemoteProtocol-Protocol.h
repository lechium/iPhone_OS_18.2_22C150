//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MLRInternalTrialTask, NSArray;
@protocol MLRInternalTaskRepresenting;

@protocol MLRExtensionRemoteProtocol <NSObject>
- (void)simulateCrash;
- (void)stop;
- (void)performTask:(id <MLRInternalTaskRepresenting>)arg1 sandBoxExtensions:(NSArray *)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)performTrialTask:(MLRInternalTrialTask *)arg1 completion:(void (^)(MLRInternalTrialTaskResult *, NSError *))arg2;
@end
