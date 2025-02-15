//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject
{
    _Bool mHidden;	// 8 = 0x8
    unsigned int mId;	// 12 = 0xc
    unsigned int mAltId;	// 16 = 0x10
    OADDrawableProperties *mDrawableProperties;	// 24 = 0x18
    id <OADClient> mClientData;	// 32 = 0x20
    OADDrawable<OADDrawableContainer> *mParent;	// 40 = 0x28
}

+ (unsigned int)generateOADDrawableId:(id)arg1;	// IMP=0x006000000030b08b
- (void).cxx_destruct;	// IMP=0x000000000030b0de
@property __weak OADDrawable<OADDrawableContainer> *parent; // @synthesize parent=mParent;
- (id)description;	// IMP=0x000000000030b0a0
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;	// IMP=0x000000000030aed3
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000003290e
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x000000000030acf1
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000030ab0f
- (id)ensureClientDataOfClass:(Class)arg1;	// IMP=0x00000000001c823d
- (id)clientData;	// IMP=0x000000000002dd60
- (void)setClientData:(id)arg1;	// IMP=0x000000000002d618
- (void)setDrawableProperties:(id)arg1;	// IMP=0x00000000000291f8
- (id)drawableProperties;	// IMP=0x0000000000028700
- (void)setAltId:(unsigned int)arg1;	// IMP=0x000000000030ab06
- (unsigned int)altId;	// IMP=0x000000000030aafd
- (void)setId:(unsigned int)arg1;	// IMP=0x00000000000288b7
- (unsigned int)id;	// IMP=0x0000000000158632
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000002d702
- (_Bool)hidden;	// IMP=0x00000000000a828f
- (id)initWithPropertiesClass:(Class)arg1;	// IMP=0x0000000000028529
- (id)createWordClientDataWithTextType:(int)arg1;	// IMP=0x00000000003e2d17

@end

