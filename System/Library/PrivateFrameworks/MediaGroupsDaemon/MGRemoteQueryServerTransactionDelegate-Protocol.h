//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaGroupsDaemon/NSObject-Protocol.h>

@class MGRemoteQueryServerTransaction;

@protocol MGRemoteQueryServerTransactionDelegate <NSObject>
- (void)transactionInvalidated:(MGRemoteQueryServerTransaction *)arg1;
- (void)transactionActivityOccurred:(MGRemoteQueryServerTransaction *)arg1;
- (void)transaction:(MGRemoteQueryServerTransaction *)arg1 receivedTimeoutInterval:(unsigned long long)arg2;
@end
