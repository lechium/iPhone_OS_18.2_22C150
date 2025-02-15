//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram
{
    ODDNodePoint *mDocumentPoint;	// 40 = 0x28
    ODDColorTransform *mColorTransform;	// 48 = 0x30
    ODDStyleDefinition *mStyleDefinition;	// 56 = 0x38
    NSArray *mEquivalentDrawables;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000032f497
@property(retain, nonatomic) NSArray *equivalentDrawables; // @synthesize equivalentDrawables=mEquivalentDrawables;
- (id)description;	// IMP=0x000000000032f434
- (id)styleDefinition;	// IMP=0x00000000001e0fbf
- (id)colorTransform;	// IMP=0x00000000001e0ffb
- (void)setDocumentPoint:(id)arg1;	// IMP=0x00000000001e255a
- (id)documentPoint;	// IMP=0x00000000001e3b91
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x00000000001e35ae
- (id)init;	// IMP=0x00000000001e0d73

@end

