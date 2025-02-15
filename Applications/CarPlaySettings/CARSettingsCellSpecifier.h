//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, MISSING_TYPE, NSAttributedString, NSString, UIColor, UIImage;

@interface CARSettingsCellSpecifier : NSObject
{
    _Bool _detailSizeToFit;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    MISSING_TYPE *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSAttributedString *_attributedTitle;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    long long _accessoryType;	// 48 = 0x30
    NSString *_detail;	// 56 = 0x38
    long long _detailLineBreakMode;	// 64 = 0x40
    long long _detailNumberOfLines;	// 72 = 0x48
    UIColor *_titleColor;	// 80 = 0x50
    CDUnknownBlockType _actionBlock;	// 88 = 0x58
    long long _selectionStyle;	// 96 = 0x60
    id _cellValue;	// 104 = 0x68
    CARObserverHashTable *_observers;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000100d8
@property(retain) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id cellValue; // @synthesize cellValue=_cellValue;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool detailSizeToFit; // @synthesize detailSizeToFit=_detailSizeToFit;
@property(nonatomic) long long detailNumberOfLines; // @synthesize detailNumberOfLines=_detailNumberOfLines;
@property(nonatomic) long long detailLineBreakMode; // @synthesize detailLineBreakMode=_detailLineBreakMode;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000ff96
- (void)addObserver:(id)arg1;	// IMP=0x001000000000ff2d
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x001000000000ff1b
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
- (void)setDetail:(id)arg1 sizeToFit:(_Bool)arg2 withNumberOfLines:(long long)arg3 lineBreakMode:(long long)arg4;	// IMP=0x001000000000fbbb
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 accessoryType:(long long)arg4 actionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000000f848
- (id)initWithTitle:(id)arg1 image:(id)arg2 accessoryType:(long long)arg3 actionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f7d0
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 accessoryType:(long long)arg4;	// IMP=0x001000000000f6ad
- (id)initWithTitle:(id)arg1 image:(id)arg2 accessoryType:(long long)arg3;	// IMP=0x001000000000f693

@end

