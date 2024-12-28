//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookLibraryCore/NSObject-Protocol.h>

@class NSDictionary;

@protocol BLProgressReceiving <NSObject>
- (void)purchaseFailedWithUserInfo:(NSDictionary *)arg1;
- (void)purchaseSucceededWithUserInfo:(NSDictionary *)arg1;
- (void)downloadCompleteWithUserInfo:(NSDictionary *)arg1;
- (void)didFailWithUserInfo:(NSDictionary *)arg1;
- (void)progressWithUserInfo:(NSDictionary *)arg1;
@end
