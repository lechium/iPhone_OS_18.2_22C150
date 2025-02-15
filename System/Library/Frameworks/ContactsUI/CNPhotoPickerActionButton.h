//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class CNPhotoPickerActionButtonBlockHandler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionButton : UIButton
{
    _Bool _isDestructive;	// 8 = 0x8
    CNPhotoPickerActionButtonBlockHandler *_blockHandler;	// 16 = 0x10
}

+ (id)defaultActionButtonTextColor;	// IMP=0x00600000003caabb
+ (id)destructiveButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000003caa0b
+ (id)defaultButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000003ca976
+ (id)buttonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000003ca88d
- (void).cxx_destruct;	// IMP=0x00000000003ca87a
@property(retain, nonatomic) CNPhotoPickerActionButtonBlockHandler *blockHandler; // @synthesize blockHandler=_blockHandler;
@property(nonatomic) _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
- (void)performActionBlock;	// IMP=0x00000000003ca7c9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003ca656

@end

