//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PUISceneSettings-Protocol.h>

@class BSAction, NSArray, NSString, PFServerPosterPath;

@protocol PUIMutableSceneSettings <PUISceneSettings>
@property(retain, nonatomic, setter=pui_setSceneAttachments:) NSArray *pui_sceneAttachments;
@property(nonatomic, setter=pui_setPreviewContent:) unsigned long long pui_previewContent;
@property(nonatomic, setter=pui_setContent:) long long pui_content;
@property(nonatomic, setter=pui_setMode:) long long pui_mode;
@property(nonatomic, setter=pui_setUserTapEventsCounter:) unsigned long long pui_userTapEventsCounter;
@property(nonatomic, setter=pui_setUserTapEventWithLocation:) struct CGPoint pui_userTapLocation;
@property(nonatomic, setter=pui_setSignificantEventsCounter:) unsigned long long pui_significantEventsCounter;
@property(nonatomic, getter=pui_isFloatingLayerSnapshot, setter=pui_setFloatingLayerSnapshot:) _Bool pui_floatingLayerSnapshot;
@property(nonatomic, getter=pui_isSnapshot, setter=pui_setSnapshot:) _Bool pui_snapshot;
@property(nonatomic, setter=pui_setPosterBoundingShape:) long long pui_posterBoundingShape;
@property(nonatomic, setter=pui_setUserInterfaceStyle:) long long pui_userInterfaceStyle;
@property(nonatomic, setter=pui_setShowsHeaderElements:) _Bool pui_showsHeaderElements;
@property(nonatomic, setter=pui_setShowsComplications:) _Bool pui_showsComplications;
@property(nonatomic, getter=pui_isComplicationSidebarConfigured, setter=pui_setComplicationSidebarConfigured:) _Bool pui_complicationSidebarConfigured;
@property(nonatomic, getter=pui_isComplicationRowConfigured, setter=pui_setComplicationRowConfigured:) _Bool pui_complicationRowConfigured;
@property(nonatomic, getter=pui_isInlineComplicationConfigured, setter=pui_setInlineComplicationConfigured:) _Bool pui_inlineComplicationConfigured;
@property(nonatomic, getter=pui_isExtensionUserInteractionEnabled, setter=pui_setExtensionUserInteractionEnabled:) _Bool pui_extensionUserInteractionEnabled;
@property(nonatomic, getter=pui_isWallpaperObscured, setter=pui_setWallpaperObscured:) _Bool pui_wallpaperObscured;
@property(retain, nonatomic, setter=pui_setPosterContents:) PFServerPosterPath *pui_posterContents;
@property(nonatomic, setter=pui_setDeviceOrientation:) long long pui_deviceOrientation;
@property(copy, nonatomic, setter=pui_setPreviewIdentifier:) NSString *pui_previewIdentifier;
@property(copy, nonatomic, setter=pui_setProvider:) NSString *pui_provider;
@property(copy, nonatomic, setter=pui_setRole:) NSString *pui_role;
- (void)pui_setInvalidated:(BSAction *)arg1;
- (void)pui_setInvalidated;
@end
