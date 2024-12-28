//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/BNPresentableObserving-Protocol.h>
#import <PassKitUI/NSObject-Protocol.h>
#import <PassKitUI/SBUISystemApertureElement-Protocol.h>

@protocol PKBannerViewControllerPresentable;

@protocol PKBannerViewController <NSObject, BNPresentableObserving, SBUISystemApertureElement>
@property(nonatomic) __weak id <PKBannerViewControllerPresentable> presentable;
- (void)revoked;
@end
