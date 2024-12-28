//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidate.h>

@class UIImage, UIView;

@interface TIKeyboardCandidate (UIKeyboardAdditions)
+ (id)textEffectsButtonCandidate;	// IMP=0x0020000000d90053
+ (id)imageNameForTextEffectsButton;	// IMP=0x0020000000d8ff39
@property(readonly, nonatomic) _Bool isReplacement;
@property(readonly, nonatomic) _Bool isAutofillCandidate;
@property(readonly, nonatomic) _Bool isSlottedCandidate;
@property(copy, nonatomic) CDUnknownBlockType handler;
@property(retain, nonatomic) UIView *customView;
@property(retain, nonatomic) UIImage *icon;
- (id)ui_supplementalItems;	// IMP=0x0010000001731b47
- (_Bool)ui_hasSupplementalItems;	// IMP=0x0010000001731aff
@end
