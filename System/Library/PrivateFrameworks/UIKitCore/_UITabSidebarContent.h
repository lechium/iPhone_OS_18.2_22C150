//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAction, UITab, UITabGroup;

__attribute__((visibility("hidden")))
@interface _UITabSidebarContent : NSObject
{
    UITab *_tab;	// 8 = 0x8
    UIAction *_action;	// 16 = 0x10
    UITabGroup *_group;	// 24 = 0x18
}

+ (id)contentForAction:(id)arg1 group:(id)arg2;	// IMP=0x00600000012f5c7a
+ (id)contentForTab:(id)arg1;	// IMP=0x00600000012f5c3e
- (void).cxx_destruct;	// IMP=0x00000000012f5d16
@property(readonly, nonatomic) UITabGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) UIAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) UITab *tab; // @synthesize tab=_tab;

@end
