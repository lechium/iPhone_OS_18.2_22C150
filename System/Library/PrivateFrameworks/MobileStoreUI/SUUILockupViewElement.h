//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIFullscreenImageViewElement;

__attribute__((visibility("hidden")))
@interface SUUILockupViewElement : SUUIViewElement
{
    BOOL _enabled;	// 8 = 0x8
    long long _lockupViewType;	// 16 = 0x10
    _Bool _selectable;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) long long lockupViewType; // @synthesize lockupViewType=_lockupViewType;
- (long long)pageComponentType;	// IMP=0x00000000002dc130
- (_Bool)isEnabled;	// IMP=0x00000000002dc0ec
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000002dc046
@property(readonly, nonatomic) SUUIFullscreenImageViewElement *fullscreenImage;
@property(readonly, nonatomic) _Bool containsElementGroups;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000002dbd41

@end
