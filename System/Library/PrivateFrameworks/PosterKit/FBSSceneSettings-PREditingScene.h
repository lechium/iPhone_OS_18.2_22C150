//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneSettings.h>

@class BSColor, NSArray, NSDate, NSString, PFServerPosterPath, PRPosterAmbientConfiguration, PRPosterConfigurableOptions, PRPosterConfiguredProperties, PRPosterTitleStyleConfiguration;

@interface FBSSceneSettings (PREditingScene)
@property(readonly, nonatomic) long long pr_focusedQuickActionElementPosition;
@property(readonly, nonatomic) NSDate *pr_overrideDate;
@property(readonly, copy, nonatomic) NSString *pr_titleString;
@property(readonly, nonatomic, getter=pr_areComplicationsDisallowed) _Bool pr_complicationsDisallowed;
@property(readonly, nonatomic, getter=pr_areControlsHidden) _Bool pr_controlsHidden;
@property(readonly, nonatomic) long long pr_focusedComplicationElement;
@property(readonly, nonatomic) _Bool pr_usesEditingLayout;
@property(readonly, nonatomic) struct CGRect pr_trailingTopButtonFrame;
@property(readonly, nonatomic) struct CGRect pr_leadingTopButtonFrame;
@property(readonly, nonatomic) long long pr_editingContext;
@property(readonly, nonatomic) long long pr_editingVariant;
@property(readonly, nonatomic) long long pr_editingAcceptButtonType;
@property(readonly, nonatomic, getter=pr_isCoveredByModalPresentation) _Bool pr_coveredByModalPresentation;
@property(readonly, nonatomic) long long pr_adjustedLuminance;
@property(readonly, nonatomic) unsigned long long pr_titleAlignment;
@property(readonly, nonatomic) _Bool pr_wakeSourceIsSwipeToUnlock;
@property(readonly, nonatomic) double pr_unlockProgress;
@property(readonly, nonatomic) struct CGRect pr_verticalTitleBoundingRect;
@property(readonly, nonatomic) struct CGRect pr_horizontalTitleBoundingRect;
@property(readonly, nonatomic, getter=pr_isAlternateDateEnabled) _Bool pr_alternateDateEnabled;
@property(readonly, nonatomic, getter=pr_isParallaxEffectivelyEnabled) _Bool pr_parallaxEffectivelyEnabled;
@property(readonly, nonatomic, getter=pr_isParallaxDisallowed) _Bool pr_parallaxDisallowed;
@property(readonly, nonatomic, getter=pr_isParallaxEnabled) _Bool pr_parallaxEnabled;
@property(readonly, nonatomic, getter=pr_isDepthEffectDisallowed) _Bool pr_depthEffectDisallowed;
@property(readonly, nonatomic) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property(readonly, nonatomic) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property(readonly, nonatomic) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property(readonly, nonatomic) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property(readonly, nonatomic) BSColor *pr_caseColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=pui_isComplicationRowConfigured) _Bool pui_complicationRowConfigured;
@property(readonly, nonatomic, getter=pui_isComplicationSidebarConfigured) _Bool pui_complicationSidebarConfigured;
@property(readonly, nonatomic) long long pui_content;
@property(readonly, nonatomic) long long pui_deviceOrientation;
@property(readonly, nonatomic, getter=pui_isExtensionUserInteractionEnabled) _Bool pui_extensionUserInteractionEnabled;
@property(readonly, nonatomic, getter=pui_isFloatingLayerSnapshot) _Bool pui_floatingLayerSnapshot;
@property(readonly, nonatomic, getter=pui_isInlineComplicationConfigured) _Bool pui_inlineComplicationConfigured;
@property(readonly, nonatomic) _Bool pui_isInvalidated;
@property(readonly, nonatomic) long long pui_mode;
@property(readonly, nonatomic) long long pui_posterBoundingShape;
@property(readonly, nonatomic) PFServerPosterPath *pui_posterContents;
@property(readonly, nonatomic) unsigned long long pui_previewContent;
@property(readonly, copy, nonatomic) NSString *pui_previewIdentifier;
@property(readonly, copy, nonatomic) NSString *pui_provider;
@property(readonly, copy, nonatomic) NSString *pui_role;
@property(readonly, nonatomic) NSArray *pui_sceneAttachments;
@property(readonly, nonatomic) _Bool pui_showsComplications;
@property(readonly, nonatomic) _Bool pui_showsHeaderElements;
@property(readonly, nonatomic) unsigned long long pui_significantEventsCounter;
@property(readonly, nonatomic, getter=pui_isSnapshot) _Bool pui_snapshot;
@property(readonly, nonatomic) long long pui_userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long pui_userTapEventsCounter;
@property(readonly, nonatomic) struct CGPoint pui_userTapLocation;
@property(readonly, nonatomic, getter=pui_isWallpaperObscured) _Bool pui_wallpaperObscured;
@property(readonly) Class superclass;
@end
