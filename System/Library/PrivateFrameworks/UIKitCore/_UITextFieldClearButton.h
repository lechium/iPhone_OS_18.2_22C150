//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@protocol _UITextFieldClearButtonImageProviding;

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButton : UIButton
{
    id <_UITextFieldClearButtonImageProviding> _imageProvider;	// 152 = 0x98
}

+ (Class)_visualProviderClassForIdiom:(long long)arg1;	// IMP=0x00600000011d0470
- (void).cxx_destruct;	// IMP=0x00000000011d09a3
@property(nonatomic) __weak id <_UITextFieldClearButtonImageProviding> imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)setPointerInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000011d0567
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000011d0489
- (_Bool)_isModernButton;	// IMP=0x00000000011d0481

@end
