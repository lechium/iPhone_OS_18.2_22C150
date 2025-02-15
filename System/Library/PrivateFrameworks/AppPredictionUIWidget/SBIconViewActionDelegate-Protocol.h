//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class NSString, SBIconView, UITouch;

@protocol SBIconViewActionDelegate <NSObject>

@optional
- (void)iconView:(SBIconView *)arg1 wantsResizeToGridSizeClass:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)iconAccessoryViewTapped:(SBIconView *)arg1;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1 modifierFlags:(long long)arg2;
- (void)iconTapped:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;
@end

