//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUEditPlugin, PUEditPluginManager, UINavigationController, UIViewController;
@protocol PUEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUEditPluginSession : NSObject
{
    PUEditPluginManager *_pluginManager;	// 8 = 0x8
    UINavigationController *_pluginNavigationController;	// 16 = 0x10
    _Bool _isAvailable;	// 24 = 0x18
    id <PUEditPluginSessionDataSource> _dataSource;	// 32 = 0x20
    id <PUEditPluginSessionDelegate> _delegate;	// 40 = 0x28
    id <PUEditableAsset> _asset;	// 48 = 0x30
    long long _adjustmentType;	// 56 = 0x38
    PUEditPlugin *_currentPlugin;	// 64 = 0x40
    UIViewController *_hostViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000029efd4
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) PUEditPlugin *currentPlugin; // @synthesize currentPlugin=_currentPlugin;
@property(nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property(retain, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) __weak id <PUEditPluginSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2;	// IMP=0x000000000029ee46
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000029edb8
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029eba6
- (void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2;	// IMP=0x000000000029e713
- (void)presentAlertController:(id)arg1;	// IMP=0x000000000029e61d
- (void)shouldLaunchPlugin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000029e60a
- (void)editExtensionActivityViewController:(id)arg1 didSelectActivity:(id)arg2;	// IMP=0x000000000029e391
- (id)_localizedEditorListTitle;	// IMP=0x000000000029e355
- (void)dismissSession;	// IMP=0x000000000029e34f
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(_Bool)arg4;	// IMP=0x000000000029de2e
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(_Bool)arg4;	// IMP=0x000000000029dd46
- (id)_linkPresentationImage;	// IMP=0x000000000029dc67
- (void)_beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;	// IMP=0x000000000029d998
- (void)beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;	// IMP=0x000000000029d8a7
- (void)_unlockScreenIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000029d3f9
@property(readonly, nonatomic) _Bool markupIsAvailable;
- (void)updateAvailability;	// IMP=0x000000000029d259
- (void)_pluginManagerPluginsDidChange:(id)arg1;	// IMP=0x000000000029d247
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029d1cd
- (unsigned long long)pluginManagerMediaType;	// IMP=0x000000000029d150
- (void)dealloc;	// IMP=0x000000000029d0db
- (void)updatePluginManager;	// IMP=0x000000000029d022
- (id)init;	// IMP=0x000000000029cfd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
