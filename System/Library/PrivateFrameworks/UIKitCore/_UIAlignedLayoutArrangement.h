//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement
{
    NSMutableDictionary *_alignmentConstraints;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
}

+ (Class)_configurationHistoryClass;	// IMP=0x0010000001904bb4
- (void).cxx_destruct;	// IMP=0x0000000001908a36
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(readonly, copy) NSString *description;
- (void)_clearAllConstraintsArrays;	// IMP=0x0000000001908846
- (void)_updateArrangementConstraints;	// IMP=0x000000000190876f
- (void)_addConstraintGroupsAsNecessary;	// IMP=0x0000000001908171
- (void)_addIndividualConstraintsIfPossible;	// IMP=0x0000000001907765
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;	// IMP=0x00000000019075c8
- (long long)_attributeForConstraintGroupName:(id)arg1;	// IMP=0x00000000019073dc
- (void)_removeIndividualConstraintsAsNecessary;	// IMP=0x0000000001906dc8
- (void)_removeConstraintGroupsAsNecessary;	// IMP=0x0000000001905b38
- (_Bool)_wantsConstraintsForAttribute:(long long)arg1;	// IMP=0x0000000001905a0b
- (_Bool)_wantsAmbiguitySuppressionConstraints;	// IMP=0x00000000019059ba
- (_Bool)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;	// IMP=0x0000000001905968
- (id)_baselineDependentConstraints;	// IMP=0x000000000190560d
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;	// IMP=0x00000000019055b6
- (void)_updateConfigurationHistory;	// IMP=0x00000000019054f3
- (_Bool)_hasStaleConfiguration;	// IMP=0x000000000190542a
- (id)_alignmentPropertySource;	// IMP=0x0000000001905418
- (id)_alignmentConfigurationHistory;	// IMP=0x0000000001905406
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x0000000001905163
- (_Bool)_usesCenteringConnectionConstraint;	// IMP=0x0000000001905118
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x0000000001905068
- (_Bool)_spanningGuideConstraintsNeedUpdate;	// IMP=0x0000000001904fb0
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;	// IMP=0x0000000001904ef0
- (long long)_axisForSpanningLayoutGuide;	// IMP=0x0000000001904ea5
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x0000000001904e98
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x0000000001904c73
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;
- (id)initWithItems:(id)arg1;	// IMP=0x0000000001904bc5
- (void)dealloc;	// IMP=0x0000000001904a48

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly) Class superclass;

@end

