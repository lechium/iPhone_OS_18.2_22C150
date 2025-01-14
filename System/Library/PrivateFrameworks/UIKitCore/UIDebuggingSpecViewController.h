//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingSpecViewController : UIViewController
{
    UIView *_spec;	// 8 = 0x8
    NSMutableArray *_specImages;	// 16 = 0x10
    double _originalOpacity;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    UICollectionViewFlowLayout *_flowLayout;	// 40 = 0x28
    struct CGPoint _origin;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001866eab
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double originalOpacity; // @synthesize originalOpacity=_originalOpacity;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSMutableArray *specImages; // @synthesize specImages=_specImages;
@property(retain, nonatomic) UIView *spec; // @synthesize spec=_spec;
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000001866d6c
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000001866c59
- (_Bool)startMediaBrowserFromViewController:(id)arg1;	// IMP=0x0000000001866b99
- (void)prepareForMediaBrowser;	// IMP=0x0000000001866b32
- (void)hideImage;	// IMP=0x0000000001866949
- (void)gotPanGesture:(id)arg1;	// IMP=0x00000000018665f4
- (void)gotDeleteGesture:(id)arg1;	// IMP=0x000000000186638e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000001865f73
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000001865dd9
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000001865d95
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000001865d8a
- (void)viewDidLoad;	// IMP=0x0000000001865b24
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000001865935

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

