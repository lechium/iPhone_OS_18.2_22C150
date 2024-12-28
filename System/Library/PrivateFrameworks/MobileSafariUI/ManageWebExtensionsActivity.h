//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivity.h>

@class NSString, UIActivityViewController, UIViewController;
@protocol _SFBrowserDocument;

__attribute__((visibility("hidden")))
@interface ManageWebExtensionsActivity : UIActivity
{
    NSString *_numberOfNewlyInstalledExtensions;	// 8 = 0x8
    UIViewController *_activityViewController;	// 16 = 0x10
    UIActivityViewController *_parentActivityViewController;	// 24 = 0x18
    id <_SFBrowserDocument> _browserDocument;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ce56f
@property(retain, nonatomic) id <_SFBrowserDocument> browserDocument; // @synthesize browserDocument=_browserDocument;
@property(nonatomic) __weak UIActivityViewController *parentActivityViewController; // @synthesize parentActivityViewController=_parentActivityViewController;
- (void)extensionsControllerExtensionListDidChange:(id)arg1;	// IMP=0x00000000000ce4d0
- (void)_reloadBadgeCount;	// IMP=0x00000000000ce47d
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000ce475
- (id)activityViewController;	// IMP=0x00000000000ce417
- (id)_activityBadgeTextColor;	// IMP=0x00000000000ce3fe
- (id)_activityBadgeColor;	// IMP=0x00000000000ce3de
- (id)_activityBadgeText;	// IMP=0x00000000000ce3c9
- (id)_systemImageName;	// IMP=0x00000000000ce3bc
- (id)activityTitle;	// IMP=0x00000000000ce39d
- (id)activityType;	// IMP=0x00000000000ce390
- (void)dealloc;	// IMP=0x00000000000ce317
- (void)_formatBadgeText;	// IMP=0x00000000000ce0fa
- (id)init;	// IMP=0x00000000000ce09c

@end
