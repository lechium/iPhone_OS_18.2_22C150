//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSendMenuPopoverPresentationControllerAnchorItem, UIViewController;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverPresentationConfiguration : NSObject
{
    CKSendMenuPopoverPresentationControllerAnchorItem *_anchorItem;	// 8 = 0x8
    UIViewController *_sendMenuViewController;	// 16 = 0x10
    UIViewController *_appCardContentViewController;	// 24 = 0x18
    unsigned long long _appCardPresentationStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012f44d
@property(nonatomic) unsigned long long appCardPresentationStyle; // @synthesize appCardPresentationStyle=_appCardPresentationStyle;
@property(retain, nonatomic) UIViewController *appCardContentViewController; // @synthesize appCardContentViewController=_appCardContentViewController;
@property(retain, nonatomic) UIViewController *sendMenuViewController; // @synthesize sendMenuViewController=_sendMenuViewController;
@property(retain, nonatomic) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem; // @synthesize anchorItem=_anchorItem;
@property(readonly, nonatomic) UIViewController *initialViewController;

@end
