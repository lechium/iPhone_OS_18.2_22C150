//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol FCOperationRetrySignal <NSObject>
- (void)onQueue:(NSObject<OS_dispatch_queue> *)arg1 signal:(void (^)(_Bool))arg2;
@end

