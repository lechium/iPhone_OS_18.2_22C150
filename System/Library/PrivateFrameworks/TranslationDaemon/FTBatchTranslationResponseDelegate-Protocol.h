//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationDaemon/NSObject-Protocol.h>

@class FTBatchTranslationStreamingResponse, NSError;

@protocol FTBatchTranslationResponseDelegate <NSObject>

@optional
- (void)streamFailVerifyBatchTranslationStreamingResponse:(NSError *)arg1;
- (void)streamDidReceiveBatchTranslationStreamingResponse:(FTBatchTranslationStreamingResponse *)arg1;
@end

