//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class BSTransaction;

@protocol BSTransactionObserver <NSObject>

@optional
- (void)transactionDidComplete:(BSTransaction *)arg1;
- (void)transactionDidFinishWork:(BSTransaction *)arg1;
- (void)transactionDidBegin:(BSTransaction *)arg1;
- (void)transactionWillBegin:(BSTransaction *)arg1;
@end

