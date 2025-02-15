//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/NSObject-Protocol.h>

@class UIColor, UIFont;

@protocol CNAtomViewResembling <NSObject>
@property(retain, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) struct CGPoint baselinePoint;
@property(nonatomic) unsigned long long presentationOptions;
@property(nonatomic) int separatorStyle;
@property(nonatomic) double scale;
@property(nonatomic) _Bool separatorIsLeftAligned;
@property(nonatomic) _Bool separatorHidden;
@property(nonatomic) _Bool hidesVIPIndicator;
@property(nonatomic) _Bool isPrimaryAddressAtom;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg1 withDuration:(double)arg2;
@end

