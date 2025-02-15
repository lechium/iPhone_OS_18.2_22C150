//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIEditMenuConfiguration, UIMenu, UIView, _UIEditMenuPresentation;
@protocol UIEditMenuInteractionAnimating, _UIMenuLeaf;

@protocol _UIEditMenuPresentationDelegate <NSObject>
- (NSArray *)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 preferredLayoutRectsForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIView *)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 titleViewForMenu:(UIMenu *)arg2 configuration:(UIEditMenuConfiguration *)arg3;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 didTransitionMenuForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 willDismissMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 willPresentMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (struct CGRect)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 targetRectForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 didSelectMenuLeaf:(id <_UIMenuLeaf>)arg2 completion:(void (^)(void))arg3;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 preparedMenuForDisplay:(UIMenu *)arg2 completion:(void (^)(UIMenu *))arg3;
@end

