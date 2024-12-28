//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController
{
    NSArray *_highlights;	// 8 = 0x8
    NSMutableArray *_currentKeyAssets;	// 16 = 0x10
    NSMutableArray *_legacyKeyAssets;	// 24 = 0x18
    NSMutableArray *_modernKeyAssets;	// 32 = 0x20
    NSMutableArray *_keyAssetReasons;	// 40 = 0x28
    NSMutableArray *_indexMap;	// 48 = 0x30
    NSArray *_visibleAssets;	// 56 = 0x38
    _Bool _showsDifferentOnly;	// 64 = 0x40
    _Bool _showsMeaningsOnly;	// 65 = 0x41
    _Bool _canLiveUpdate;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x000000000018e6fc
- (void)didTapHeaderView:(id)arg1;	// IMP=0x000000000018e5dd
- (void)updateData;	// IMP=0x000000000018ddaa
- (void)toggleShowsMeaningsOnly:(id)arg1;	// IMP=0x000000000018dd4e
- (void)toggleShowsDifferentOnly:(id)arg1;	// IMP=0x000000000018dcf2
- (_Bool)shouldShowSectionHeaders;	// IMP=0x000000000018dcea
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000018dcae
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000018dbd6
- (void)_fetchHighlights;	// IMP=0x000000000018d4c9
- (void)viewDidLoad;	// IMP=0x000000000018d300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
