//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, MPPlaybackContext, NSArray, NSString, NSURL, UIViewController, VideosExtrasRootViewController;
@protocol TVPMediaItem, VideosExtrasContextDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasContext : NSObject
{
    _Bool _isStarted;	// 8 = 0x8
    id <VideosExtrasContextDelegate> _delegate;	// 16 = 0x10
    UIViewController *_featurePlaybackViewController;	// 24 = 0x18
    MPPlaybackContext *_featurePlaybackContext;	// 32 = 0x20
    VideosExtrasRootViewController *_extrasRootViewController;	// 40 = 0x28
    MPMediaItem *_mediaItem;	// 48 = 0x30
    NSObject<TVPMediaItem> *_tvpMediaItem;	// 56 = 0x38
    NSURL *_javascriptURL;	// 64 = 0x40
    NSString *_buyParameters;	// 72 = 0x48
    long long _storeID;	// 80 = 0x50
    unsigned long long _selectedMainMenuIndex;	// 88 = 0x58
}

+ (Class)extrasRootViewControllerClass;	// IMP=0x00100000002c9a43
+ (id)overriddenJavascriptURL;	// IMP=0x00100000002c9a32
+ (void)overrideJavascriptURL:(id)arg1;	// IMP=0x00100000002c9a1e
- (void).cxx_destruct;	// IMP=0x00000000002c9b09
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) unsigned long long selectedMainMenuIndex; // @synthesize selectedMainMenuIndex=_selectedMainMenuIndex;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
@property(readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(readonly, copy, nonatomic) NSURL *javascriptURL; // @synthesize javascriptURL=_javascriptURL;
@property(readonly, nonatomic) NSObject<TVPMediaItem> *tvpMediaItem; // @synthesize tvpMediaItem=_tvpMediaItem;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) VideosExtrasRootViewController *extrasRootViewController; // @synthesize extrasRootViewController=_extrasRootViewController;
@property(retain, nonatomic) MPPlaybackContext *featurePlaybackContext; // @synthesize featurePlaybackContext=_featurePlaybackContext;
@property(retain, nonatomic) UIViewController *featurePlaybackViewController; // @synthesize featurePlaybackViewController=_featurePlaybackViewController;
@property(nonatomic) __weak id <VideosExtrasContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)extrasRootViewController:(id)arg1 extrasVisibilityNeedsUpdate:(_Bool)arg2;	// IMP=0x00000000002c9979
- (void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg1;	// IMP=0x00000000002c98dc
- (_Bool)shouldExtrasBeVisibleForSize:(struct CGSize)arg1;	// IMP=0x00000000002c98c6
- (_Bool)isMenuItemElementMainFeature:(id)arg1;	// IMP=0x00000000002c9847
@property(readonly, nonatomic) NSArray *mainMenuItemElements;
- (void)clearNavStack;	// IMP=0x00000000002c9770
- (void)setClearsStackOnNextPush;	// IMP=0x00000000002c96f5
@property(nonatomic) _Bool showsMenuBar;
@property(nonatomic) _Bool showsBuiltInNavigationControls;
- (void)startIfNecessary;	// IMP=0x00000000002c9650
- (void)failWithError:(id)arg1;	// IMP=0x00000000002c95e5
- (void)extrasRequestReloadWithContext:(id)arg1;	// IMP=0x00000000002c955e
- (void)extrasDoneButtonPressed;	// IMP=0x00000000002c94c4
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002c9415
- (void)extrasBackButtonPressed;	// IMP=0x00000000002c937b
- (void)extrasRequestsPlaybackStop;	// IMP=0x00000000002c933e
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(_Bool)arg2;	// IMP=0x00000000002c92c9
- (void)_configureForMediaItem:(id)arg1;	// IMP=0x00000000002c9196
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 mediaItem:(id)arg4;	// IMP=0x00000000002c909c
- (id)initWithTVPMediaItem:(id)arg1;	// IMP=0x00000000002c8f71
- (id)initWithMediaItem:(id)arg1;	// IMP=0x00000000002c8f1f
- (id)init;	// IMP=0x00000000002c8e8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

