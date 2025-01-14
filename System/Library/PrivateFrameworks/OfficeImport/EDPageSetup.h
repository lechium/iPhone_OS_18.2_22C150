//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPageSetup : NSObject
{
    int mOrientation;	// 8 = 0x8
    int mPageOrder;	// 12 = 0xc
    _Bool mCustomFirstPageNumber;	// 16 = 0x10
    unsigned long long mFirstPageNumber;	// 24 = 0x18
    unsigned long long mFitToHeight;	// 32 = 0x20
    unsigned long long mFitToWidth;	// 40 = 0x28
    unsigned long long mScale;	// 48 = 0x30
    float mLeftMargin;	// 56 = 0x38
    float mRightMargin;	// 60 = 0x3c
    float mTopMargin;	// 64 = 0x40
    float mBottomMargin;	// 68 = 0x44
    float mHeaderMargin;	// 72 = 0x48
    float mFooterMargin;	// 76 = 0x4c
}

+ (id)pageSetup;	// IMP=0x0060000000123a62
- (id)description;	// IMP=0x00000000003a490d
- (void)setFooterMargin:(float)arg1;	// IMP=0x0000000000123b53
- (float)footerMargin;	// IMP=0x00000000003a4902
- (void)setHeaderMargin:(float)arg1;	// IMP=0x0000000000123b48
- (float)headerMargin;	// IMP=0x00000000003a48f7
- (void)setBottomMargin:(float)arg1;	// IMP=0x0000000000123b3d
- (float)bottomMargin;	// IMP=0x00000000003a48ec
- (void)setTopMargin:(float)arg1;	// IMP=0x0000000000123b32
- (float)topMargin;	// IMP=0x00000000003a48e1
- (void)setRightMargin:(float)arg1;	// IMP=0x0000000000123b27
- (float)rightMargin;	// IMP=0x00000000003a48d6
- (void)setLeftMargin:(float)arg1;	// IMP=0x0000000000123b1c
- (float)leftMargin;	// IMP=0x00000000003a48cb
- (void)setScale:(unsigned long long)arg1;	// IMP=0x0000000000123b5e
- (unsigned long long)scale;	// IMP=0x00000000003a48c1
- (void)setFitToWidth:(unsigned long long)arg1;	// IMP=0x0000000000123b12
- (unsigned long long)fitToWidth;	// IMP=0x00000000003a48b7
- (void)setFitToHeight:(unsigned long long)arg1;	// IMP=0x0000000000123b08
- (unsigned long long)fitToHeight;	// IMP=0x00000000003a48ad
- (void)setFirstPageNumber:(unsigned long long)arg1;	// IMP=0x0000000000123af1
- (unsigned long long)firstPageNumber;	// IMP=0x00000000003a48a3
- (void)setCustomFirstPageNumber:(_Bool)arg1;	// IMP=0x0000000000123aff
- (_Bool)customFirstPageNumber;	// IMP=0x00000000003a489a
- (void)setOrder:(int)arg1;	// IMP=0x0000000000123ae8
- (int)order;	// IMP=0x00000000003a4891
- (void)setOrientation:(int)arg1;	// IMP=0x0000000000123adf
- (int)orientation;	// IMP=0x00000000003a4888
- (id)init;	// IMP=0x0000000000123a7c

@end

