//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIServices/SBCrossfadingIconImageSource-Protocol.h>

@class NSArray, NSString, SBHIconImageAppearance, SBHIconImageStyleConfiguration, SBIcon, SBSApplicationShortcutItem, UIBezierPath, UIPreviewParameters, UIView, _UILegibilitySettings;
@protocol BSInvalidatable, SBIconListLayoutProvider, SBIconViewCustomImageViewControllerObserving, SBIconViewCustomImageViewHosting, SBLeafIconDataSource;

@protocol SBIconViewCustomImageViewControlling <SBCrossfadingIconImageSource>
@property(nonatomic) struct SBIconImageInfo iconImageInfo;

@optional
@property(nonatomic) __weak id <SBIconViewCustomImageViewHosting> host;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SBIconViewCustomImageViewHosting>",?,W,N

@property(copy, nonatomic) SBHIconImageStyleConfiguration *overrideIconImageStyleConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHIconImageStyleConfiguration",?,C,N

@property(copy, nonatomic) SBHIconImageAppearance *overrideIconImageAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHIconImageAppearance",?,C,N

@property(nonatomic) struct SBIconApproximateLayoutPosition approximateLayoutPosition;
// Preceding property had unknown attributes: ?
// Original attribute string: T{SBIconApproximateLayoutPosition=QQ},?,N

@property(readonly, nonatomic) UIView *springLoadingEffectTargetView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

@property(readonly, nonatomic) UIBezierPath *snapshotViewVisiblePath;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIBezierPath",?,R,N

@property(readonly, nonatomic) double snapshotViewScaleFactor;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) struct CGPoint snapshotViewCenter;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGPoint=dd},?,R,N

@property(readonly, nonatomic) UIView *snapshotView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

@property(readonly, nonatomic) struct UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,R,N

@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"_UILegibilitySettings",?,&,N

@property(nonatomic) unsigned long long contentVisibility;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long pauseReasons;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long imageViewAlignment;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) _Bool showsSnapshotWhenDeactivated;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) unsigned long long presentationMode;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) _Bool automaticallyUpdatesVisiblySettled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) unsigned long long userVisibilityStatus;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) _Bool wantsLabelHidden;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(nonatomic) double brightness;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) _Bool forcesEdgeAntialiasing;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) CDUnknownBlockType backgroundViewConfigurator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType backgroundViewProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(readonly, nonatomic) _Bool wantsCaptureOnlyBackgroundView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisUserInteractionEnabled

@property(nonatomic, getter=isDropping) _Bool dropping;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisDropping

@property(nonatomic, getter=isOverlapping) _Bool overlapping;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisOverlapping

@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisShowingContextMenu

@property(nonatomic) _Bool wantsEditingDisplayStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic, getter=isJittering) _Bool jittering;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisJittering

@property(nonatomic, getter=isEditing) _Bool editing;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisEditing

@property(readonly, nonatomic) id <SBLeafIconDataSource> visiblyActiveDataSource;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SBLeafIconDataSource>",?,R,N

@property(readonly, nonatomic) SBIcon *icon;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBIcon",?,R,N

- (void)willUsePreviewParameters:(UIPreviewParameters *)arg1;
- (void)removeCustomImageViewControllerObserver:(id <SBIconViewCustomImageViewControllerObserving>)arg1;
- (void)addCustomImageViewControllerObserver:(id <SBIconViewCustomImageViewControllerObserving>)arg1;
- (struct CGPoint)focusEffectCenter;
- (struct CGRect)focusEffectBounds;
- (id <BSInvalidatable>)cancelTouchesForCurrentEventInHostedContent;
- (id <BSInvalidatable>)disableImageUpdatesForReason:(NSString *)arg1;
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;
- (void)didSelectApplicationShortcutItem:(SBSApplicationShortcutItem *)arg1;
- (void)evaluateBackground;
- (void)setListLayoutProvider:(id <SBIconListLayoutProvider>)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@end
