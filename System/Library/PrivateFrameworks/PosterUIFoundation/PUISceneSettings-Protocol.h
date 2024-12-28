//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterUIFoundation/NSObject-Protocol.h>

@class NSArray, NSString, PFServerPosterPath;

@protocol PUISceneSettings <NSObject>
@property(readonly, nonatomic) NSArray *pui_sceneAttachments;
@property(readonly, nonatomic) unsigned long long pui_previewContent;
@property(readonly, nonatomic) long long pui_content;
@property(readonly, nonatomic) long long pui_mode;
@property(readonly, nonatomic) unsigned long long pui_userTapEventsCounter;
@property(readonly, nonatomic) struct CGPoint pui_userTapLocation;
@property(readonly, nonatomic) unsigned long long pui_significantEventsCounter;
@property(readonly, nonatomic, getter=pui_isFloatingLayerSnapshot) _Bool pui_floatingLayerSnapshot;
@property(readonly, nonatomic, getter=pui_isSnapshot) _Bool pui_snapshot;
@property(readonly, nonatomic) long long pui_posterBoundingShape;
@property(readonly, nonatomic) long long pui_userInterfaceStyle;
@property(readonly, nonatomic) _Bool pui_showsHeaderElements;
@property(readonly, nonatomic) _Bool pui_showsComplications;
@property(readonly, nonatomic, getter=pui_isComplicationSidebarConfigured) _Bool pui_complicationSidebarConfigured;
@property(readonly, nonatomic, getter=pui_isComplicationRowConfigured) _Bool pui_complicationRowConfigured;
@property(readonly, nonatomic, getter=pui_isInlineComplicationConfigured) _Bool pui_inlineComplicationConfigured;
@property(readonly, nonatomic, getter=pui_isExtensionUserInteractionEnabled) _Bool pui_extensionUserInteractionEnabled;
@property(readonly, nonatomic, getter=pui_isWallpaperObscured) _Bool pui_wallpaperObscured;
@property(readonly, nonatomic) PFServerPosterPath *pui_posterContents;
@property(readonly, nonatomic) long long pui_deviceOrientation;
@property(readonly, copy, nonatomic) NSString *pui_previewIdentifier;
@property(readonly, nonatomic) _Bool pui_isInvalidated;
@property(readonly, copy, nonatomic) NSString *pui_provider;
@property(readonly, copy, nonatomic) NSString *pui_role;
@end
