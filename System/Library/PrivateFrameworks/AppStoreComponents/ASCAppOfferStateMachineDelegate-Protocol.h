//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCOfferMetadata, NSString;

@protocol ASCAppOfferStateMachineDelegate <NSObject>
- (void)offerStatusTextDidChange:(NSString *)arg1;
- (void)offerStateDidChange:(NSString *)arg1 withMetadata:(ASCOfferMetadata *)arg2 isActionable:(_Bool)arg3;
@end

