//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMenu;

__attribute__((visibility("hidden")))
@interface _UIHostedMenuManager : NSObject
{
    UIMenu *_rootMenu;	// 8 = 0x8
    UIMenu *_displayedMenu;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004cbb70
@property(retain, nonatomic) UIMenu *displayedMenu; // @synthesize displayedMenu=_displayedMenu;
@property(copy, nonatomic) UIMenu *rootMenu; // @synthesize rootMenu=_rootMenu;
- (id)_menuForIdentifier:(id)arg1 menu:(id)arg2;	// IMP=0x00000000004cb902
- (id)_menuLeafForIdentifier:(id)arg1 menu:(id)arg2;	// IMP=0x00000000004cb6aa
- (id)menuForIdentifier:(id)arg1;	// IMP=0x00000000004cb62f
- (id)menuLeafForIdentifier:(id)arg1;	// IMP=0x00000000004cb5b4

@end

