//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIBarButtonItem.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIFloatableBarButtonItem : UIBarButtonItem
{
    _Bool _floatable;	// 344 = 0x158
    _Bool _floating;	// 345 = 0x159
    UIView *_configuredFloatableView;	// 352 = 0x160
    UIView *_referenceView;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x000000000041b7c2
@property(retain, nonatomic, setter=_setReferenceView:) UIView *_referenceView; // @synthesize _referenceView;
@property(retain, nonatomic, setter=_setConfiguredFloatableView:) UIView *_configuredFloatableView; // @synthesize _configuredFloatableView;
@property(nonatomic, getter=_isFloating, setter=_setFloating:) _Bool _floating; // @synthesize _floating;
@property(nonatomic, getter=_isFloatable, setter=_setFloatable:) _Bool _floatable; // @synthesize _floatable;
- (id)description;	// IMP=0x000000000041b68d

@end

