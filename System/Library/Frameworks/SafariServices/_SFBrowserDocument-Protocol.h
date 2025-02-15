//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSSet, NSURL, NSUUID, SFBrowserDocumentTrackerInfo, SFContentBlockerManager, SFWebExtensionsController, WBSBrowsingAssistantController, WBSTranslationContext, _SFPerSitePreferencesVendor, _SFReloadOptionsController, _SFWebView;
@protocol SFReaderContext;

@protocol _SFBrowserDocument <NSObject>
@property(readonly, nonatomic) _Bool isSecure;
@property(readonly, nonatomic) WBSTranslationContext *translationContext;
@property(readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property(copy, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) _Bool isBlockedByScreenTime;
@property(readonly, nonatomic) _Bool isShowingSystemStartPage;
@property(readonly, nonatomic) _Bool isPlayingAudio;
@property(readonly, nonatomic) _Bool browserHasMultipleProfiles;
@property(readonly, nonatomic) WBSBrowsingAssistantController *assistantController;
@property(readonly, nonatomic) _Bool allowsBrowsingAssistant;
@property(readonly, nonatomic) SFContentBlockerManager *contentBlockerManager;
@property(readonly, nonatomic) SFWebExtensionsController *webExtensionsController;
@property(readonly, nonatomic) unsigned long long mediaStateIcon;
@property(readonly, nonatomic) _Bool canHideToolbar;
@property(readonly, nonatomic) _Bool privacyReportShouldSeparateBlockedTrackers;
@property(readonly, nonatomic) _Bool wasLoadedWithAdvancedPrivateBrowsingPrivacyProtections;
@property(readonly, nonatomic, getter=isPrivateBrowsingEnabled) _Bool privateBrowsingEnabled;
@property(nonatomic) _Bool isNavigatingViaReloadWithoutPrivateRelay;
@property(readonly, nonatomic) _Bool wasLoadedWithPrivateRelay;
@property(readonly, nonatomic) _Bool wasLoadedWithContentBlockersEnabled;
@property(readonly, nonatomic) NSURL *URLForPerSitePreferences;
@property(readonly, nonatomic) id <SFReaderContext> readerContext;
@property(readonly, nonatomic) _SFReloadOptionsController *reloadOptionsController;
@property(readonly, nonatomic) _SFWebView *activeWebView;
@property(readonly, nonatomic) _SFWebView *webView;
- (void)showFindOnPage;
- (_Bool)supportsAdvancedPrivacyProtectionsForURL:(NSURL *)arg1;
- (void)reloadDisablingAdvancedPrivateBrowsingPrivacyProtections:(_Bool)arg1;
- (void)reloadEnablingDowngradedPrivateRelay:(_Bool)arg1;
- (void)toggleMediaStateMuted;
- (void)perSiteSettingsUIPresentSettings;
- (void)reloadDisablingContentBlockers:(_Bool)arg1;
- (void)reload;

@optional
@property(readonly, copy, nonatomic) NSSet *allBrowserProfileIdentifiers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R,C,N

@property(readonly, copy, nonatomic) NSSet *allBrowserHistories;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R,C,N

@property(readonly, nonatomic) SFBrowserDocumentTrackerInfo *trackerInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SFBrowserDocumentTrackerInfo",?,R,N

@end

