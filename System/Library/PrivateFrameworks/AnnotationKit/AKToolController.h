//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKToolController : NSObject
{
    _Bool _allInkEnabled;	// 8 = 0x8
    _Bool _pencilInkEnabled;	// 9 = 0x9
    unsigned long long _toolMode;	// 16 = 0x10
    AKController *_controller;	// 24 = 0x18
}

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(_Bool)arg3;	// IMP=0x00600000000db804
- (void).cxx_destruct;	// IMP=0x00000000000dd86e
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool pencilInkEnabled; // @synthesize pencilInkEnabled=_pencilInkEnabled;
@property(nonatomic) _Bool allInkEnabled; // @synthesize allInkEnabled=_allInkEnabled;
@property(nonatomic) unsigned long long toolMode; // @synthesize toolMode=_toolMode;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;	// IMP=0x00000000000dd73e
- (unsigned long long)_arrowStyleForToolTag:(long long)arg1;	// IMP=0x00000000000dd711
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;	// IMP=0x00000000000dd5f9
- (id)_defaultFillColorForAnnotationOfClass:(Class)arg1;	// IMP=0x00000000000dd5e0
- (id)_defaultHeartTypingAttributesWithFillColor:(id)arg1;	// IMP=0x00000000000dd456
- (id)_defaultTextBoxTypingAttributes;	// IMP=0x00000000000dd387
- (id)_defaultTypingAttributes;	// IMP=0x00000000000dd248
- (struct CGRect)_validatedRect:(struct CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(struct CGPoint)arg4;	// IMP=0x00000000000dceb4
- (struct CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000dc8ed
- (struct CGPoint)_defaultCenterForNewAnnotation;	// IMP=0x00000000000dc82b
- (struct CGRect)_centerBounds:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000000dc800
- (id)_strokeColorForNewAnnotation;	// IMP=0x00000000000dc623
- (double)_strokeWidthForNewAnnotation;	// IMP=0x00000000000dc57a
- (double)_modelBaseScaleFactorForNewAnnotation;	// IMP=0x00000000000dc507
- (unsigned long long)defaultToolMode;	// IMP=0x00000000000dc4ff
- (void)resetToDefaultMode;	// IMP=0x00000000000dc454
@property(readonly, nonatomic) _Bool isInDefaultMode;
- (void)updateToolSenderState:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000dc2f8
- (_Bool)isToolSenderEnabled:(id)arg1;	// IMP=0x00000000000dc2f0
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(_Bool)arg3 shouldCascade:(_Bool)arg4;	// IMP=0x00000000000db30c
- (id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000d97d0
- (void)performToolActionForSender:(id)arg1;	// IMP=0x00000000000d92a2
- (void)dealloc;	// IMP=0x00000000000d922d
- (id)initWithController:(id)arg1;	// IMP=0x00000000000d9140

@end
