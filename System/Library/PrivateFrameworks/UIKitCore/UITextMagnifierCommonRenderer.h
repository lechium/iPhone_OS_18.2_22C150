//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UIView
{
    _Bool m_loaded;	// 160 = 0xa0
    NSDictionary *m_images;	// 168 = 0xa8
    NSDictionary *m_offsets;	// 176 = 0xb0
    CALayer *m_back;	// 184 = 0xb8
    CALayer *m_mask;	// 192 = 0xc0
    CALayer *m_content;	// 200 = 0xc8
    CALayer *m_front;	// 208 = 0xd0
    _Bool _isRegisteredForGeometryChanges;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000170bb8c
- (id)visualsForMagnifier;	// IMP=0x000000000170bb74
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000170b7df
- (void)update;	// IMP=0x000000000170abb9
- (id)backgroundColourIfNecessary;	// IMP=0x000000000170a7e9
- (id)magnifier;	// IMP=0x000000000170a7d7
- (void)didMoveToSuperview;	// IMP=0x000000000170a79e
- (void)performOperations:(CDUnknownBlockType)arg1;	// IMP=0x000000000170a30e
- (void)loadImages;	// IMP=0x0000000001709ff8

@end

