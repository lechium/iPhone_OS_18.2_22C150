//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView, _UIFocusRegion;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface _UIFocusItemInfo : NSObject
{
    struct {
        unsigned int hasResolvedFocusTouchSensitivityStyle:1;
        unsigned int hasResolvedFocusMovementFlippedHorizontally:1;
        unsigned int hasResolvedFocusedRegion:1;
        unsigned int hasResolvedRotaryFocusMovementAxis:1;
        unsigned int useFallbackAncestorScroller:1;
    } _flags;	// 8 = 0x8
    _Bool _focusMovementFlippedHorizontally;	// 9 = 0x9
    NSArray *_ancestorEnvironmentScrollableContainers;	// 16 = 0x10
    long long _inheritedFocusMovementStyle;	// 24 = 0x18
    long long _focusTouchSensitivityStyle;	// 32 = 0x20
    long long _rotaryFocusMovementAxis;	// 40 = 0x28
    _UIFocusRegion *_focusedRegion;	// 48 = 0x30
    id <UIFocusItem> _item;	// 56 = 0x38
    UIView *_containingView;	// 64 = 0x40
}

+ (id)infoWithView:(id)arg1;	// IMP=0x0010000000ac8463
+ (id)infoWithItem:(id)arg1 useFallbackAncestorScroller:(_Bool)arg2;	// IMP=0x0010000000ac840a
+ (id)infoWithItem:(id)arg1;	// IMP=0x0010000000ac83bc
- (void).cxx_destruct;	// IMP=0x0000000000ac9bb7
@property(readonly, nonatomic) __weak UIView *containingView; // @synthesize containingView=_containingView;
@property(readonly, nonatomic) __weak id <UIFocusItem> item; // @synthesize item=_item;
- (id)shortDescription;	// IMP=0x0000000000ac99ee
- (id)description;	// IMP=0x0000000000ac996f
- (void)invalidateFocusedRegion;	// IMP=0x0000000000ac9949
- (struct CGRect)focusedRectInCoordinateSpace:(id)arg1;	// IMP=0x0000000000ac988d
- (id)_createFocusedRegion;	// IMP=0x0000000000ac8980
@property(readonly, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, nonatomic) _Bool useFallbackAncestorScroller;
@property(readonly, nonatomic, getter=isFocusMovementFlippedHorizontally) _Bool focusMovementFlippedHorizontally; // @synthesize focusMovementFlippedHorizontally=_focusMovementFlippedHorizontally;
@property(readonly, nonatomic) long long rotaryFocusMovementAxis; // @synthesize rotaryFocusMovementAxis=_rotaryFocusMovementAxis;
@property(readonly, nonatomic) long long focusTouchSensitivityStyle; // @synthesize focusTouchSensitivityStyle=_focusTouchSensitivityStyle;
@property(readonly, nonatomic) long long inheritedFocusMovementStyle; // @synthesize inheritedFocusMovementStyle=_inheritedFocusMovementStyle;
@property(readonly, copy, nonatomic) NSArray *ancestorEnvironmentScrollableContainers; // @synthesize ancestorEnvironmentScrollableContainers=_ancestorEnvironmentScrollableContainers;
@property(readonly, nonatomic) _Bool itemIsKindOfView;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac859a
- (id)_initWithItem:(id)arg1 containingView:(id)arg2 useFallbackAncestorScroller:(_Bool)arg3;	// IMP=0x0000000000ac84b2

@end

