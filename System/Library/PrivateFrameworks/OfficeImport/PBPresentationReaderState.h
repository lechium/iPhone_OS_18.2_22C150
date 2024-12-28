//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject
{
    void *mPptBinaryReader;	// 8 = 0x8
    PDPresentation *mTgtPresentation;	// 16 = 0x10
    ESDRoot *mDocumentRoot;	// 24 = 0x18
    ESDContainer *mSrcSlideListHolder;	// 32 = 0x20
    void *mCurrentSlideTextBlockRecordIndexRangeVector;	// 40 = 0x28
    unsigned int mSrcSlideId;	// 48 = 0x30
    NSMutableArray *mSlideIndexes;	// 56 = 0x38
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;	// 64 = 0x40
    struct __CFDictionary *mHyperlinkMap;	// 72 = 0x48
    PBOfficeArtReaderState *mOfficeArtState;	// 80 = 0x50
    NSMutableArray *mFontEntities;	// 88 = 0x58
    PDSlideBase *mTgtSlide;	// 96 = 0x60
    _Bool mHasCharacterPropertyBulletIndex;	// 104 = 0x68
    unsigned int mBulletIndex;	// 108 = 0x6c
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;	// 112 = 0x70
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;	// 120 = 0x78
    ESDObject *mCurrentBulletStyle;	// 128 = 0x80
    ESDObject *mCurrentMacCharStyle;	// 136 = 0x88
    void *mSrcDocMasterStyleInfoVector;	// 144 = 0x90
    void *mSrcCurrentMasterStyleInfoVector;	// 152 = 0x98
    PBSlideState *mSlideState;	// 160 = 0xa0
    id <TCCancelDelegate> mCancel;	// 168 = 0xa8
    _Bool mHasSlideNumberPlaceholder;	// 176 = 0xb0
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000004347ff
@property _Bool hasSlideNumberPlaceholder; // @synthesize hasSlideNumberPlaceholder=mHasSlideNumberPlaceholder;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
@property(retain) ESDContainer *sourceSlideListHolder; // @synthesize sourceSlideListHolder=mSrcSlideListHolder;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;	// IMP=0x000000000002d851
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;	// IMP=0x0000000000037f7f
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(_Bool)arg2;	// IMP=0x0000000000102a05
- (_Bool)isCancelled;	// IMP=0x000000000001dd78
- (void)setSourceSlideId:(unsigned int)arg1;	// IMP=0x000000000003bb07
- (void *)currentSlideTextBlockRecordIndexRangeVector;	// IMP=0x00000000004347f5
- (struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)arg1;	// IMP=0x00000000000221db
- (struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)arg1;	// IMP=0x0000000000018549
- (void)setCurrentSourceMasterStyleInfoVector:(void *)arg1;	// IMP=0x00000000000221ce
- (_Bool)hasCurrentSourceMasterStyleInfoVector;	// IMP=0x000000000002b459
- (void)resetSlideState;	// IMP=0x00000000004347dc
- (id)slideState;	// IMP=0x00000000004347cb
- (id)masterStyles:(id)arg1;	// IMP=0x000000000003744b
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;	// IMP=0x0000000000023ddd
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;	// IMP=0x0000000000029719
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;	// IMP=0x00000000000a4a41
- (id)currentMacCharStyle;	// IMP=0x0000000000019658
- (id)currentBulletStyle;	// IMP=0x000000000002b46b
- (void)setPlaceholderMacCharStyles:(id)arg1;	// IMP=0x00000000001ceb92
- (void)setPlaceholderBulletStyles:(id)arg1;	// IMP=0x0000000000150729
- (void)setBulletIndex:(unsigned int)arg1;	// IMP=0x0000000000019672
- (unsigned int)bulletIndex;	// IMP=0x00000000004347c1
- (void)setHasCharacterPropertyBulletIndex:(_Bool)arg1;	// IMP=0x000000000002c15e
- (_Bool)hasCharacterPropertyBulletIndex;	// IMP=0x0000000000019669
- (void)setTgtSlide:(id)arg1;	// IMP=0x0000000000027e04
- (id)tgtSlide;	// IMP=0x000000000002c192
- (id)fontEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001967f
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;	// IMP=0x0000000000018181
- (unsigned long long)fontEntityCount;	// IMP=0x00000000004347ab
- (id)officeArtState;	// IMP=0x000000000001d1d7
- (id)slideIndexesRef;	// IMP=0x000000000043479d
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;	// IMP=0x0000000000434741
- (void)addSlideIndex:(unsigned long long)arg1;	// IMP=0x00000000004346d9
- (unsigned long long)numberOfSlideIndexes;	// IMP=0x000000000002da6d
- (id)tgtPresentation;	// IMP=0x000000000001855f
- (void)setDocumentRoot:(id)arg1;	// IMP=0x0000000000017cf0
- (id)documentRoot;	// IMP=0x000000000001c4ea
- (void *)reader;	// IMP=0x000000000000cc78
- (void)dealloc;	// IMP=0x00000000000b253f
- (id)initWithReader:(void *)arg1 tgtPresentation:(id)arg2;	// IMP=0x000000000000c2f1

@end
