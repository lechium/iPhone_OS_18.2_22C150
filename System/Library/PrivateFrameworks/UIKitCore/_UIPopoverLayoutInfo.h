//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    double _arrowHeight;	// 40 = 0x28
    double _arrowOffset;	// 48 = 0x30
    struct CGSize _preferredContentSize;	// 56 = 0x38
    unsigned long long _preferredArrowDirections;	// 72 = 0x48
    struct CGRect _containingFrame;	// 80 = 0x50
    struct UIEdgeInsets _containingFrameInsets;	// 112 = 0x70
    struct CGRect _sourceViewRect;	// 144 = 0x90
    _Bool _canOverlapSourceViewRect;	// 176 = 0xb0
    struct CGRect _frame;	// 184 = 0xb8
    double _offset;	// 216 = 0xd8
    unsigned long long _arrowDirection;	// 224 = 0xe0
    _Bool _preferLandscapeOrientations;	// 232 = 0xe8
    _Bool _updatesEnabled;	// 233 = 0xe9
    NSMutableArray *_candidates;	// 240 = 0xf0
    _Bool _isRTL;	// 248 = 0xf8
    long long _preferredHorizontalAlignment;	// 256 = 0x100
}

+ (id)_observationKeys;	// IMP=0x0010000001892aaf
- (void).cxx_destruct;	// IMP=0x0000000001894522
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) long long preferredHorizontalAlignment; // @synthesize preferredHorizontalAlignment=_preferredHorizontalAlignment;
@property(nonatomic) _Bool preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) _Bool updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(readonly, nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property(nonatomic) struct CGRect sourceViewRect; // @synthesize sourceViewRect=_sourceViewRect;
@property(nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) unsigned long long preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000001894328
- (void)_updateOutputs;	// IMP=0x00000000018934e2
- (struct CGRect)_effectiveViewSourceRect;	// IMP=0x00000000018934c4
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x000000000189332c
- (id)candidates;	// IMP=0x000000000189331b
- (void)updateProperties:(CDUnknownBlockType)arg1;	// IMP=0x00000000018932b3
- (id)description;	// IMP=0x0000000001892fd2
- (void)dealloc;	// IMP=0x0000000001892e6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001892cdd
- (id)init;	// IMP=0x0000000001892b34

@end
