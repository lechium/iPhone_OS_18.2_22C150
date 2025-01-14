//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSObject, RBProcess;
@protocol OS_dispatch_queue, RBTimeProvidingEvent;

@protocol RBTimeProviding <NSObject>
- (id <RBTimeProvidingEvent>)executeWithCancellingAfter:(double)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)executeAfter:(double)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (double)startTimeForProcess:(RBProcess *)arg1;
- (double)currentTime;
@end

