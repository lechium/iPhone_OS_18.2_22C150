//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSArray, NSSet, SUUIItemStateCenter;

@protocol SUUIItemStateCenterObserver <NSObject>

@optional
- (void)itemStateCenterRestrictionsChanged:(SUUIItemStateCenter *)arg1;
- (void)itemStateCenterMediaLibrariesDidChange:(SUUIItemStateCenter *)arg1;
- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 didFinishSoftwarePurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 didFinishPurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SUUIItemStateCenter *)arg1 itemStatesChanged:(NSSet *)arg2;
@end

