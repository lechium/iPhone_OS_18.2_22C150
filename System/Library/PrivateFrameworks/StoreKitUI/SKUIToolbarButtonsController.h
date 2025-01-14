//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, SKUIToolbarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIToolbarButtonsController : NSObject
{
    NSMapTable *_buttonItemElements;	// 8 = 0x8
    SKUIToolbarViewElement *_toolbarElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000178638
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;	// IMP=0x0000000000178519
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001784b5
- (void)disconnectAllButtons;	// IMP=0x000000000017836d
- (id)addButtonItemWithButtonViewElement:(id)arg1;	// IMP=0x0000000000178296
- (id)initWithToolbarViewElement:(id)arg1;	// IMP=0x00000000001781e8

@end

