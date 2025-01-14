//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UITextView (NCTextSupportingAdditions)
- (double)unui_drawingHeightWithNumberOfLines:(unsigned long long)arg1;	// IMP=0x00200000000c6d76
- (double)unui_measuringHeightWithNumberOfLines:(unsigned long long)arg1;	// IMP=0x00200000000c6cf2
- (unsigned long long)unui_numberOfLinesInFrame:(struct CGRect)arg1 maximum:(unsigned long long)arg2 drawingContext:(inout id)arg3;	// IMP=0x00200000000c6c40
@property(nonatomic, setter=nc_setNumberOfLines:) unsigned long long nc_numberOfLines;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=nc_isMenuEnabled, setter=nc_setMenuEnabled:) _Bool nc_menuEnabled;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@end

