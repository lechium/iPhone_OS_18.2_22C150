//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SUUIHorizontalLockupLayout : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    double _imageMarginRight;	// 16 = 0x10
    struct UIEdgeInsets _metadataColumnEdgeInsets;	// 24 = 0x18
    double _metadataColumnMinHeight;	// 56 = 0x38
    double _tallestNonMetadataColumnHeight;	// 64 = 0x40
}

+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;	// IMP=0x006000000033834e
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000338255
+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000338155
- (void).cxx_destruct;	// IMP=0x00000000003393c5
@property(readonly, nonatomic) struct UIEdgeInsets metadataColumnEdgeInsets; // @synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;	// IMP=0x00000000003392a4
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000338e5d
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000338c10
- (double)topPaddingForViewElement:(id)arg1;	// IMP=0x0000000000338bab
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x00000000003384cd
- (double)columnSpacingForColumnIdentifier:(long long)arg1;	// IMP=0x00000000003384a5
- (double)bottomPaddingForViewElement:(id)arg1;	// IMP=0x00000000003383f7
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x000000000033765c

@end
