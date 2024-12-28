//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PREditorColorPickerConfiguration, UIAction, UIView, UIViewController;
@protocol PUPosterEditingLook, PXInvalidatable;

@protocol PUPosterEditor <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets pu_editingChromeDodgingInsets;
@property(readonly, nonatomic) UIAction *pu_placeholderAction;
@property(readonly, nonatomic) _Bool pu_isDepthEffectDisallowed;
@property(nonatomic, getter=isPerspectiveZoomEnabled) _Bool perspectiveZoomEnabled;
@property(readonly, nonatomic) _Bool pu_canApplyParallaxToViews;
@property(readonly, copy, nonatomic) id <PUPosterEditingLook> pu_currentLook;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (UIView *)pu_viewForMenuElementIdentifier:(NSString *)arg1;
- (id <PXInvalidatable>)pu_disableIdleTimer;
- (void)pu_requestDismissalWithAction:(long long)arg1;
- (void)pu_updateLuminanceValuesForLooks;
- (void)pu_updateLookProperties;
- (void)pu_updateLooks;
- (void)px_updatePreferences:(void (^)(id <PUMutablePosterEditorPreferences>, id <PXPosterTransition>))arg1;
- (void)presentColorPickerWithConfiguration:(PREditorColorPickerConfiguration *)arg1 changeHandler:(void (^)(UIColor *))arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)updateActions;
@end
