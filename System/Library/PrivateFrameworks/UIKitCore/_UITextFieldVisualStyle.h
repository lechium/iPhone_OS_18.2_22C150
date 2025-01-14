//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UITextFieldVisualStyleSubject;

__attribute__((visibility("hidden")))
@interface _UITextFieldVisualStyle : NSObject
{
    id <_UITextFieldVisualStyleSubject> _styleSubject;	// 8 = 0x8
}

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;	// IMP=0x00600000017ac2cd
- (void).cxx_destruct;	// IMP=0x00000000017ac8b8
@property(nonatomic) __weak id <_UITextFieldVisualStyleSubject> styleSubject; // @synthesize styleSubject=_styleSubject;
- (void)handleTextVibrancy;	// IMP=0x00000000017ac7ca
- (_Bool)textShouldUseVibrancy;	// IMP=0x00000000017ac702
- (id)parentViewForTextContentView;	// IMP=0x00000000017ac63a
- (id)placeholderColor;	// IMP=0x00000000017ac572
- (id)defaultFocusedTextColor;	// IMP=0x00000000017ac4aa
- (id)defaultTextColorForKeyboardAppearance;	// IMP=0x00000000017ac3e2
- (id)defaultTextColor;	// IMP=0x00000000017ac31a
- (id)initWithStyleSubject:(id)arg1;	// IMP=0x00000000017ac269

@end

