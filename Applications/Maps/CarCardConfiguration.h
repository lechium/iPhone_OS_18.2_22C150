//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarCardContainerView, CarCardView, NSArray, NSDictionary, NSString, UILayoutGuide, UIView, UIViewController;
@protocol CarCardContent;

@interface CarCardConfiguration : NSObject
{
    long long _carSceneType;	// 8 = 0x8
    CDStruct_035a826d _lastLayout;	// 16 = 0x10
    _Bool _lastStaysOnTop;	// 152 = 0x98
    unsigned long long _invalidationState;	// 160 = 0xa0
    _Bool _ignoreContainerBoundsChanges;	// 168 = 0xa8
    _Bool _staysOnTop;	// 169 = 0xa9
    _Bool _hidden;	// 170 = 0xaa
    _Bool _transitioning;	// 171 = 0xab
    UIViewController<CarCardContent> *_content;	// 176 = 0xb0
    NSString *_title;	// 184 = 0xb8
    long long _titleNumberOfLines;	// 192 = 0xc0
    unsigned long long _accessory;	// 200 = 0xc8
    UIView *_accessoryView;	// 208 = 0xd0
    CDUnknownBlockType _selectionHandler;	// 216 = 0xd8
    NSString *_key;	// 224 = 0xe0
    CarCardView *_cardView;	// 232 = 0xe8
    CarCardContainerView *_containerView;	// 240 = 0xf0
    NSArray *_showingConstraints;	// 248 = 0xf8
    NSArray *_hidingConstraints;	// 256 = 0x100
    NSArray *_viewportConstraints;	// 264 = 0x108
    NSArray *_mapInsetsConstraints;	// 272 = 0x110
    NSArray *_collisionConstraints;	// 280 = 0x118
    NSDictionary *_collisionLayoutGuides;	// 288 = 0x120
    UILayoutGuide *_contentLayoutGuide;	// 296 = 0x128
    UIViewController<CarCardContent> *_previousContent;	// 304 = 0x130
    CDStruct_035a826d _layout;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0020000000c14bb1
@property(nonatomic) __weak UIViewController<CarCardContent> *previousContent; // @synthesize previousContent=_previousContent;
@property(readonly, nonatomic) unsigned long long invalidationState; // @synthesize invalidationState=_invalidationState;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (id)collisionLayoutGuides;	// IMP=0x0010000000c14b45
@property(readonly, nonatomic) NSArray *collisionConstraints; // @synthesize collisionConstraints=_collisionConstraints;
@property(readonly, nonatomic) NSArray *mapInsetsConstraints; // @synthesize mapInsetsConstraints=_mapInsetsConstraints;
@property(readonly, nonatomic) NSArray *viewportConstraints; // @synthesize viewportConstraints=_viewportConstraints;
@property(readonly, nonatomic) NSArray *hidingConstraints; // @synthesize hidingConstraints=_hidingConstraints;
@property(readonly, nonatomic) NSArray *showingConstraints; // @synthesize showingConstraints=_showingConstraints;
@property(readonly, nonatomic) CarCardContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) CarCardView *cardView; // @synthesize cardView=_cardView;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned long long accessory; // @synthesize accessory=_accessory;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool staysOnTop; // @synthesize staysOnTop=_staysOnTop;
@property(nonatomic) CDStruct_035a826d layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIViewController<CarCardContent> *content; // @synthesize content=_content;
- (void)_stopIgnoringContainerBoundsChanges;	// IMP=0x0010000000c1464c
- (void)_startIgnoringContainerBoundsChanges;	// IMP=0x0010000000c14450
- (void)_updateAvailableCardSize;	// IMP=0x0010000000c14362
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000c1408e
- (void)_setShowContainerVisualisation:(_Bool)arg1;	// IMP=0x0010000000c13c24
@property(readonly, nonatomic) unsigned long long effectiveEdgesAffectingMapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets effectiveMargins;
@property(readonly, nonatomic) unsigned long long effectiveCornerPosition;
@property(readonly, nonatomic) unsigned long long effectiveEdgePosition;
- (void)updateVisibility;	// IMP=0x0010000000c12f5d
- (struct CGRect)collisionLayoutGuideFrameForEdge:(unsigned long long)arg1;	// IMP=0x0010000000c12c87
- (id)_collisionLayoutGuidesForHost:(id)arg1;	// IMP=0x0010000000c12ac4
- (id)_collisionConstraintsForHost:(id)arg1;	// IMP=0x0010000000c11c24
- (id)_mapInsetsConstraintsForHost:(id)arg1;	// IMP=0x0010000000c11354
- (id)_viewportConstraintsForHost:(id)arg1;	// IMP=0x0010000000c10bdc
- (id)_hidingLayoutConstraintsForHost:(id)arg1 withLayoutGuide:(id)arg2;	// IMP=0x0010000000c0ff84
- (id)_showingLayoutConstraintsForHost:(id)arg1 withLayoutGuide:(id)arg2;	// IMP=0x0010000000c0f948
- (id)_sharedLayoutConstraintsForHost:(id)arg1 withLayoutGuide:(id)arg2;	// IMP=0x0010000000c0da9f
- (void)_updateCardContainerPriorities;	// IMP=0x0010000000c0d97f
- (id)_cardToContainerLayoutConstraints;	// IMP=0x0010000000c0d02d
- (void)_prepareConstraintsForHost:(id)arg1 withLayoutGuide:(id)arg2;	// IMP=0x0010000000c0c738
- (void)_resetConstraints;	// IMP=0x0010000000c0c5fe
- (void)_applyToCardView;	// IMP=0x0010000000c0c033
- (void)layoutInHost:(id)arg1 withLayoutGuide:(id)arg2;	// IMP=0x0010000000c0bd4b
@property(readonly, nonatomic) unsigned long long focusSortValue;
@property(readonly, nonatomic) _Bool isValid;
- (void)reset;	// IMP=0x0010000000c0b9c4
- (void)clear;	// IMP=0x0010000000c0b896
- (void)dealloc;	// IMP=0x0010000000c0b7df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000c0b697
@property(readonly, copy) NSString *description;
- (id)initWithKey:(id)arg1 carSceneType:(long long)arg2;	// IMP=0x0010000000c0b1ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

