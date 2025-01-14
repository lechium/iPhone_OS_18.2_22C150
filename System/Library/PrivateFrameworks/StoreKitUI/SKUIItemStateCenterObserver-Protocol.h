//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSSet, SKUIItemStateCenter;

@protocol SKUIItemStateCenterObserver <NSObject>

@optional
- (void)itemStateCenterRestrictionsChanged:(SKUIItemStateCenter *)arg1;
- (void)itemStateCenterMediaLibrariesDidChange:(SKUIItemStateCenter *)arg1;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishSoftwarePurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishPurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 itemStatesChanged:(NSSet *)arg2;
@end

