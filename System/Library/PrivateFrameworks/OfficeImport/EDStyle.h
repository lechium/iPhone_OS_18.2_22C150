//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDAlignmentInfo, EDBorders, EDContentFormat, EDFill, EDFont, EDProtection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDStyle : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    unsigned long long mParentIndex;	// 16 = 0x10
    unsigned long long mContentFormatId;	// 24 = 0x18
    unsigned long long mFontIndex;	// 32 = 0x20
    unsigned long long mFillIndex;	// 40 = 0x28
    unsigned long long mAlignmentInfoIndex;	// 48 = 0x30
    unsigned long long mBordersIndex;	// 56 = 0x38
    EDProtection *mProtection;	// 64 = 0x40
    unsigned long long mIndex;	// 72 = 0x48
    _Bool mContentFormatOverridden;	// 80 = 0x50
    _Bool mContentFormatApplied;	// 81 = 0x51
    _Bool mFontOverridden;	// 82 = 0x52
    _Bool mFontApplied;	// 83 = 0x53
    _Bool mFillOverridden;	// 84 = 0x54
    _Bool mFillApplied;	// 85 = 0x55
    _Bool mAlignmentInfoOverridden;	// 86 = 0x56
    _Bool mAlignmentInfoApplied;	// 87 = 0x57
    _Bool mBordersOverridden;	// 88 = 0x58
    _Bool mBordersApplied;	// 89 = 0x59
    _Bool mProtectionOverridden;	// 90 = 0x5a
    _Bool mProtectionApplied;	// 91 = 0x5b
    _Bool mDoNotModify;	// 92 = 0x5c
}

+ (id)styleWithResources:(id)arg1;	// IMP=0x00100000003a8b15
- (void).cxx_destruct;	// IMP=0x00000000003a8f09
@property(getter=isProtectionApplied) _Bool protectionApplied; // @synthesize protectionApplied=mProtectionApplied;
@property(getter=isBordersApplied) _Bool bordersApplied; // @synthesize bordersApplied=mBordersApplied;
@property(getter=isAlignmentInfoApplied) _Bool alignmentInfoApplied; // @synthesize alignmentInfoApplied=mAlignmentInfoApplied;
@property(getter=isFillApplied) _Bool fillApplied; // @synthesize fillApplied=mFillApplied;
@property(getter=isFontApplied) _Bool fontApplied; // @synthesize fontApplied=mFontApplied;
@property(getter=isContentFormatApplied) _Bool contentFormatApplied; // @synthesize contentFormatApplied=mContentFormatApplied;
- (void)setDoNotModify:(_Bool)arg1;	// IMP=0x000000000011be6b
- (unsigned long long)index;	// IMP=0x000000000013349d
- (void)setParent:(id)arg1;	// IMP=0x00000000003a8de9
- (id)parent;	// IMP=0x00000000003a8d56
@property(retain) EDProtection *protection;
@property(getter=isProtectionOverridden) _Bool protectionOverridden;
@property(retain) EDBorders *borders;
@property(getter=isBordersOverridden) _Bool bordersOverridden;
@property(retain) EDAlignmentInfo *alignmentInfo;
- (_Bool)isCenterAcrossAligned;	// IMP=0x00000000003a8cda
@property(getter=isAlignmentInfoOverridden) _Bool alignmentInfoOverridden;
@property(retain) EDFill *fill;
@property(getter=isFillOverridden) _Bool fillOverridden;
@property(retain) EDFont *font;
@property(getter=isFontOverridden) _Bool fontOverridden;
@property(retain) EDContentFormat *contentFormat;
@property(getter=isContentFormatOverridden) _Bool contentFormatOverridden;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022ebae
- (_Bool)isEqualToStyle:(id)arg1;	// IMP=0x000000000022ec2a
- (_Bool)isEquivalentToStyle:(id)arg1;	// IMP=0x000000000022ecc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022d786
- (id)initWithResources:(id)arg1;	// IMP=0x000000000011a52a
@property(readonly, copy) NSString *description;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;	// IMP=0x00000000003a8f61
- (unsigned long long)alignmentInfoIndex;	// IMP=0x00000000003a8f57
- (void)setFillIndex:(unsigned long long)arg1;	// IMP=0x00000000001ba30a
- (unsigned long long)fillIndex;	// IMP=0x00000000003a8f4d
- (void)setBordersIndex:(unsigned long long)arg1;	// IMP=0x00000000001ba2f4
- (unsigned long long)bordersIndex;	// IMP=0x00000000003a8f43
- (void)setParentIndex:(unsigned long long)arg1;	// IMP=0x000000000011a78c
- (unsigned long long)parentIndex;	// IMP=0x00000000003a8f39
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x000000000011bd7b
- (unsigned long long)contentFormatId;	// IMP=0x000000000013456a
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x000000000011a7c6
- (unsigned long long)fontIndex;	// IMP=0x00000000003a8f2f
- (void)setIndex:(unsigned long long)arg1;	// IMP=0x000000000011be74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

