//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBWalletPrearmRecognizer;

@protocol SBWalletPrearmRecognizerDelegate <NSObject>
- (void)walletPrearmRecognizer:(SBWalletPrearmRecognizer *)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(SBWalletPrearmRecognizer *)arg1;
@end

