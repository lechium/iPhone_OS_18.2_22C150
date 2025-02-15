//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedCtrl : UIControl
{
    unsigned long long _selectionType;	// 8 = 0x8
    unsigned long long _selectedSegment;	// 16 = 0x10
    NSArray *_images;	// 24 = 0x18
    NSArray *_buttons;	// 32 = 0x20
    NSMutableOrderedSet *_selectionStack;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d90fe
@property(retain, nonatomic) NSMutableOrderedSet *selectionStack; // @synthesize selectionStack=_selectionStack;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
- (unsigned long long)segmentCount;	// IMP=0x00000000000d900d
- (id)segmentForTag:(long long)arg1;	// IMP=0x00000000000d8e84
- (long long)tagForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d8e40
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d8df1
- (id)segmentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d8d47
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d8d03
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d8cb6
- (void)deselectAllSegments;	// IMP=0x00000000000d8ad7
- (void)selectSegmentWithTag:(long long)arg1;	// IMP=0x00000000000d8a58
- (_Bool)isSelectedForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d89c0
- (void)setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d88f3
- (void)_setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d8686
- (void)_buttonTapped:(id)arg1;	// IMP=0x00000000000d85d6
- (void)_configureForNewImages;	// IMP=0x00000000000d7c29
- (void)_commonInit;	// IMP=0x00000000000d7bc2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d7ba9
- (id)initWithImages:(id)arg1;	// IMP=0x00000000000d7b03

@end

