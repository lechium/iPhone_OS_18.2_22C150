//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>

@class BNBannerSourcePresentableContext, BSProcessHandle;

@protocol BNBannerSourcePresentableContextDelegate <NSObject>

@optional
- (void)bannerSourcePresentableContextTouchOutsideDismissalEnabledDidChange:(BNBannerSourcePresentableContext *)arg1;
- (void)bannerSourcePresentableContextDraggingInteractionEnabledDidChange:(BNBannerSourcePresentableContext *)arg1;
- (void)bannerSourcePresentableContextDraggingDismissalEnabledDidChange:(BNBannerSourcePresentableContext *)arg1;
- (_Bool)bannerSourcePresentableContext:(BNBannerSourcePresentableContext *)arg1 isConnectingProcessAuthorized:(BSProcessHandle *)arg2 error:(out id *)arg3;
@end

