//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Stocks/NSObject-Protocol.h>

@protocol SCKOperationThrottler;

@protocol SCKOperationThrottlerDelegate <NSObject>

@optional
- (void)operationThrottler:(id <SCKOperationThrottler>)arg1 performAsyncOperationWithCompletion:(void (^)(void))arg2;
- (void)operationThrottlerPerformOperation:(id <SCKOperationThrottler>)arg1;
@end

