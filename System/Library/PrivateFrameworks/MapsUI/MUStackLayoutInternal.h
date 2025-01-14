//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol MULayoutItem;

@interface MUStackLayoutInternal
{
    MISSING_TYPE *builder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002a330
@property(nonatomic) struct NSDirectionalEdgeInsets insets;
@property(nonatomic) double spacing;
@property(nonatomic) float alignmentFittingSizePriority;
@property(nonatomic) _Bool alignmentBoundsContent;
@property(nonatomic) long long alignment;
@property(nonatomic) float distributionFittingSizePriority;
@property(nonatomic) _Bool distributionBoundsContent;
@property(nonatomic) long long distribution;
@property(nonatomic) long long axis;
@property(nonatomic) __weak id <MULayoutItem> container;
- (id)initWithContainer:(id)arg1 axis:(long long)arg2;	// IMP=0x0000000000027a30
- (void)setAlignmentFittingSizePriority:(float)arg1 forArrangedLayoutItem:(id)arg2;	// IMP=0x000000000002c3f0
- (float)alignmentFittingSizePriorityForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002c1c0
- (void)setAlignmentBoundsContent:(_Bool)arg1 forArrangedLayoutItem:(id)arg2;	// IMP=0x000000000002c140
- (_Bool)alignmentBoundsContentForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002bf10
- (void)setAlignment:(long long)arg1 forArrangedLayoutItem:(id)arg2;	// IMP=0x000000000002be90
- (long long)alignmentForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002bc40
- (void)resetAlignmentForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002bb90
- (void)disableAlignmentForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002b9d0
- (_Bool)hasAlignmentForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002b960
- (void)setOffset:(struct UIOffset)arg1 forArrangedLayoutItem:(id)arg2;	// IMP=0x000000000002b790
- (struct UIOffset)offsetForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002b580
- (void)setPadding:(struct NSDirectionalEdgeInsets)arg1 forArrangedLayoutItem:(id)arg2;	// IMP=0x000000000002b380
- (struct NSDirectionalEdgeInsets)paddingForArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002b120
- (void)removeArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002abc0
- (void)addArrangedLayoutItem:(id)arg1;	// IMP=0x000000000002ab10
@property(nonatomic, copy) NSArray *arrangedLayoutItems;

@end

