//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionsFilterLogicController, GEOGuideLocation, GEOGuidesHomeResult, GuidesHomeHeaderViewModel, GuidesHomeSection, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIFont;
@protocol MKPlaceBatchConsumer, MKPlaceBatchFetcher, UITraitEnvironment;

@interface GuidesHomeLogicController : NSObject
{
    GEOGuidesHomeResult *_result;	// 8 = 0x8
    NSMutableDictionary *_collectionLogicControllers;	// 16 = 0x10
    NSMutableDictionary *_compactCollectionLogicControllers;	// 24 = 0x18
    NSArray *_publishers;	// 32 = 0x20
    NSMutableArray *_sections;	// 40 = 0x28
    UIFont *_titleFont;	// 48 = 0x30
    double _maxWidth;	// 56 = 0x38
    id <UITraitEnvironment> _traitEnvironment;	// 64 = 0x40
    GEOGuideLocation *_guideLocation;	// 72 = 0x48
    GuidesHomeHeaderViewModel *_featuredGuideViewModel;	// 80 = 0x50
    CollectionsFilterLogicController *_filterLogicController;	// 88 = 0x58
    NSArray *_recentCollectionFromCollectionResults;	// 96 = 0x60
    NSArray *_batchCollectionIds;	// 104 = 0x68
    GuidesHomeSection *_filteredGuidesSection;	// 112 = 0x70
    GuidesHomeSection *_loadingSection;	// 120 = 0x78
    id <MKPlaceBatchFetcher> _guideFetcher;	// 128 = 0x80
    id <MKPlaceBatchConsumer> _guideConsumer;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000009b2a49
@property(nonatomic) __weak id <MKPlaceBatchConsumer> guideConsumer; // @synthesize guideConsumer=_guideConsumer;
@property(nonatomic) __weak id <MKPlaceBatchFetcher> guideFetcher; // @synthesize guideFetcher=_guideFetcher;
@property(retain, nonatomic) GuidesHomeSection *loadingSection; // @synthesize loadingSection=_loadingSection;
@property(retain, nonatomic) GuidesHomeSection *filteredGuidesSection; // @synthesize filteredGuidesSection=_filteredGuidesSection;
@property(retain, nonatomic) NSArray *batchCollectionIds; // @synthesize batchCollectionIds=_batchCollectionIds;
@property(retain, nonatomic) NSArray *recentCollectionFromCollectionResults; // @synthesize recentCollectionFromCollectionResults=_recentCollectionFromCollectionResults;
@property(retain, nonatomic) CollectionsFilterLogicController *filterLogicController; // @synthesize filterLogicController=_filterLogicController;
@property(retain, nonatomic) GuidesHomeHeaderViewModel *featuredGuideViewModel; // @synthesize featuredGuideViewModel=_featuredGuideViewModel;
@property(retain, nonatomic) GEOGuideLocation *guideLocation; // @synthesize guideLocation=_guideLocation;
@property(retain, nonatomic) id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(retain, nonatomic) NSMutableDictionary *compactCollectionLogicControllers; // @synthesize compactCollectionLogicControllers=_compactCollectionLogicControllers;
@property(retain, nonatomic) NSMutableDictionary *collectionLogicControllers; // @synthesize collectionLogicControllers=_collectionLogicControllers;
@property(retain, nonatomic) GEOGuidesHomeResult *result; // @synthesize result=_result;
- (void)scrollToSelectedFilter;	// IMP=0x00100000009b285f
- (id)routeToSelectedGuidesHomeFilterAtIndexPath:(id)arg1;	// IMP=0x00100000009b26c6
- (id)routeToSelectedAllCollectionsFilterAtIndexPath:(id)arg1;	// IMP=0x00100000009b26be
- (id)routeToSelectedFilterAtIndexPath:(id)arg1;	// IMP=0x00100000009b26b6
- (id)selectedFilterIndexPath;	// IMP=0x00100000009b2666
- (void)initializeSectionsUsingMaxWidth:(double)arg1 traitEnvironment:(id)arg2;	// IMP=0x00100000009b1240
- (id)itemsForSectionAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009b0e06
- (id)filterValueAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009b0d4f
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009b0ca5
- (id)allSections;	// IMP=0x00100000009b0c5d
- (void)appendBatchOfCollections:(id)arg1;	// IMP=0x00100000009b0b66
- (void)updateFilteredCollectionsFromResults:(id)arg1 collectionIds:(id)arg2;	// IMP=0x00100000009b0787
- (void)willDisplayCellAtIndexpath:(id)arg1;	// IMP=0x00100000009b068e
- (void)initializeFonts;	// IMP=0x00100000009b05e2
- (id)initWithGuidesHomeResult:(id)arg1 maxWidth:(double)arg2 traitEnvironment:(id)arg3 guideFetcher:(id)arg4 guideConsumer:(id)arg5 guideLocation:(id)arg6;	// IMP=0x00100000009b04ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
