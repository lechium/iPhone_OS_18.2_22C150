//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupLayout : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    double _imageMarginRight;	// 16 = 0x10
    struct UIEdgeInsets _metadataColumnEdgeInsets;	// 24 = 0x18
    double _metadataColumnMinHeight;	// 56 = 0x38
    double _tallestNonMetadataColumnHeight;	// 64 = 0x40
}

+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000267a96
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000267953
+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000267809
- (void).cxx_destruct;	// IMP=0x0000000000268ab5
@property(readonly, nonatomic) struct UIEdgeInsets metadataColumnEdgeInsets; // @synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000268994
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000026854d
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000268300
- (double)topPaddingForViewElement:(id)arg1;	// IMP=0x000000000026829b
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x0000000000267c73
- (double)columnSpacingForColumnIdentifier:(long long)arg1;	// IMP=0x0000000000267c4b
- (double)bottomPaddingForViewElement:(id)arg1;	// IMP=0x0000000000267b9d
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x0000000000266ccc

@end

