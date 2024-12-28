//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SFWebAppDataProvider;

__attribute__((visibility("hidden")))
@interface SFAddToHomeScreenServiceViewController : UIViewController
{
    SFWebAppDataProvider *_provider;	// 8 = 0x8
}

+ (id)_exportedInterface;	// IMP=0x001000000017d8b1
+ (id)_remoteViewControllerInterface;	// IMP=0x001000000017d891
- (void).cxx_destruct;	// IMP=0x000000000017df83
- (void)dataProvider:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x000000000017df39
@property(readonly, nonatomic) NSString *trustedClientBundleIdentifier;
- (void)didCopyStagedCookiesToURL:(id)arg1 sandboxExtensionToken:(id)arg2;	// IMP=0x000000000017de15
- (void)didReceiveWebClipIcon:(id)arg1;	// IMP=0x000000000017ddf8
- (void)didFetchWebClipMetadata:(id)arg1;	// IMP=0x000000000017dd30
- (void)didFetchManifestData:(id)arg1;	// IMP=0x000000000017dc68
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017db9d
- (void)viewDidLoad;	// IMP=0x000000000017da0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
