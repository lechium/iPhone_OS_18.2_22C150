//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UINavigationItem;

__attribute__((visibility("hidden")))
@interface AAUINavigationItemSpinnerController : NSObject
{
    UINavigationItem *_navigationItem;	// 8 = 0x8
    NSArray *_leftBarItems;	// 16 = 0x10
    NSArray *_rightBarItems;	// 24 = 0x18
    _Bool _hidesBackButton;	// 32 = 0x20
    _Bool _shouldHideBackButton;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x000000000002222d
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
- (void)stopSpinning;	// IMP=0x00000000000221aa
- (void)startSpinning;	// IMP=0x0000000000022019
- (id)initWithNavigationItem:(id)arg1 hideBackButton:(_Bool)arg2;	// IMP=0x0000000000021fa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
