//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, SPUINavigationController, SPUIPlatterContainerViewController, SPUISearchViewController, SPUIUnifiedFieldViewController, UIViewController;

@interface SPUISearchViewControllerHolder : NSObject
{
    SPUISearchViewController *_searchViewController;	// 8 = 0x8
    SPUINavigationController *_navigationController;	// 16 = 0x10
    SPUIPlatterContainerViewController *_platterViewController;	// 24 = 0x18
    SPUIUnifiedFieldViewController *_unifiedFieldController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000000643d
- (void).cxx_destruct;	// IMP=0x002000000000676b
@property(retain, nonatomic) SPUIUnifiedFieldViewController *unifiedFieldController; // @synthesize unifiedFieldController=_unifiedFieldController;
@property(retain, nonatomic) SPUIPlatterContainerViewController *platterViewController; // @synthesize platterViewController=_platterViewController;
@property(retain, nonatomic) SPUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(readonly) CALayer *searchProtectorLayer;
@property(readonly) UIViewController *rootViewController;
- (id)init;	// IMP=0x00100000000064c2

@end

