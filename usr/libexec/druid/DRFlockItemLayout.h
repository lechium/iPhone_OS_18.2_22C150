//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRFlockAnimatable;

@interface DRFlockItemLayout : NSObject
{
    _Bool _needsImmediateTracking;	// 8 = 0x8
    _Bool _constrainSize;	// 9 = 0x9
    _Bool _newItem;	// 10 = 0xa
    _Bool _startingPreviewTransition;	// 11 = 0xb
    _Bool _inPreviewTransition;	// 12 = 0xc
    DRFlockAnimatable *_position;	// 16 = 0x10
    DRFlockAnimatable *_size;	// 24 = 0x18
    DRFlockAnimatable *_preview;	// 32 = 0x20
    struct CGPoint _center;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000162c5
@property(nonatomic, getter=isInPreviewTransition) _Bool inPreviewTransition; // @synthesize inPreviewTransition=_inPreviewTransition;
@property(nonatomic) _Bool startingPreviewTransition; // @synthesize startingPreviewTransition=_startingPreviewTransition;
@property(nonatomic, getter=isNewItem) _Bool newItem; // @synthesize newItem=_newItem;
@property(nonatomic) _Bool constrainSize; // @synthesize constrainSize=_constrainSize;
@property(nonatomic) _Bool needsImmediateTracking; // @synthesize needsImmediateTracking=_needsImmediateTracking;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) DRFlockAnimatable *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) DRFlockAnimatable *size; // @synthesize size=_size;
@property(retain, nonatomic) DRFlockAnimatable *position; // @synthesize position=_position;

@end

