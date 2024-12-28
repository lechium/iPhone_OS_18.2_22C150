//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIAction, UIBackgroundConfiguration, UIMenu, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentUnavailableConfiguration : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    UIMenu *_secondaryMenu;	// 16 = 0x10
    NSURL *_documentURL;	// 24 = 0x18
    unsigned long long _documentState;	// 32 = 0x20
    NSString *_documentCreationIntent;	// 40 = 0x28
    UIViewController *_browserViewController;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    UIAction *_primaryAction;	// 64 = 0x40
    UIAction *_secondaryAction;	// 72 = 0x48
    UIView *_documentTargetView;	// 80 = 0x50
    UIBackgroundConfiguration *_background;	// 88 = 0x58
    UIView *_foregroundAccessoryView;	// 96 = 0x60
    UIView *_backgroundAccessoryView;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000e90734
- (unsigned long long)hash;	// IMP=0x0000000000e903bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e8ffc9

@end
