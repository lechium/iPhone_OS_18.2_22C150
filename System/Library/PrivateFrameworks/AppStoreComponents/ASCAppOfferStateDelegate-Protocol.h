//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCOfferMetadata, NSString;
@protocol ASCOffer;

@protocol ASCAppOfferStateDelegate <NSObject>
- (void)offer:(id <ASCOffer>)arg1 didChangeStatusText:(NSString *)arg2;
- (void)offer:(id <ASCOffer>)arg1 didChangeState:(NSString *)arg2 withMetadata:(ASCOfferMetadata *)arg3 flags:(long long)arg4;
@end
