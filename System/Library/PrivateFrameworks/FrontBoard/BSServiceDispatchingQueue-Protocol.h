//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@protocol BSServiceDispatchingQueue <NSObject>
- (void)performAsync:(void (^)(void))arg1 withHandoff:(NSObject<OS_xpc_object> *)arg2;
- (void)performAsync:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)backingQueueIfExists;
- (void)assertBarrierOnQueue;
@end
