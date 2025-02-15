//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, OAXDrawingState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVReadState
{
    Class mClient;	// 32 = 0x20
    OCPPackagePart *mPackagePart;	// 40 = 0x28
    NSMutableDictionary *mShapeTypes;	// 48 = 0x30
    NSMutableDictionary *mShapeIdMap;	// 56 = 0x38
    NSMutableSet *mDualDrawables;	// 64 = 0x40
    OAXDrawingState *mOAXState;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000032e6ff
@property __weak OAXDrawingState *oaxState; // @synthesize oaxState=mOAXState;
- (id)blipRefForURL:(id)arg1;	// IMP=0x000000000032e647
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;	// IMP=0x000000000032e5e4
- (_Bool)isDualDrawable:(id)arg1;	// IMP=0x000000000032e5c7
- (void)addDualDrawable:(id)arg1;	// IMP=0x000000000032e5aa
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;	// IMP=0x000000000032e43c
- (id)drawableForVmlShapeId:(id)arg1;	// IMP=0x000000000032e38a
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;	// IMP=0x000000000032e2ea
- (unsigned short)shapeTypeForId:(id)arg1;	// IMP=0x000000000032e286
- (void)setPackagePart:(id)arg1;	// IMP=0x000000000032e272
- (id)packagePart;	// IMP=0x000000000032e25d
- (Class)client;	// IMP=0x000000000032e248
- (void)resetForNewDrawing;	// IMP=0x000000000032e1df
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;	// IMP=0x000000000032e0ca

@end

