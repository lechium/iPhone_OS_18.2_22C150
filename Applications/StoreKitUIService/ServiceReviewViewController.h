//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class SKUIConfigurationPreloader, SKUIReviewInAppController;

@interface ServiceReviewViewController : UIViewController
{
    SKUIConfigurationPreloader *_configurationPreloader;	// 8 = 0x8
    SKUIReviewInAppController *_reviewInAppController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x004000000000a411
+ (id)_exportedInterface;	// IMP=0x001000000000a3f1
- (void).cxx_destruct;	// IMP=0x002000000000c3ad
@property(retain, nonatomic) SKUIReviewInAppController *reviewInAppController; // @synthesize reviewInAppController=_reviewInAppController;
@property(retain, nonatomic) SKUIConfigurationPreloader *configurationPreloader; // @synthesize configurationPreloader=_configurationPreloader;
- (id)_clientViewControllerProxy;	// IMP=0x001000000000c362
- (void)_loadDidFailWithError:(id)arg1;	// IMP=0x001000000000bf40
- (id)_iconForApplication:(id)arg1;	// IMP=0x001000000000bde2
- (id)_inAppConfigurationWithItemID:(id)arg1 title:(id)arg2 icon:(id)arg3 sandboxed:(_Bool)arg4 clientContext:(id)arg5;	// IMP=0x001000000000bca7
- (void)_buildReviewInAppConfigurationWithParameters:(id)arg1 clientContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b01c
- (void)finishImmediately:(id)arg1;	// IMP=0x001000000000af24
- (void)setupWithParameters:(id)arg1;	// IMP=0x001000000000a431

@end

