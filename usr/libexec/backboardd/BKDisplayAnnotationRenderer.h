//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotation, CALayer;

@interface BKDisplayAnnotationRenderer : NSObject
{
    _Bool _shouldReapplyStyles;	// 8 = 0x8
    BKDisplayAnnotation *_annotation;	// 16 = 0x10
    CALayer *_layer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000038e5a
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak BKDisplayAnnotation *annotation; // @synthesize annotation=_annotation;
- (void)regenerateLayerTree;	// IMP=0x0010000000038c30
- (void)sizeLayerToFitAtScale:(double)arg1;	// IMP=0x0010000000038b9a
- (void)styleSheetDidChange;	// IMP=0x00100000000388de
- (void)didRemoveSubannotations;	// IMP=0x00100000000388cc
- (void)didRemoveAnnotation;	// IMP=0x0010000000038895
- (void)locationDidChange;	// IMP=0x001000000003853e
- (void)didAddAnnotation;	// IMP=0x001000000003852c
@property(readonly, nonatomic) _Bool shouldRenderWithSupernode;

@end

